#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HONBPDEJDCC;
namespace System { class Object; }

#define HONBPDEJDCC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8ED790)
#define HONBPDEJDCC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8ED7D0)
#define HONBPDEJDCC___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1F8ED7E0)

inline static constexpr unsigned int HONBPDEJDCC___c_TypeDefinitionIndex = 29145;

	class HONBPDEJDCC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x416E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HONBPDEJDCC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HONBPDEJDCC___C_CTOR_OFFSET))(this);
		}

		::HONBPDEJDCC* __cctor_b__68_0()
		{
			return ((::HONBPDEJDCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HONBPDEJDCC___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
