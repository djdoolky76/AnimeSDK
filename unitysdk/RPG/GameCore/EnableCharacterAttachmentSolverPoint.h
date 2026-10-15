#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnableCharacterAttachmentSolverPoint; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ENABLECHARACTERATTACHMENTSOLVERPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D63E5A0)
#define RPG_GAMECORE_ENABLECHARACTERATTACHMENTSOLVERPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D63E5B0)
#define RPG_GAMECORE_ENABLECHARACTERATTACHMENTSOLVERPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D63E570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableCharacterAttachmentSolverPoint_TypeDefinitionIndex = 22429;

	class EnableCharacterAttachmentSolverPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* UniqueName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLECHARACTERATTACHMENTSOLVERPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableCharacterAttachmentSolverPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableCharacterAttachmentSolverPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLECHARACTERATTACHMENTSOLVERPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableCharacterAttachmentSolverPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableCharacterAttachmentSolverPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLECHARACTERATTACHMENTSOLVERPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
