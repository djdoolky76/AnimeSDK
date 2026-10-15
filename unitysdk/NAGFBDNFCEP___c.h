#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAGFBDNFCEP;
namespace System { class Object; }

#define NAGFBDNFCEP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC1560)
#define NAGFBDNFCEP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC15A0)
#define NAGFBDNFCEP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EAC15B0)

inline static constexpr unsigned int NAGFBDNFCEP___c_TypeDefinitionIndex = 25973;

	class NAGFBDNFCEP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAGFBDNFCEP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGFBDNFCEP___C_CTOR_OFFSET))(this);
		}

		::NAGFBDNFCEP* __cctor_b__23_0()
		{
			return ((::NAGFBDNFCEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGFBDNFCEP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
