#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_Transform_OffsetType.h"
#include "unitysdk/RPG/Client/Effect_Transform_RotateType.h"
#include "unitysdk/RPG/GameCore/SetupEffectTransformParamsOffsetType.h"
#include "unitysdk/RPG/GameCore/SetupEffectTransformParamsRotateType.h"
namespace RPG::GameCore { class SetupEffectTransformParams; }
namespace RPG::GameCore { class TaskContext; }

#define GFCFEODJEEF_CTOR_OFFSET UNITYSDK_OFFSET(0x159E90F0)
#define GFCFEODJEEF_MHFFMBAEJNF_OFFSET UNITYSDK_OFFSET(0x159E91A0)
#define GFCFEODJEEF_NNOFOPMJPOB_OFFSET UNITYSDK_OFFSET(0x159E9120)
#define GFCFEODJEEF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159E9220)

	class GFCFEODJEEF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetupEffectTransformParams* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetupEffectTransformParams*))((::PBYTE)hIl2Cpp + GFCFEODJEEF_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Effect_Transform_OffsetType NNOFOPMJPOB(::RPG::GameCore::SetupEffectTransformParamsOffsetType a1)
		{
			return ((::RPG::Client::Effect_Transform_OffsetType(*)(::PVOID, ::RPG::GameCore::SetupEffectTransformParamsOffsetType))((::PBYTE)hIl2Cpp + GFCFEODJEEF_NNOFOPMJPOB_OFFSET))(this, a1);
		}

		::RPG::Client::Effect_Transform_RotateType MHFFMBAEJNF(::RPG::GameCore::SetupEffectTransformParamsRotateType a1)
		{
			return ((::RPG::Client::Effect_Transform_RotateType(*)(::PVOID, ::RPG::GameCore::SetupEffectTransformParamsRotateType))((::PBYTE)hIl2Cpp + GFCFEODJEEF_MHFFMBAEJNF_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCFEODJEEF_ONTASKBEGIN_OFFSET))(this);
		}

	};
