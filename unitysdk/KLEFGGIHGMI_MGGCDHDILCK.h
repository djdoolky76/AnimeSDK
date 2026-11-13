#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/BlockVisionState.h"
#include "unitysdk/RPG/GameCore/RegionBlockVisibilityStatus.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class KGDADKNPPOL;
class KLEFGGIHGMI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KLEFGGIHGMI_MGGCDHDILCK_CTOR_OFFSET UNITYSDK_OFFSET(0x17B7B850)
#define KLEFGGIHGMI_MGGCDHDILCK_GET_ACTUALBLOCKROOTACTIVE_OFFSET UNITYSDK_OFFSET(0x17B7B610)
#define KLEFGGIHGMI_MGGCDHDILCK_GET_APPLIEDBLOCKVISIBILITYDECISION_OFFSET UNITYSDK_OFFSET(0x17B7B6E0)
#define KLEFGGIHGMI_MGGCDHDILCK_GET_BLOCKVISIBILITYDIRTY_OFFSET UNITYSDK_OFFSET(0x17B7B680)
#define KLEFGGIHGMI_MGGCDHDILCK_GET_EFFECTIVEVISIBLE_OFFSET UNITYSDK_OFFSET(0x17B7B520)
#define KLEFGGIHGMI_MGGCDHDILCK_GET_REGIONBLOCKVISIBILITYSTATUS_OFFSET UNITYSDK_OFFSET(0x17B7B7F0)
#define KLEFGGIHGMI_MGGCDHDILCK_GET_RESOLVEDBLOCKROOTACTIVE_OFFSET UNITYSDK_OFFSET(0x17B7B580)
#define KLEFGGIHGMI_MGGCDHDILCK_INIT_OFFSET UNITYSDK_OFFSET(0x17B7AE10)
#define KLEFGGIHGMI_MGGCDHDILCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x17B7AE60)

inline static constexpr unsigned int KLEFGGIHGMI_MGGCDHDILCK_TypeDefinitionIndex = 76034;

	class KLEFGGIHGMI_MGGCDHDILCK : public ::UnityEngine::MonoBehaviour
	{
	public:
		::KLEFGGIHGMI* FKBJADHDHFO; // 0x18
		::RPG::Client::OpenWorld::BlockVisionState BlockVisionState; // 0x20
		::RPG::GameCore::RegionBlockVisibilityStatus BlockRegionVisStatus; // 0x24
		::System::Single LoadingRate; // 0x28
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::String*>* ActiveHideReasons; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* ActiveShowReasons; // 0x38
		::System::UInt64 ICCCPAHMLOC; // 0x40
		::System::Collections::Generic::List_1<::System::String*>* ForceHideReason; // 0x48
		::System::UInt64 JMNMNJNIJNL; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* ForceHLODReason; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEFGGIHGMI_MGGCDHDILCK_CTOR_OFFSET))(this);
		}

		::System::Void Init(::KLEFGGIHGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + KLEFGGIHGMI_MGGCDHDILCK_INIT_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEFGGIHGMI_MGGCDHDILCK_UPDATE_OFFSET))(this);
		}

		::System::Boolean get_EffectiveVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEFGGIHGMI_MGGCDHDILCK_GET_EFFECTIVEVISIBLE_OFFSET))(this);
		}

		::System::Boolean get_ResolvedBlockRootActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEFGGIHGMI_MGGCDHDILCK_GET_RESOLVEDBLOCKROOTACTIVE_OFFSET))(this);
		}

		::System::Boolean get_ActualBlockRootActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEFGGIHGMI_MGGCDHDILCK_GET_ACTUALBLOCKROOTACTIVE_OFFSET))(this);
		}

		::System::Boolean get_BlockVisibilityDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEFGGIHGMI_MGGCDHDILCK_GET_BLOCKVISIBILITYDIRTY_OFFSET))(this);
		}

		::System::String* get_AppliedBlockVisibilityDecision()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEFGGIHGMI_MGGCDHDILCK_GET_APPLIEDBLOCKVISIBILITYDECISION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::KGDADKNPPOL*>*>*>* get_RegionBlockVisibilityStatus()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::KGDADKNPPOL*>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEFGGIHGMI_MGGCDHDILCK_GET_REGIONBLOCKVISIBILITYSTATUS_OFFSET))(this);
		}

	};
