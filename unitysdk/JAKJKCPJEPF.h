#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALCOGHNNPMF.h"
#include "unitysdk/RPG/GameCore/FormationPriorityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class FormationAssetConfig; }
namespace RPG::GameCore { class FormationData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class LocationData; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JAKJKCPJEPF_BIGBGJKJPEL_OFFSET UNITYSDK_OFFSET(0x1654CC20)
#define JAKJKCPJEPF_CDJDFFMJKPH_OFFSET UNITYSDK_OFFSET(0x16549C40)
#define JAKJKCPJEPF_CNJCOCIHCFP_OFFSET UNITYSDK_OFFSET(0x16549EC0)
#define JAKJKCPJEPF_COPNJACOCFE_OFFSET UNITYSDK_OFFSET(0x1654D0A0)
#define JAKJKCPJEPF_CTOR_OFFSET UNITYSDK_OFFSET(0x16549750)
#define JAKJKCPJEPF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16549650)
#define JAKJKCPJEPF_FELGFFPDNOK_OFFSET UNITYSDK_OFFSET(0x16549F80)
#define JAKJKCPJEPF_HEEHLDCBAFJ_OFFSET UNITYSDK_OFFSET(0x1654D5A0)
#define JAKJKCPJEPF_IHJEAIBJACF_OFFSET UNITYSDK_OFFSET(0x1654C410)
#define JAKJKCPJEPF_LBBFKGABJJF_OFFSET UNITYSDK_OFFSET(0x1654A060)
#define JAKJKCPJEPF_LDFPKDNMGMG_OFFSET UNITYSDK_OFFSET(0x1654D2E0)
#define JAKJKCPJEPF_LLIGNEKHPHG_OFFSET UNITYSDK_OFFSET(0x1654CDC0)
#define JAKJKCPJEPF_LMAGODAMDLE_OFFSET UNITYSDK_OFFSET(0x16549DD0)
#define JAKJKCPJEPF_MGAGPIGDLBK_OFFSET UNITYSDK_OFFSET(0x1654CFB0)
#define JAKJKCPJEPF_OBGBJJJDANK_OFFSET UNITYSDK_OFFSET(0x1654C6D0)

inline static constexpr unsigned int JAKJKCPJEPF_TypeDefinitionIndex = 59301;

	class JAKJKCPJEPF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* MLIKICDJOJP; // 0x10
		::System::Collections::Generic::List_1<::ALCOGHNNPMF>* FDOAAJKKJLN; // 0x18
		::System::String* PJPBKBAGFPO; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntityList*>* AMOAAOEENHD; // 0x28
		::RPG::GameCore::GameWorld* BJPKBELGNCM; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FormationData*>* MHFEOGIGAEK; // 0x38
		::System::Collections::Generic::List_1<::RPG::GameCore::FormationAssetConfig*>* FMBCNIIIBLO; // 0x40
		::System::Void _ctor(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + JAKJKCPJEPF_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAKJKCPJEPF_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntityList* CDJDFFMJKPH(::System::String* a1)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JAKJKCPJEPF_CDJDFFMJKPH_OFFSET))(this, a1);
		}

		::System::Void LMAGODAMDLE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JAKJKCPJEPF_LMAGODAMDLE_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntityList* CNJCOCIHCFP(::System::String* a1)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JAKJKCPJEPF_CNJCOCIHCFP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FormationData* FELGFFPDNOK(::System::String* a1)
		{
			return ((::RPG::GameCore::FormationData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JAKJKCPJEPF_FELGFFPDNOK_OFFSET))(this, a1);
		}

		::System::Void LBBFKGABJJF(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::String* a4, ::System::Boolean a5, ::RPG::GameCore::TaskContext* a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::String*, ::System::Boolean, ::RPG::GameCore::TaskContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + JAKJKCPJEPF_LBBFKGABJJF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void OBGBJJJDANK(::RPG::GameCore::TaskContext* a1, ::System::Int32 a2, ::System::Int32 a3, ::UnityEngine::Quaternion a4, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a5, ::RPG::GameCore::FormationData* a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Int32, ::System::Int32, ::UnityEngine::Quaternion, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::FormationData*))((::PBYTE)hIl2Cpp + JAKJKCPJEPF_OBGBJJJDANK_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void BIGBGJKJPEL(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JAKJKCPJEPF_BIGBGJKJPEL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::GameEntity* IHJEAIBJACF(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::LocationData* a3, ::RPG::GameCore::TaskContext* a4)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::LocationData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + JAKJKCPJEPF_IHJEAIBJACF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 LLIGNEKHPHG(::RPG::GameCore::FormationPriorityType a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::FormationPriorityType, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + JAKJKCPJEPF_LLIGNEKHPHG_OFFSET))(this, a1, a2);
		}

		::System::Int32 MGAGPIGDLBK(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + JAKJKCPJEPF_MGAGPIGDLBK_OFFSET))(this, a1);
		}

		::System::Int32 COPNJACOCFE(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + JAKJKCPJEPF_COPNJACOCFE_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 LDFPKDNMGMG(::System::Int32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::RPG::GameCore::TaskContext* a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + JAKJKCPJEPF_LDFPKDNMGMG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 HEEHLDCBAFJ(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + JAKJKCPJEPF_HEEHLDCBAFJ_OFFSET))(this, a1, a2);
		}

	};
