#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/KHLDHMFKOCP.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/AISimulatePhase.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/MarbleNetWorkMsg.h"
#include "unitysdk/RPG/GameCore/PetMarbleLevelMode.h"
#include "unitysdk/KNOGPMGGDFL.h"
#include "unitysdk/RPG/MVector2.h"
class GFHCKBHCNDF;
class IFFJIHFGOBO;
class MBDOBECHOJA;
class NHDEJPALGNC;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define GIPCDLCCMKA_ALFCMFIDFOA_OFFSET UNITYSDK_OFFSET(0x1CAAE720)
#define GIPCDLCCMKA_APCLOEHCKFD_OFFSET UNITYSDK_OFFSET(0x1CAAE1A0)
#define GIPCDLCCMKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAABAB0)
#define GIPCDLCCMKA_DALKINCKLJJ_OFFSET UNITYSDK_OFFSET(0x1CAABC80)
#define GIPCDLCCMKA_DBGGPIKKKOJ_OFFSET UNITYSDK_OFFSET(0x1CAAE520)
#define GIPCDLCCMKA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CAABB80)
#define GIPCDLCCMKA_FHFGBJCKAKI_OFFSET UNITYSDK_OFFSET(0x1CAAE320)
#define GIPCDLCCMKA_GJOHKNNNFJA_OFFSET UNITYSDK_OFFSET(0x1CAABC00)
#define GIPCDLCCMKA_GKDGAIGKEIK_OFFSET UNITYSDK_OFFSET(0x1CAAE870)
#define GIPCDLCCMKA_IHNMMLPAHMB_OFFSET UNITYSDK_OFFSET(0x1CAAC750)
#define GIPCDLCCMKA_ILFHKDNENIH_OFFSET UNITYSDK_OFFSET(0x1CAAC700)
#define GIPCDLCCMKA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1CAAF500)
#define GIPCDLCCMKA_KEDCBLPPKLM_OFFSET UNITYSDK_OFFSET(0x1CAAE960)
#define GIPCDLCCMKA_LFIIIGELBEO_OFFSET UNITYSDK_OFFSET(0x1CAAC480)
#define GIPCDLCCMKA_MDPLKMGIJMI_OFFSET UNITYSDK_OFFSET(0x1CAAD750)
#define GIPCDLCCMKA_MOJOOAGFNGJ_OFFSET UNITYSDK_OFFSET(0x1CAAFD60)
#define GIPCDLCCMKA_NFNINFPMHFK_OFFSET UNITYSDK_OFFSET(0x1CAAE600)
#define GIPCDLCCMKA_OHBINDIPKCL_OFFSET UNITYSDK_OFFSET(0x1CAAE090)
#define GIPCDLCCMKA_PCFCDMBONPL_OFFSET UNITYSDK_OFFSET(0x1CAAEBF0)
#define GIPCDLCCMKA_PJFKNNIHMAN_OFFSET UNITYSDK_OFFSET(0x1CAAE7E0)

inline static constexpr unsigned int GIPCDLCCMKA_TypeDefinitionIndex = 43080;

	class GIPCDLCCMKA : public ::KHLDHMFKOCP
	{
	public:
		::System::Collections::IEnumerator* FKLIAMKNHDN; // 0x200
		::NHDEJPALGNC* EGMCCMAJIJD; // 0x208
		::System::UInt32 HIACJHNEBGH; // 0x210
		::System::Single ABJLEPENOPK; // 0x214
		::System::Single JMIEEFMOFIG; // 0x218
		::System::UInt32 HMJLMFLEDCC; // 0x21C
		::RPG::Client::LittleGame::Marble::AISimulatePhase DJDFPDIGEHK; // 0x220
		::System::Single NNMLPHCGING; // 0x224
		::System::Void _ctor(::FJPMJPEKLJL a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + GIPCDLCCMKA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPCDLCCMKA_DISPOSE_OFFSET))(this);
		}

		::System::Void GJOHKNNNFJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPCDLCCMKA_GJOHKNNNFJA_OFFSET))(this);
		}

		::System::Void DALKINCKLJJ(::GFHCKBHCNDF* a1, ::IFFJIHFGOBO* a2, ::System::Boolean a3, ::RPG::GameCore::PetMarbleLevelMode a4, ::System::UInt32 a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*, ::IFFJIHFGOBO*, ::System::Boolean, ::RPG::GameCore::PetMarbleLevelMode, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + GIPCDLCCMKA_DALKINCKLJJ_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void LFIIIGELBEO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GIPCDLCCMKA_LFIIIGELBEO_OFFSET))(this, a1);
		}

		::System::Void ILFHKDNENIH(::IFFJIHFGOBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFFJIHFGOBO*))((::PBYTE)hIl2Cpp + GIPCDLCCMKA_ILFHKDNENIH_OFFSET))(this, a1);
		}

		::MBDOBECHOJA* IHNMMLPAHMB()
		{
			return ((::MBDOBECHOJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPCDLCCMKA_IHNMMLPAHMB_OFFSET))(this);
		}

		::System::Void MDPLKMGIJMI(::MBDOBECHOJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBDOBECHOJA*))((::PBYTE)hIl2Cpp + GIPCDLCCMKA_MDPLKMGIJMI_OFFSET))(this, a1);
		}

		::Il2CppArray<::KNOGPMGGDFL>* APCLOEHCKFD(::System::UInt32 a1, ::RPG::MVector2 a2)
		{
			return ((::Il2CppArray<::KNOGPMGGDFL>*(*)(::PVOID, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GIPCDLCCMKA_APCLOEHCKFD_OFFSET))(this, a1, a2);
		}

		::System::Void FHFGBJCKAKI(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::MVector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GIPCDLCCMKA_FHFGBJCKAKI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NFNINFPMHFK(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + GIPCDLCCMKA_NFNINFPMHFK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ALFCMFIDFOA(::System::UInt32 a1, ::RPG::Client::LittleGame::Marble::MarbleNetWorkMsg a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LittleGame::Marble::MarbleNetWorkMsg))((::PBYTE)hIl2Cpp + GIPCDLCCMKA_ALFCMFIDFOA_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GIPCDLCCMKA_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void PJFKNNIHMAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPCDLCCMKA_PJFKNNIHMAN_OFFSET))(this);
		}

		::System::Void GKDGAIGKEIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPCDLCCMKA_GKDGAIGKEIK_OFFSET))(this);
		}

		::System::Void MOJOOAGFNGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPCDLCCMKA_MOJOOAGFNGJ_OFFSET))(this);
		}

		::System::Void KEDCBLPPKLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPCDLCCMKA_KEDCBLPPKLM_OFFSET))(this);
		}

		::System::Boolean DBGGPIKKKOJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPCDLCCMKA_DBGGPIKKKOJ_OFFSET))(this);
		}

		::System::Void PCFCDMBONPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPCDLCCMKA_PCFCDMBONPL_OFFSET))(this);
		}

		::System::Void OHBINDIPKCL(::System::UInt32 a1, ::System::Boolean a2, ::System::Single a3, ::RPG::MVector2 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Single, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GIPCDLCCMKA_OHBINDIPKCL_OFFSET))(this, a1, a2, a3, a4);
		}

	};
