#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKGNKFKLIJK.h"
#include "unitysdk/System/Object.h"
class NGFHCJIAOLH;
class OAIPJANPCEK;
namespace Entitas { class IGroup; }

#define KKHELGFCIIE_CTOR_OFFSET UNITYSDK_OFFSET(0xB4BC450)
#define KKHELGFCIIE_DOMJCLFPNCO_OFFSET UNITYSDK_OFFSET(0xB4BCCB0)
#define KKHELGFCIIE_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB4BC5C0)
#define KKHELGFCIIE_IBHCGJJFGEH_OFFSET UNITYSDK_OFFSET(0xB4BCB00)
#define KKHELGFCIIE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB4BC460)
#define KKHELGFCIIE_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB4BD0C0)

inline static constexpr unsigned int KKHELGFCIIE_TypeDefinitionIndex = 77781;

	class KKHELGFCIIE : public ::System::Object
	{
	public:
		::OAIPJANPCEK* PDENFEFCAGN; // 0x10
		::BKGNKFKLIJK ELPOGGBGOJD; // 0x18
		::Entitas::IGroup* OIOBDKBLIID; // 0x30
		::System::Boolean IDAMFLICEAM; // 0x38
		::System::Byte _padding0[0x3];
		::System::Single KBCOHKPEELA; // 0x3C
		::System::Void _ctor(::OAIPJANPCEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAIPJANPCEK*))((::PBYTE)hIl2Cpp + KKHELGFCIIE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHELGFCIIE_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHELGFCIIE_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHELGFCIIE_TEARDOWN_OFFSET))(this);
		}

		::System::Void IBHCGJJFGEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHELGFCIIE_IBHCGJJFGEH_OFFSET))(this);
		}

		::System::Void DOMJCLFPNCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHELGFCIIE_DOMJCLFPNCO_OFFSET))(this);
		}

	};
