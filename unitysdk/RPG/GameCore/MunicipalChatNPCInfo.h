#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MunicipalChatCharacterType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MunicipalChatNPCInfo; }
namespace System { class String; }

#define RPG_GAMECORE_MUNICIPALCHATNPCINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C1A50)
#define RPG_GAMECORE_MUNICIPALCHATNPCINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C1940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MunicipalChatNPCInfo_TypeDefinitionIndex = 16933;

	class MunicipalChatNPCInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::RPG::GameCore::MunicipalChatCharacterType CharacterType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATNPCINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MunicipalChatNPCInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MunicipalChatNPCInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATNPCINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
