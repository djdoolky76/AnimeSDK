#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDEFINBJPAG;
namespace System { class Object; }

#define NDEFINBJPAG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAB8760)
#define NDEFINBJPAG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB87A0)
#define NDEFINBJPAG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EAB87B0)

inline static constexpr unsigned int NDEFINBJPAG___c_TypeDefinitionIndex = 28093;

	class NDEFINBJPAG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F7D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDEFINBJPAG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEFINBJPAG___C_CTOR_OFFSET))(this);
		}

		::NDEFINBJPAG* __cctor_b__23_0()
		{
			return ((::NDEFINBJPAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEFINBJPAG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
