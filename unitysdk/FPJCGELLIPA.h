#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/AnimatorTransitionInfo.h"
class FPJCGELLIPA_BCJEIAAFLGC;
namespace RPG::GameCore { class AnimGroupEventConfig; }
namespace RPG::GameCore { class CharacterAnimEventConfig; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FPJCGELLIPA_CAKANKMMMDH_OFFSET UNITYSDK_OFFSET(0x15910200)
#define FPJCGELLIPA_CTOR_OFFSET UNITYSDK_OFFSET(0x159121E0)
#define FPJCGELLIPA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15910510)
#define FPJCGELLIPA_FIOLELGPAJA_OFFSET UNITYSDK_OFFSET(0x15911F90)
#define FPJCGELLIPA_GAMMGFHFMKP_OFFSET UNITYSDK_OFFSET(0x15910A90)
#define FPJCGELLIPA_GNOPIDKIEPC_OFFSET UNITYSDK_OFFSET(0x159113D0)
#define FPJCGELLIPA_IDOPNJBLFHJ_OFFSET UNITYSDK_OFFSET(0x15911B60)
#define FPJCGELLIPA_IIFCIHIJDNI_OFFSET UNITYSDK_OFFSET(0x15911A60)
#define FPJCGELLIPA_JNLBBHJFPEK_OFFSET UNITYSDK_OFFSET(0x15910630)
#define FPJCGELLIPA_KDGCICMPDOM_OFFSET UNITYSDK_OFFSET(0x15911A10)
#define FPJCGELLIPA_KEHENOKMIBP_OFFSET UNITYSDK_OFFSET(0x15911E90)
#define FPJCGELLIPA_KJBDOCEEDNA_OFFSET UNITYSDK_OFFSET(0x15911960)
#define FPJCGELLIPA_KOIOPMFIDDG_OFFSET UNITYSDK_OFFSET(0x15911D70)
#define FPJCGELLIPA_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x15910040)
#define FPJCGELLIPA_MMFOAFIMMFA_OFFSET UNITYSDK_OFFSET(0x15911480)
#define FPJCGELLIPA_MMMJKPOLOAD_OFFSET UNITYSDK_OFFSET(0x15911580)
#define FPJCGELLIPA_NJMPPBMNKEM_OFFSET UNITYSDK_OFFSET(0x15911C80)
#define FPJCGELLIPA_NKPDMAELHGP_OFFSET UNITYSDK_OFFSET(0x15910C30)
#define FPJCGELLIPA_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x15910BE0)
#define FPJCGELLIPA_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x15910A40)
#define FPJCGELLIPA_TICK_OFFSET UNITYSDK_OFFSET(0x159107E0)

inline static constexpr unsigned int FPJCGELLIPA_TypeDefinitionIndex = 57437;

	class FPJCGELLIPA : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::AnimGroupEventConfig*>* ECDEMCDBOPP; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* FBLHAPDHBEO; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* HJLLLJKGCFO; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* GFMCAPNLKOK; // 0x30
		::RPG::GameCore::TaskContext* OBKLPOKMIEA; // 0x38
		::RPG::GameCore::CharacterModelComponent* HLCINALDOAC; // 0x40
		::System::Int32 LEAECMEADLL; // 0x48
		::System::Byte _padding0[0x4];
		::System::UInt64 PJKHBGMKGBB; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJCGELLIPA_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::CharacterAnimEventConfig*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::CharacterAnimEventConfig*>*))((::PBYTE)hIl2Cpp + FPJCGELLIPA_LMCEDCHJKFF_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJCGELLIPA_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FPJCGELLIPA_TICK_OFFSET))(this, a1);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJCGELLIPA_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJCGELLIPA_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void NKPDMAELHGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJCGELLIPA_NKPDMAELHGP_OFFSET))(this);
		}

		::System::Boolean GNOPIDKIEPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJCGELLIPA_GNOPIDKIEPC_OFFSET))(this);
		}

		::System::Void IIFCIHIJDNI(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorTransitionInfo a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo))((::PBYTE)hIl2Cpp + FPJCGELLIPA_IIFCIHIJDNI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NJMPPBMNKEM(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorTransitionInfo a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo))((::PBYTE)hIl2Cpp + FPJCGELLIPA_NJMPPBMNKEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KEHENOKMIBP(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::AnimatorTransitionInfo a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorTransitionInfo))((::PBYTE)hIl2Cpp + FPJCGELLIPA_KEHENOKMIBP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IDOPNJBLFHJ(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FPJCGELLIPA_IDOPNJBLFHJ_OFFSET))(this, a1, a2);
		}

		::System::Void KOIOPMFIDDG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FPJCGELLIPA_KOIOPMFIDDG_OFFSET))(this, a1);
		}

		::System::Boolean FIOLELGPAJA(::FPJCGELLIPA_BCJEIAAFLGC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPJCGELLIPA_BCJEIAAFLGC*))((::PBYTE)hIl2Cpp + FPJCGELLIPA_FIOLELGPAJA_OFFSET))(this, a1);
		}

		::System::Void CAKANKMMMDH(::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::CharacterAnimEventConfig*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::CharacterAnimEventConfig*>*))((::PBYTE)hIl2Cpp + FPJCGELLIPA_CAKANKMMMDH_OFFSET))(this, a1, a2);
		}

		::System::Boolean MMFOAFIMMFA(::RPG::GameCore::AnimGroupEventConfig* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AnimGroupEventConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + FPJCGELLIPA_MMFOAFIMMFA_OFFSET))(this, a1, a2);
		}

		::FPJCGELLIPA_BCJEIAAFLGC* MMMJKPOLOAD(::System::Int32 a1, ::RPG::GameCore::AnimGroupEventConfig* a2)
		{
			return ((::FPJCGELLIPA_BCJEIAAFLGC*(*)(::PVOID, ::System::Int32, ::RPG::GameCore::AnimGroupEventConfig*))((::PBYTE)hIl2Cpp + FPJCGELLIPA_MMMJKPOLOAD_OFFSET))(this, a1, a2);
		}

		::System::Void JNLBBHJFPEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJCGELLIPA_JNLBBHJFPEK_OFFSET))(this);
		}

		::System::Void GAMMGFHFMKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJCGELLIPA_GAMMGFHFMKP_OFFSET))(this);
		}

		::System::Int32 KDGCICMPDOM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJCGELLIPA_KDGCICMPDOM_OFFSET))(this);
		}

		::System::Int32 KJBDOCEEDNA(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FPJCGELLIPA_KJBDOCEEDNA_OFFSET))(this, a1);
		}

	};
