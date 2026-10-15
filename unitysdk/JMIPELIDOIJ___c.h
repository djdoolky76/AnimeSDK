#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMIPELIDOIJ;
namespace System { class Object; }

#define JMIPELIDOIJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E760180)
#define JMIPELIDOIJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7601B0)
#define JMIPELIDOIJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7601C0)

inline static constexpr unsigned int JMIPELIDOIJ___c_TypeDefinitionIndex = 30969;

	class JMIPELIDOIJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x650F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMIPELIDOIJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIPELIDOIJ___C_CTOR_OFFSET))(this);
		}

		::JMIPELIDOIJ* __cctor_b__23_0()
		{
			return ((::JMIPELIDOIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIPELIDOIJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
