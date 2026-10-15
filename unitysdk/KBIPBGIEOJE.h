#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBuffType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class ALMFLCJCHKP;
class LKFPICOFNDF;
namespace System { class String; }

#define KBIPBGIEOJE_AOBBLPIDECE_OFFSET UNITYSDK_OFFSET(0xB302BF0)
#define KBIPBGIEOJE_CTOR_OFFSET UNITYSDK_OFFSET(0xB302D10)
#define KBIPBGIEOJE_HGGMMMABMFA_OFFSET UNITYSDK_OFFSET(0xB302CC0)
#define KBIPBGIEOJE_HOPDOANKNIK_OFFSET UNITYSDK_OFFSET(0xB302960)
#define KBIPBGIEOJE_JEGBJPHEHOI_OFFSET UNITYSDK_OFFSET(0xB302850)
#define KBIPBGIEOJE_JOLMCAGPKOC_OFFSET UNITYSDK_OFFSET(0xB302B90)
#define KBIPBGIEOJE_LJPMCEFBPBC_OFFSET UNITYSDK_OFFSET(0xB3029F0)
#define KBIPBGIEOJE_MFBMHCAMAEI_OFFSET UNITYSDK_OFFSET(0xB302C60)

inline static constexpr unsigned int KBIPBGIEOJE_TypeDefinitionIndex = 77861;

	class KBIPBGIEOJE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIPBGIEOJE_CTOR_OFFSET))(this);
		}

		::System::Void JEGBJPHEHOI(::ALMFLCJCHKP* a1, ::LKFPICOFNDF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::LKFPICOFNDF*))((::PBYTE)hIl2Cpp + KBIPBGIEOJE_JEGBJPHEHOI_OFFSET))(this, a1, a2);
		}

		::System::Void LJPMCEFBPBC(::ALMFLCJCHKP* a1, ::LKFPICOFNDF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::LKFPICOFNDF*))((::PBYTE)hIl2Cpp + KBIPBGIEOJE_LJPMCEFBPBC_OFFSET))(this, a1, a2);
		}

		::System::String* HOPDOANKNIK(::RPG::GameCore::ChenLingBattleBuffType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::ChenLingBattleBuffType))((::PBYTE)hIl2Cpp + KBIPBGIEOJE_HOPDOANKNIK_OFFSET))(this, a1);
		}

		::System::Void JOLMCAGPKOC(::ALMFLCJCHKP* a1, ::LKFPICOFNDF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::LKFPICOFNDF*))((::PBYTE)hIl2Cpp + KBIPBGIEOJE_JOLMCAGPKOC_OFFSET))(this, a1, a2);
		}

		::System::Void AOBBLPIDECE(::ALMFLCJCHKP* a1, ::LKFPICOFNDF* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::LKFPICOFNDF*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KBIPBGIEOJE_AOBBLPIDECE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MFBMHCAMAEI(::ALMFLCJCHKP* a1, ::LKFPICOFNDF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::LKFPICOFNDF*))((::PBYTE)hIl2Cpp + KBIPBGIEOJE_MFBMHCAMAEI_OFFSET))(this, a1, a2);
		}

		::System::Void HGGMMMABMFA(::ALMFLCJCHKP* a1, ::LKFPICOFNDF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::LKFPICOFNDF*))((::PBYTE)hIl2Cpp + KBIPBGIEOJE_HGGMMMABMFA_OFFSET))(this, a1, a2);
		}

	};
