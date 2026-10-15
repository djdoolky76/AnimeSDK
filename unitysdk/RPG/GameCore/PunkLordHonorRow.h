#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PunkLordHonorRow; }

#define RPG_GAMECORE_PUNKLORDHONORROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92FCB0)
#define RPG_GAMECORE_PUNKLORDHONORROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D92FAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PunkLordHonorRow_TypeDefinitionIndex = 12295;

	class PunkLordHonorRow : public ::System::Object
	{
	public:
		::System::UInt32 DisplayPriority; // 0x10
		::System::UInt32 HonorID; // 0x14
		::RPG::Client::TextID HonorName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUNKLORDHONORROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PunkLordHonorRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PunkLordHonorRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUNKLORDHONORROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
