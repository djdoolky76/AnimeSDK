#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDMONJOAKHD.h"
class APLEMBNFLAA;
class HPKACEPPPCA;
class KLEFGGIHGMI;
class LJFHKAJPFNE;
class OIDDJJLHGKO;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace UnityEngine { class GameObject; }

#define DFEKDGAKLAF_BGBPEMJCGLH_OFFSET UNITYSDK_OFFSET(0xE826800)
#define DFEKDGAKLAF_CMPBIBPFODL_OFFSET UNITYSDK_OFFSET(0xE826340)
#define DFEKDGAKLAF_CTOR_OFFSET UNITYSDK_OFFSET(0xE825B30)
#define DFEKDGAKLAF_GEKPBHICMHA_OFFSET UNITYSDK_OFFSET(0xE826130)
#define DFEKDGAKLAF_INACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0xE826EE0)
#define DFEKDGAKLAF_OIIHIGEDHHD_OFFSET UNITYSDK_OFFSET(0xE825F70)
#define DFEKDGAKLAF_OJGKFPAAFAG_OFFSET UNITYSDK_OFFSET(0xE826430)
#define DFEKDGAKLAF_SOLVECALCULATESTREAMINGTASK_OFFSET UNITYSDK_OFFSET(0xE825B80)
#define DFEKDGAKLAF__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0xE826540)

	class DFEKDGAKLAF : public ::GDMONJOAKHD
	{
	public:
		::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::LJFHKAJPFNE* a2, ::KLEFGGIHGMI* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::LJFHKAJPFNE*, ::KLEFGGIHGMI*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DFEKDGAKLAF_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SolveCalculateStreamingTask(::OIDDJJLHGKO* a1, ::APLEMBNFLAA* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::OIDDJJLHGKO*, ::APLEMBNFLAA*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DFEKDGAKLAF_SOLVECALCULATESTREAMINGTASK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void GEKPBHICMHA(::APLEMBNFLAA* a1, ::System::Boolean a2, ::System::Single a3, ::OIDDJJLHGKO* a4)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*, ::System::Boolean, ::System::Single, ::OIDDJJLHGKO*))((::PBYTE)hIl2Cpp + DFEKDGAKLAF_GEKPBHICMHA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 OJGKFPAAFAG(::APLEMBNFLAA* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Int32(*)(::PVOID, ::APLEMBNFLAA*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DFEKDGAKLAF_OJGKFPAAFAG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _SolveInstanceLodCalc(::OIDDJJLHGKO* a1, ::APLEMBNFLAA* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::HPKACEPPPCA* a4, ::System::Int32 a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::OIDDJJLHGKO*, ::APLEMBNFLAA*, ::RPG::Client::OpenWorld::StreamingItemData*, ::HPKACEPPPCA*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DFEKDGAKLAF__SOLVEINSTANCELODCALC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void CMPBIBPFODL(::APLEMBNFLAA* a1, ::System::Boolean a2, ::System::Single a3, ::OIDDJJLHGKO* a4)
		{
			return ((::System::Void(*)(::PVOID, ::APLEMBNFLAA*, ::System::Boolean, ::System::Single, ::OIDDJJLHGKO*))((::PBYTE)hIl2Cpp + DFEKDGAKLAF_CMPBIBPFODL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean BGBPEMJCGLH(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + DFEKDGAKLAF_BGBPEMJCGLH_OFFSET))(this, a1, a2);
		}

		::System::Boolean InActiveInstance(::HPKACEPPPCA* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPKACEPPPCA*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DFEKDGAKLAF_INACTIVEINSTANCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OIIHIGEDHHD(::OIDDJJLHGKO* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::OIDDJJLHGKO*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + DFEKDGAKLAF_OIIHIGEDHHD_OFFSET))(this, a1, a2, a3);
		}

	};
