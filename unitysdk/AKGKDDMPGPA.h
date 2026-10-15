#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKGKDDMPGPA_NpcState.h"
#include "unitysdk/HBCMHADMLOP.h"
#include "unitysdk/RPG/Client/ChaseBailuResult.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AKLKMBNBMPG;
class KFELGAIGHAP;
namespace RPG::Client::Prop { class ChaseBailuConfig; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }

#define AKGKDDMPGPA_BAEKLJMECNH_OFFSET UNITYSDK_OFFSET(0x12CD0830)
#define AKGKDDMPGPA_BJLJAHMLKIO_OFFSET UNITYSDK_OFFSET(0x12CD11D0)
#define AKGKDDMPGPA_CKJADDAPMED_OFFSET UNITYSDK_OFFSET(0x12CD01C0)
#define AKGKDDMPGPA_CTOR_OFFSET UNITYSDK_OFFSET(0x12CD1960)
#define AKGKDDMPGPA_DDIFLMENBKL_OFFSET UNITYSDK_OFFSET(0x12CCF2E0)
#define AKGKDDMPGPA_FEOCIFNMMJK_OFFSET UNITYSDK_OFFSET(0x12CD0C10)
#define AKGKDDMPGPA_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0x12CD1940)
#define AKGKDDMPGPA_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x12CD1920)
#define AKGKDDMPGPA_GHPHDOJAJGA_OFFSET UNITYSDK_OFFSET(0x12CCFC70)
#define AKGKDDMPGPA_HMHNKNPBBIH_OFFSET UNITYSDK_OFFSET(0x12CD1950)
#define AKGKDDMPGPA_HNCBFEBCGCL_OFFSET UNITYSDK_OFFSET(0x12CD1010)
#define AKGKDDMPGPA_IDFFMNNEDCI_OFFSET UNITYSDK_OFFSET(0x12CD0CF0)
#define AKGKDDMPGPA_JBEONDEAACM_OFFSET UNITYSDK_OFFSET(0x12CD18C0)
#define AKGKDDMPGPA_JEMJNOEKPEA_OFFSET UNITYSDK_OFFSET(0x12CD1380)
#define AKGKDDMPGPA_JHDEDHKOGFC_OFFSET UNITYSDK_OFFSET(0x12CD0CA0)
#define AKGKDDMPGPA_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0x12CD1930)
#define AKGKDDMPGPA_KNLLINKKKAJ_OFFSET UNITYSDK_OFFSET(0x12CCFE10)
#define AKGKDDMPGPA_LKOFIBJGJOG_OFFSET UNITYSDK_OFFSET(0x12CD0110)
#define AKGKDDMPGPA_MEOMNCONHAD_OFFSET UNITYSDK_OFFSET(0x12CCF750)
#define AKGKDDMPGPA_NKLMDDNAFDJ_OFFSET UNITYSDK_OFFSET(0x12CCFF60)
#define AKGKDDMPGPA_OBINGBCLLMC_OFFSET UNITYSDK_OFFSET(0x12CCF560)
#define AKGKDDMPGPA_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x12CCF140)
#define AKGKDDMPGPA_TICK_OFFSET UNITYSDK_OFFSET(0x12CCF230)

inline static constexpr unsigned int AKGKDDMPGPA_TypeDefinitionIndex = 60152;

	class AKGKDDMPGPA : public ::HBCMHADMLOP
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* GHGJEFFDLAO; // 0x20
		::RPG::GameCore::AdventureCharacterController* EBGPOAMDPIJ; // 0x28
		::UnityEngine::GameObject* KANJEOAEGMG; // 0x30
		::RPG::Client::Prop::ChaseBailuConfig* IGHAHBNLIJA; // 0x38
		::RPG::GameCore::TransformComponent* MOHDIBEPIPM; // 0x40
		::RPG::GameCore::GameEntity* ILAJEHHAPBD; // 0x48
		::KFELGAIGHAP* CNJFCHENKFN; // 0x50
		::System::String* BAPFMDAAFAL; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* CHDPGOJGMGE; // 0x60
		::AKLKMBNBMPG* FNLONNEABNB; // 0x68
		::System::Int32 HBKCBNKNOHP; // 0x70
		::System::Single CDJBJJPBGAB; // 0x74
		::AKGKDDMPGPA_NpcState KEKGALDOCFE; // 0x78
		::System::Single AIMCBIHHNAK; // 0x7C
		::System::Single KIAIHMKLDKO; // 0x80
		::System::Int32 FFHKPHIPNIP; // 0x84
		::RPG::Client::ChaseBailuResult GNOEGILFEMD; // 0x88
		::System::Boolean FMNEEONAMNO; // 0x8C
		::System::Boolean PIPLLENMLIM; // 0x8D
		::System::Byte _padding0[0x2];
		::System::Int32 IOKFEHLBIMC; // 0x90
		::System::Int32 MCLDOBAKOGH; // 0x94
		::System::Single DNNNHDAEAHH; // 0x98
		::System::Single NGPHKPGCPJM; // 0x9C
		::System::Int32 JPIDMCDNLOM; // 0xA0
		// static const ::System::Object JAMBLEFBLNL; // 0x0
		// static const ::System::Object DDNMDMBJFBN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGKDDMPGPA_CTOR_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGKDDMPGPA_ONUNINIT_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKGKDDMPGPA_TICK_OFFSET))(this, a1);
		}

		::System::Void KNLLINKKKAJ(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + AKGKDDMPGPA_KNLLINKKKAJ_OFFSET))(this, a1, a2);
		}

		::System::Void NKLMDDNAFDJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKGKDDMPGPA_NKLMDDNAFDJ_OFFSET))(this, a1);
		}

		::System::Boolean LKOFIBJGJOG(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKGKDDMPGPA_LKOFIBJGJOG_OFFSET))(this, a1);
		}

		::System::Void CKJADDAPMED(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Single a3, ::System::Single a4, ::RPG::GameCore::CharacterMotionFlag a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11, ::System::Single a12, ::System::Single a13, ::System::Single a14, ::System::String* a15, ::RPG::GameCore::TaskContext* a16, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a17)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Single, ::System::Single, ::RPG::GameCore::CharacterMotionFlag, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::String*, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + AKGKDDMPGPA_CKJADDAPMED_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
		}

		::System::Void FEOCIFNMMJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGKDDMPGPA_FEOCIFNMMJK_OFFSET))(this);
		}

		::System::Void JHDEDHKOGFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGKDDMPGPA_JHDEDHKOGFC_OFFSET))(this);
		}

		::System::Boolean IDFFMNNEDCI(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKGKDDMPGPA_IDFFMNNEDCI_OFFSET))(this, a1);
		}

		::System::Void BAEKLJMECNH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGKDDMPGPA_BAEKLJMECNH_OFFSET))(this);
		}

		::System::Void DDIFLMENBKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGKDDMPGPA_DDIFLMENBKL_OFFSET))(this);
		}

		::System::Void OBINGBCLLMC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKGKDDMPGPA_OBINGBCLLMC_OFFSET))(this, a1);
		}

		::System::Void MEOMNCONHAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKGKDDMPGPA_MEOMNCONHAD_OFFSET))(this, a1);
		}

		::System::Void GHPHDOJAJGA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKGKDDMPGPA_GHPHDOJAJGA_OFFSET))(this, a1);
		}

		::System::Boolean HNCBFEBCGCL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGKDDMPGPA_HNCBFEBCGCL_OFFSET))(this);
		}

		::System::Int32 JEMJNOEKPEA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGKDDMPGPA_JEMJNOEKPEA_OFFSET))(this);
		}

		::System::Boolean JBEONDEAACM(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AKGKDDMPGPA_JBEONDEAACM_OFFSET))(this, a1, a2);
		}

		::System::Void BJLJAHMLKIO(::RPG::Client::ChaseBailuResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChaseBailuResult))((::PBYTE)hIl2Cpp + AKGKDDMPGPA_BJLJAHMLKIO_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGKDDMPGPA_GET_NEEDTICK_OFFSET))(this);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGKDDMPGPA_JKEONEEPIHH_OFFSET))(this);
		}

		::System::Boolean GCCAABJLGIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGKDDMPGPA_GCCAABJLGIG_OFFSET))(this);
		}

		::RPG::Client::ChaseBailuResult HMHNKNPBBIH()
		{
			return ((::RPG::Client::ChaseBailuResult(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGKDDMPGPA_HMHNKNPBBIH_OFFSET))(this);
		}

	};
