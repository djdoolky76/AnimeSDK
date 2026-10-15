#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveSpineAnimGroupRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVESPINEANIMGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77FD30)
#define RPG_GAMECORE_IDLELIVESPINEANIMGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77FB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveSpineAnimGroupRow_TypeDefinitionIndex = 11810;

	class IdleLiveSpineAnimGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* FemaleStateList; // 0x10
		::Il2CppArray<::System::String*>* MaleStateList; // 0x18
		::System::UInt32 AnimGroupID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID BubbleText; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPINEANIMGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveSpineAnimGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveSpineAnimGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPINEANIMGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
