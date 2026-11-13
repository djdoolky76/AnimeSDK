#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ReportTypeConfigRow; }

#define RPG_GAMECORE_REPORTTYPECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F245060)
#define RPG_GAMECORE_REPORTTYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F244A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReportTypeConfigRow_TypeDefinitionIndex = 14806;

	class ReportTypeConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 TypeID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Text; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPORTTYPECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReportTypeConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReportTypeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPORTTYPECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
