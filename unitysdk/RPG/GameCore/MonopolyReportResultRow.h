#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyReportResultRow; }
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYREPORTRESULTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D87ED90)
#define RPG_GAMECORE_MONOPOLYREPORTRESULTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D87E400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyReportResultRow_TypeDefinitionIndex = 12077;

	class MonopolyReportResultRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* FigurePrefabPath; // 0x18
		::System::Int32 MBTIValueY; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x28
		::RPG::Client::TextID DescDetail; // 0x38
		::System::UInt32 ID; // 0x48
		::System::Int32 MBTIValueX; // 0x4C
		::RPG::Client::TextID Desc; // 0x50
		::RPG::Client::TextID UnlockTips; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyReportResultRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyReportResultRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYREPORTRESULTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
