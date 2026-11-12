#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PsActivityRow; }

#define RPG_GAMECORE_PSACTIVITYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB75230)
#define RPG_GAMECORE_PSACTIVITYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB74F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PsActivityRow_TypeDefinitionIndex = 13147;

	class PsActivityRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ObjectIDList; // 0x10
		::System::UInt32 ActivityID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID description; // 0x20
		::RPG::Client::TextID task; // 0x30
		::RPG::Client::TextID name; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PSACTIVITYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PsActivityRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PsActivityRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PSACTIVITYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
