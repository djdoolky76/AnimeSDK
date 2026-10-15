#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OELKAFALAFH_EWindowType.h"
#include "unitysdk/System/Object.h"
class ACGKMEPLIBJ;
namespace RPG::Client { class MonoInflatableFighter; }

#define OELKAFALAFH_CTOR_OFFSET UNITYSDK_OFFSET(0xBE2AB90)
#define OELKAFALAFH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE2AC00)
#define OELKAFALAFH_JFMILGOGGHP_OFFSET UNITYSDK_OFFSET(0xBE2ABA0)
#define OELKAFALAFH_KHJNHDOJDDP_OFFSET UNITYSDK_OFFSET(0xBE2AC50)
#define OELKAFALAFH_KKOFJAJIKHI_OFFSET UNITYSDK_OFFSET(0xBE2AD00)

inline static constexpr unsigned int OELKAFALAFH_TypeDefinitionIndex = 68685;

	class OELKAFALAFH : public ::System::Object
	{
	public:
		::ACGKMEPLIBJ* CPIIOIPAAKK; // 0x10
		::RPG::Client::MonoInflatableFighter* CEODOONOFBM; // 0x18
		::System::Boolean DEANEDGAIHB; // 0x20
		::System::Boolean IEGFFNAPBDL; // 0x21
		::System::Byte _padding0[0x2];
		::OELKAFALAFH_EWindowType PJMLOLKIEOM; // 0x24
		::System::Void _ctor(::RPG::Client::MonoInflatableFighter* a1, ::ACGKMEPLIBJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoInflatableFighter*, ::ACGKMEPLIBJ*))((::PBYTE)hIl2Cpp + OELKAFALAFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JFMILGOGGHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OELKAFALAFH_JFMILGOGGHP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OELKAFALAFH_DISPOSE_OFFSET))(this);
		}

		::System::Void KHJNHDOJDDP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OELKAFALAFH_KHJNHDOJDDP_OFFSET))(this, a1);
		}

		::OELKAFALAFH_EWindowType KKOFJAJIKHI()
		{
			return ((::OELKAFALAFH_EWindowType(*)(::PVOID))((::PBYTE)hIl2Cpp + OELKAFALAFH_KKOFJAJIKHI_OFFSET))(this);
		}

	};
