#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ArchiveWolfBroPuzzle; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ARCHIVEWOLFBROPUZZLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C8CB0)
#define RPG_GAMECORE_ARCHIVEWOLFBROPUZZLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3C8CC0)
#define RPG_GAMECORE_ARCHIVEWOLFBROPUZZLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3C8C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ArchiveWolfBroPuzzle_TypeDefinitionIndex = 21995;

	class ArchiveWolfBroPuzzle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ARCHIVEWOLFBROPUZZLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ArchiveWolfBroPuzzle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ArchiveWolfBroPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ARCHIVEWOLFBROPUZZLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ArchiveWolfBroPuzzle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ArchiveWolfBroPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ARCHIVEWOLFBROPUZZLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
