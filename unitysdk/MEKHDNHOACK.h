#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OELKAFALAFH_EWindowType.h"
#include "unitysdk/RPG/Client/EInflateIntent.h"
#include "unitysdk/System/Object.h"
class ACGKMEPLIBJ;
namespace RPG::Client { class InflatableFighterPuzzleBoard; }

#define MEKHDNHOACK_CTOR_OFFSET UNITYSDK_OFFSET(0xB8DC3D0)
#define MEKHDNHOACK_DGLFAJAPCGK_OFFSET UNITYSDK_OFFSET(0xB8DC7E0)
#define MEKHDNHOACK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8DC4F0)
#define MEKHDNHOACK_GFFMFLOHHFC_OFFSET UNITYSDK_OFFSET(0xB8DCAC0)
#define MEKHDNHOACK_GFKBECOKJGJ_OFFSET UNITYSDK_OFFSET(0xB8DC730)
#define MEKHDNHOACK_HIFBDDLLFIE_OFFSET UNITYSDK_OFFSET(0xB8DCB40)
#define MEKHDNHOACK_HNJHBGPIMNJ_OFFSET UNITYSDK_OFFSET(0xB8DC950)
#define MEKHDNHOACK_ICGKNBBECAN_OFFSET UNITYSDK_OFFSET(0xB8DC5F0)
#define MEKHDNHOACK_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0xB8DC3E0)
#define MEKHDNHOACK_KHKDHMEPCOD_OFFSET UNITYSDK_OFFSET(0xB8DC680)
#define MEKHDNHOACK_MBOMDOAMNHP_OFFSET UNITYSDK_OFFSET(0xB8DC540)
#define MEKHDNHOACK_OJDJKEELHLM_OFFSET UNITYSDK_OFFSET(0xB8DC490)

inline static constexpr unsigned int MEKHDNHOACK_TypeDefinitionIndex = 68677;

	class MEKHDNHOACK : public ::System::Object
	{
	public:
		::ACGKMEPLIBJ* ICKHCACDNCA; // 0x10
		::ACGKMEPLIBJ* DILFEODGLCM; // 0x18
		::RPG::Client::InflatableFighterPuzzleBoard* CCAHGFIABKE; // 0x20
		::System::Single EMFANICDCMF; // 0x28
		::System::Boolean NIDMBGNAKIM; // 0x2C
		::System::Boolean MBGCCPNGBKI; // 0x2D
		::System::Byte _padding0[0x2];
		::System::Int32 CHOCLEANHKO; // 0x30
		::System::Single EPHNGKLGMPD; // 0x34
		::System::Boolean CEMAGGCKKNJ; // 0x38
		::System::Boolean MDDOCJDNCBD; // 0x39
		::System::Boolean MKMGEOHKDFK; // 0x3A
		::System::Void _ctor(::RPG::Client::InflatableFighterPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::InflatableFighterPuzzleBoard*))((::PBYTE)hIl2Cpp + MEKHDNHOACK_CTOR_OFFSET))(this, a1);
		}

		::System::Void JDEKJLHMPLG(::ACGKMEPLIBJ* a1, ::ACGKMEPLIBJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ACGKMEPLIBJ*, ::ACGKMEPLIBJ*))((::PBYTE)hIl2Cpp + MEKHDNHOACK_JDEKJLHMPLG_OFFSET))(this, a1, a2);
		}

		::System::Void OJDJKEELHLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKHDNHOACK_OJDJKEELHLM_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKHDNHOACK_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::EInflateIntent MBOMDOAMNHP()
		{
			return ((::RPG::Client::EInflateIntent(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKHDNHOACK_MBOMDOAMNHP_OFFSET))(this);
		}

		::System::Boolean KHKDHMEPCOD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKHDNHOACK_KHKDHMEPCOD_OFFSET))(this);
		}

		::System::Boolean GFKBECOKJGJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKHDNHOACK_GFKBECOKJGJ_OFFSET))(this);
		}

		::System::Void ICGKNBBECAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEKHDNHOACK_ICGKNBBECAN_OFFSET))(this);
		}

		::System::Void DGLFAJAPCGK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MEKHDNHOACK_DGLFAJAPCGK_OFFSET))(this, a1);
		}

		::System::Void GFFMFLOHHFC(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MEKHDNHOACK_GFFMFLOHHFC_OFFSET))(this, a1, a2);
		}

		::System::Void HNJHBGPIMNJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MEKHDNHOACK_HNJHBGPIMNJ_OFFSET))(this, a1);
		}

		static ::System::Boolean HIFBDDLLFIE(::OELKAFALAFH_EWindowType a1)
		{
			return ((::System::Boolean(*)(::OELKAFALAFH_EWindowType))((::PBYTE)hIl2Cpp + MEKHDNHOACK_HIFBDDLLFIE_OFFSET))(a1);
		}

	};
