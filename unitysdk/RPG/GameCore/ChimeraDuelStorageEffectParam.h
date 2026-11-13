#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEffectParam.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelAppendKeyType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelStorageEffectParam; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELSTORAGEEFFECTPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F932E50)
#define RPG_GAMECORE_CHIMERADUELSTORAGEEFFECTPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F932E60)
#define RPG_GAMECORE_CHIMERADUELSTORAGEEFFECTPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F932E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelStorageEffectParam_TypeDefinitionIndex = 16171;

	class ChimeraDuelStorageEffectParam : public ::RPG::GameCore::BaseChimeraDuelEffectParam
	{
	public:
		::System::String* StorageBaseKey; // 0x10
		::RPG::GameCore::ChimeraDuelAppendKeyType AppendKeyType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSTORAGEEFFECTPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelStorageEffectParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelStorageEffectParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSTORAGEEFFECTPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelStorageEffectParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelStorageEffectParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSTORAGEEFFECTPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
