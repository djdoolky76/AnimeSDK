#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EFreeStyleControlMode.h"
#include "unitysdk/RPG/GameCore/FreeStyleController.h"
#include "unitysdk/BPFKOIIMKBG.h"
#include "unitysdk/LKLOMEEPIEM.h"
namespace RPG::GameCore { class FreeStyleComponent; }
namespace RPG::GameCore { class FreeStyleMotionInfoConfig; }
namespace System { class Nullable; }
namespace UnityEngine { class AnimationClip; }

#define EBDHCEKPKMN_AGPHBLGBODG_OFFSET UNITYSDK_OFFSET(0x12CED0A0)
#define EBDHCEKPKMN_CFNIBAOJGEL_OFFSET UNITYSDK_OFFSET(0x12CED1B0)
#define EBDHCEKPKMN_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x12CECF30)
#define EBDHCEKPKMN_CTOR_OFFSET UNITYSDK_OFFSET(0x12CECEA0)
#define EBDHCEKPKMN_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x12CECFD0)
#define EBDHCEKPKMN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CED210)
#define EBDHCEKPKMN_GET_MODE_OFFSET UNITYSDK_OFFSET(0x12CECEE0)
#define EBDHCEKPKMN_INHHIGAOCNE_OFFSET UNITYSDK_OFFSET(0x12CED030)
#define EBDHCEKPKMN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x12CECF70)
#define EBDHCEKPKMN_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x12CECEF0)
#define EBDHCEKPKMN_MAHCHECNLEP_OFFSET UNITYSDK_OFFSET(0x12CED120)

inline static constexpr unsigned int EBDHCEKPKMN_TypeDefinitionIndex = 57284;

	class EBDHCEKPKMN : public ::RPG::GameCore::FreeStyleController
	{
	public:
		::System::Void _ctor(::RPG::GameCore::FreeStyleComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleComponent*))((::PBYTE)hIl2Cpp + EBDHCEKPKMN_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::EFreeStyleControlMode get_Mode()
		{
			return ((::RPG::GameCore::EFreeStyleControlMode(*)(::PVOID))((::PBYTE)hIl2Cpp + EBDHCEKPKMN_GET_MODE_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBDHCEKPKMN_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBDHCEKPKMN_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EBDHCEKPKMN_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EBDHCEKPKMN_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void INHHIGAOCNE(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EBDHCEKPKMN_INHHIGAOCNE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AGPHBLGBODG(::System::UInt32 a1, ::RPG::GameCore::FreeStyleMotionInfoConfig* a2, ::System::Nullable* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FreeStyleMotionInfoConfig*, ::System::Nullable*))((::PBYTE)hIl2Cpp + EBDHCEKPKMN_AGPHBLGBODG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MAHCHECNLEP(::System::Boolean a1, ::BPFKOIIMKBG a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::BPFKOIIMKBG))((::PBYTE)hIl2Cpp + EBDHCEKPKMN_MAHCHECNLEP_OFFSET))(this, a1, a2);
		}

		::System::Void CFNIBAOJGEL(::UnityEngine::AnimationClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + EBDHCEKPKMN_CFNIBAOJGEL_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBDHCEKPKMN_DISPOSE_OFFSET))(this);
		}

	};
