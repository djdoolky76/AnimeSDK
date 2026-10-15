#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCBOLEAFMDN;
namespace System { class Object; }

#define PCBOLEAFMDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF04F40)
#define PCBOLEAFMDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF04F70)
#define PCBOLEAFMDN___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1DF04F80)

inline static constexpr unsigned int PCBOLEAFMDN___c_TypeDefinitionIndex = 27554;

	class PCBOLEAFMDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCBOLEAFMDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBOLEAFMDN___C_CTOR_OFFSET))(this);
		}

		::PCBOLEAFMDN* __cctor_b__63_0()
		{
			return ((::PCBOLEAFMDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBOLEAFMDN___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
