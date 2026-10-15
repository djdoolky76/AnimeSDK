#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelTriggerActionType.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosureR_1.h"
class BABNOKHOBCF;
class DELPKNBPNLN;
class INMMPMDELKE;
class MNCOPNHONHO;
class NKMEEIAEDDP;
namespace RPG::GameCore { class PropButtonConfig; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Transform; }

#define NKMEEIAEDDP_AMLBFDFKLIA_OFFSET UNITYSDK_OFFSET(0xBC3D140)
#define NKMEEIAEDDP_CCTOR_OFFSET UNITYSDK_OFFSET(0xBC3E4A0)
#define NKMEEIAEDDP_CLEARTRIGGER_OFFSET UNITYSDK_OFFSET(0xBC3D680)
#define NKMEEIAEDDP_CTOR_OFFSET UNITYSDK_OFFSET(0xBC3D2C0)
#define NKMEEIAEDDP_FNMBEFOBKCM_OFFSET UNITYSDK_OFFSET(0xBC3CB50)
#define NKMEEIAEDDP_KJDAGEIIHDJ_OFFSET UNITYSDK_OFFSET(0xBC3D490)
#define NKMEEIAEDDP_LMFHDJMELFH_OFFSET UNITYSDK_OFFSET(0xBC3DEC0)
#define NKMEEIAEDDP_MGHCACLFPCA_OFFSET UNITYSDK_OFFSET(0xBC3D4E0)
#define NKMEEIAEDDP_OMOEIALNEHF_OFFSET UNITYSDK_OFFSET(0xBC3DE70)
#define NKMEEIAEDDP_PHHMNKDAFMK_OFFSET UNITYSDK_OFFSET(0xBC3E1C0)
#define NKMEEIAEDDP__CHECKDISABLEBUTTONCONDITIONS_OFFSET UNITYSDK_OFFSET(0xBC3DB30)
#define NKMEEIAEDDP__CHECKENABLEBUTTONCONDITIONS_OFFSET UNITYSDK_OFFSET(0xBC3D700)
#define NKMEEIAEDDP__GET_CHECKDISABLEINTERACT_B__2_0_OFFSET UNITYSDK_OFFSET(0xBC3E5D0)

inline static constexpr unsigned int NKMEEIAEDDP_TypeDefinitionIndex = 76742;

	class NKMEEIAEDDP
	{
	public:
		::BABNOKHOBCF* FKINCGODJEP; // 0x38
		::System::Collections::Generic::HashSet_1<::System::String*>* AHIFNJJGHOJ; // 0x40
		::MNCOPNHONHO* PDENFEFCAGN; // 0x48
		::System::Collections::Generic::HashSet_1<::System::String*>* GPAGLKMGBCK; // 0x50
		::System::Boolean FBGLNDAHFJK; // 0x58
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_NFGBPDAJKBJ()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)UnitySDK::FromName("", "NKMEEIAEDDP")->GetStaticField(0x48A80);
		}

		::System::Void _ctor(::MNCOPNHONHO* a1, ::BABNOKHOBCF* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MNCOPNHONHO*, ::BABNOKHOBCF*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NKMEEIAEDDP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKMEEIAEDDP_CCTOR_OFFSET))();
		}

		::System::Void FNMBEFOBKCM(::INMMPMDELKE* a1, ::RPG::GameCore::PropButtonConfig* a2, ::System::Action_1<::INMMPMDELKE*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::PropButtonConfig*, ::System::Action_1<::INMMPMDELKE*>*))((::PBYTE)hIl2Cpp + NKMEEIAEDDP_FNMBEFOBKCM_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GCFreeClosure::FuncClosureR_1<::System::Boolean> AMLBFDFKLIA()
		{
			return ((::RPG::GCFreeClosure::FuncClosureR_1<::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + NKMEEIAEDDP_AMLBFDFKLIA_OFFSET))(this);
		}

		::System::Void KJDAGEIIHDJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NKMEEIAEDDP_KJDAGEIIHDJ_OFFSET))(this, a1);
		}

		::System::Void MGHCACLFPCA(::INMMPMDELKE* a1, ::DELPKNBPNLN* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::DELPKNBPNLN*, ::System::String*))((::PBYTE)hIl2Cpp + NKMEEIAEDDP_MGHCACLFPCA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ClearTrigger(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + NKMEEIAEDDP_CLEARTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean _CheckEnableButtonConditions(::INMMPMDELKE* a1, ::DELPKNBPNLN* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*, ::DELPKNBPNLN*))((::PBYTE)hIl2Cpp + NKMEEIAEDDP__CHECKENABLEBUTTONCONDITIONS_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckDisableButtonConditions(::INMMPMDELKE* a1, ::DELPKNBPNLN* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*, ::DELPKNBPNLN*))((::PBYTE)hIl2Cpp + NKMEEIAEDDP__CHECKDISABLEBUTTONCONDITIONS_OFFSET))(this, a1, a2);
		}

		::System::Int32 OMOEIALNEHF(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelTriggerActionType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelTriggerActionType))((::PBYTE)hIl2Cpp + NKMEEIAEDDP_OMOEIALNEHF_OFFSET))(this, a1);
		}

		::System::Void LMFHDJMELFH(::INMMPMDELKE* a1, ::System::Action_1<::INMMPMDELKE*>* a2, ::System::Action_1<::INMMPMDELKE*>* a3, ::System::String* a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::System::Action_1<::INMMPMDELKE*>*, ::System::Action_1<::INMMPMDELKE*>*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NKMEEIAEDDP_LMFHDJMELFH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PHHMNKDAFMK(::INMMPMDELKE* a1, ::System::Action_1<::INMMPMDELKE*>* a2, ::System::Action_1<::INMMPMDELKE*>* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::System::Action_1<::INMMPMDELKE*>*, ::System::Action_1<::INMMPMDELKE*>*, ::System::String*))((::PBYTE)hIl2Cpp + NKMEEIAEDDP_PHHMNKDAFMK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean _get_CheckDisableInteract_b__2_0(::NKMEEIAEDDP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKMEEIAEDDP*))((::PBYTE)hIl2Cpp + NKMEEIAEDDP__GET_CHECKDISABLEINTERACT_B__2_0_OFFSET))(this, a1);
		}

	};
