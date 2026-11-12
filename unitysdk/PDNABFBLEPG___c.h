#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDNABFBLEPG;
namespace System { class Object; }

#define PDNABFBLEPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1DEEA0)
#define PDNABFBLEPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1DEEE0)
#define PDNABFBLEPG___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1F1DEEF0)

inline static constexpr unsigned int PDNABFBLEPG___c_TypeDefinitionIndex = 31910;

	class PDNABFBLEPG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F5A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDNABFBLEPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNABFBLEPG___C_CTOR_OFFSET))(this);
		}

		::PDNABFBLEPG* __cctor_b__48_0()
		{
			return ((::PDNABFBLEPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNABFBLEPG___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
