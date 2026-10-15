#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowTutorialMask; }
namespace RPG::GameCore { class TutorialAnimConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWTUTORIALMASK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB9510)
#define RPG_GAMECORE_SHOWTUTORIALMASK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB9520)
#define RPG_GAMECORE_SHOWTUTORIALMASK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB94D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowTutorialMask_TypeDefinitionIndex = 24343;

	class ShowTutorialMask : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* NodeIDList; // 0x18
		::System::Boolean Show; // 0x20
		::System::Boolean BlockClick; // 0x21
		::System::Byte _padding0[0x2];
		::System::UInt32 Type; // 0x24
		::System::Single Scale; // 0x28
		::System::Byte _padding1[0x4];
		::RPG::GameCore::TutorialAnimConfig* AnimConfig; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALMASK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowTutorialMask* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowTutorialMask*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALMASK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowTutorialMask* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowTutorialMask*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALMASK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
