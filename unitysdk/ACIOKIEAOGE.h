#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvancedFollowType.h"
#include "unitysdk/RPG/GameCore/FollowSideType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NLMOEHJDJKN;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class FollowSlotConfig; }
namespace RPG::GameCore { class FollowSlotConstValue; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ACIOKIEAOGE_ACEGNMFFHBN_OFFSET UNITYSDK_OFFSET(0xB1230D0)
#define ACIOKIEAOGE_ALJKHJECAGO_OFFSET UNITYSDK_OFFSET(0xB122B20)
#define ACIOKIEAOGE_CTOR_OFFSET UNITYSDK_OFFSET(0xB1225A0)
#define ACIOKIEAOGE_DBHKIALACGD_OFFSET UNITYSDK_OFFSET(0xB123260)
#define ACIOKIEAOGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB122910)
#define ACIOKIEAOGE_EKAOKAMNADG_OFFSET UNITYSDK_OFFSET(0xB122950)
#define ACIOKIEAOGE_HHMADAINEII_OFFSET UNITYSDK_OFFSET(0xB122F30)
#define ACIOKIEAOGE_KIHPPIJMMJA_OFFSET UNITYSDK_OFFSET(0xB122630)
#define ACIOKIEAOGE_LFGMKNLELMM_OFFSET UNITYSDK_OFFSET(0xB122FA0)
#define ACIOKIEAOGE__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xB122890)

inline static constexpr unsigned int ACIOKIEAOGE_TypeDefinitionIndex = 56988;

	class ACIOKIEAOGE : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::AdventureCharacterController* GPACEDIFLNG; // 0x18
		::System::Collections::Generic::List_1<::NLMOEHJDJKN*>* BFNMKINHHPC; // 0x20
		::System::Collections::Generic::List_1<::NLMOEHJDJKN*>* AKIFAAKBIMK; // 0x28
		::RPG::GameCore::TransformComponent* GGLEFOFHHCN; // 0x30
		::RPG::GameCore::FollowSlotConstValue* IGHAHBNLIJA; // 0x38
		::System::Collections::Generic::List_1<::NLMOEHJDJKN*>* BOFCMCCNIFP; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACIOKIEAOGE_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACIOKIEAOGE__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACIOKIEAOGE_DISPOSE_OFFSET))(this);
		}

		::System::Void KIHPPIJMMJA(::RPG::GameCore::FollowSlotConstValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FollowSlotConstValue*))((::PBYTE)hIl2Cpp + ACIOKIEAOGE_KIHPPIJMMJA_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::NLMOEHJDJKN*>* EKAOKAMNADG(::Il2CppArray<::RPG::GameCore::FollowSlotConfig*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::NLMOEHJDJKN*>*(*)(::Il2CppArray<::RPG::GameCore::FollowSlotConfig*>*))((::PBYTE)hIl2Cpp + ACIOKIEAOGE_EKAOKAMNADG_OFFSET))(a1);
		}

		::UnityEngine::Vector3 ALJKHJECAGO(::RPG::GameCore::AdvancedFollowType a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::AdvancedFollowType, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + ACIOKIEAOGE_ALJKHJECAGO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean LFGMKNLELMM(::RPG::GameCore::AdvancedFollowType a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdvancedFollowType, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + ACIOKIEAOGE_LFGMKNLELMM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ACEGNMFFHBN(::RPG::GameCore::AdvancedFollowType a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvancedFollowType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ACIOKIEAOGE_ACEGNMFFHBN_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FollowSideType DBHKIALACGD(::RPG::GameCore::AdvancedFollowType a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::FollowSideType(*)(::PVOID, ::RPG::GameCore::AdvancedFollowType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ACIOKIEAOGE_DBHKIALACGD_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::NLMOEHJDJKN*>* HHMADAINEII(::RPG::GameCore::AdvancedFollowType a1)
		{
			return ((::System::Collections::Generic::List_1<::NLMOEHJDJKN*>*(*)(::PVOID, ::RPG::GameCore::AdvancedFollowType))((::PBYTE)hIl2Cpp + ACIOKIEAOGE_HHMADAINEII_OFFSET))(this, a1);
		}

	};
