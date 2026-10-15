#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleStateTemplate; }
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLESTATETEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F4F30)
#define RPG_GAMECORE_FREESTYLESTATETEMPLATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F4B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleStateTemplate_TypeDefinitionIndex = 16313;

	class FreeStyleStateTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StartMotion; // 0x10
		::System::Boolean IsLoop; // 0x18
		::System::Boolean CanTransitToState; // 0x19
		::System::Boolean CanUseInDS; // 0x1A
		::System::Byte _padding0[0x5];
		::Il2CppArray<::System::String*>* EntranceFreeStyleIDList; // 0x20
		::System::String* SameAsMotionIDOnLoop; // 0x28
		::RPG::MVector2 Position; // 0x30
		::System::Boolean IsBase; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLESTATETEMPLATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleStateTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleStateTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLESTATETEMPLATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
