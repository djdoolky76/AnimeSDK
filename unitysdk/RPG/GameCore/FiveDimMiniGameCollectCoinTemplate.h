#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMiniGameCollectCoinTemplate; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTCOINTEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C7F90)
#define RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTCOINTEMPLATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C7E40)

namespace RPG::GameCore
{
	class FiveDimMiniGameCollectCoinTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* CurveIndex; // 0x10
		::System::String* TemplateEvent; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTCOINTEMPLATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMiniGameCollectCoinTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMiniGameCollectCoinTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIGAMECOLLECTCOINTEMPLATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
