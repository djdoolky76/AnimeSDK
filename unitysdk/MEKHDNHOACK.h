#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OELKAFALAFH_EWindowType.h"
#include "unitysdk/RPG/Client/EInflateIntent.h"
#include "unitysdk/System/Object.h"
class ACGKMEPLIBJ;
namespace RPG::Client { class InflatableFighterPuzzleBoard; }

#define MEKHDNHOACK_CTOR_OFFSET UNITYSDK_OFFSET(0x17C66380)
#define MEKHDNHOACK_DGLFAJAPCGK_OFFSET UNITYSDK_OFFSET(0x17C66780)
#define MEKHDNHOACK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C66490)
#define MEKHDNHOACK_GFFMFLOHHFC_OFFSET UNITYSDK_OFFSET(0x17C66A60)
#define MEKHDNHOACK_GFKBECOKJGJ_OFFSET UNITYSDK_OFFSET(0x17C666D0)
#define MEKHDNHOACK_HIFBDDLLFIE_OFFSET UNITYSDK_OFFSET(0x17C66AE0)
#define MEKHDNHOACK_HNJHBGPIMNJ_OFFSET UNITYSDK_OFFSET(0x17C668F0)
#define MEKHDNHOACK_ICGKNBBECAN_OFFSET UNITYSDK_OFFSET(0x17C66590)
#define MEKHDNHOACK_JDEKJLHMPLG_OFFSET UNITYSDK_OFFSET(0x17C66390)
#define MEKHDNHOACK_KHKDHMEPCOD_OFFSET UNITYSDK_OFFSET(0x17C66620)
#define MEKHDNHOACK_MBOMDOAMNHP_OFFSET UNITYSDK_OFFSET(0x17C664E0)
#define MEKHDNHOACK_OJDJKEELHLM_OFFSET UNITYSDK_OFFSET(0x17C66430)

inline static constexpr unsigned int MEKHDNHOACK_TypeDefinitionIndex = 70629;

	class MEKHDNHOACK : public ::System::Object
	{
	public:
		::ACGKMEPLIBJ* ICKHCACDNCA; // 0x10
		::RPG::Client::InflatableFighterPuzzleBoard* CCAHGFIABKE; // 0x18
		::ACGKMEPLIBJ* DILFEODGLCM; // 0x20
		::System::Single EPHNGKLGMPD; // 0x28
		::System::Boolean MDDOCJDNCBD; // 0x2C
		::System::Boolean CEMAGGCKKNJ; // 0x2D
		::System::Boolean MBGCCPNGBKI; // 0x2E
		::System::Boolean MKMGEOHKDFK; // 0x2F
		::System::Boolean NIDMBGNAKIM; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single EMFANICDCMF; // 0x34
		::System::Int32 CHOCLEANHKO; // 0x38
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
