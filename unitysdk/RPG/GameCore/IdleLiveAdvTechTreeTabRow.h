#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveAdvTechTreeTabRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEADVTECHTREETABROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D749D80)
#define RPG_GAMECORE_IDLELIVEADVTECHTREETABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D749B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveAdvTechTreeTabRow_TypeDefinitionIndex = 11731;

	class IdleLiveAdvTechTreeTabRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* RecommendAvatarList; // 0x18
		::RPG::Client::TextID Name; // 0x20
		::System::UInt32 StartPoint; // 0x30
		::System::UInt32 ID; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEADVTECHTREETABROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveAdvTechTreeTabRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveAdvTechTreeTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEADVTECHTREETABROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
