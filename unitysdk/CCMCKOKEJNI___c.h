#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCMCKOKEJNI;
namespace System { class Object; }

#define CCMCKOKEJNI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FEBBDD0)
#define CCMCKOKEJNI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FEBBE10)
#define CCMCKOKEJNI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FEBBE20)

inline static constexpr unsigned int CCMCKOKEJNI___c_TypeDefinitionIndex = 31924;

	class CCMCKOKEJNI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x61320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCMCKOKEJNI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMCKOKEJNI___C_CTOR_OFFSET))(this);
		}

		::CCMCKOKEJNI* __cctor_b__23_0()
		{
			return ((::CCMCKOKEJNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMCKOKEJNI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
