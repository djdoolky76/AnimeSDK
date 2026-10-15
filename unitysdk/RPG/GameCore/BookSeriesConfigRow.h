#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BookSeriesConfigRow; }

#define RPG_GAMECORE_BOOKSERIESCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4448A0)
#define RPG_GAMECORE_BOOKSERIESCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D444110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BookSeriesConfigRow_TypeDefinitionIndex = 12905;

	class BookSeriesConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID BookSeriesComments; // 0x10
		::System::Boolean IsShowInBookshelf; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 BookSeriesNum; // 0x24
		::RPG::Client::TextID BookSeries; // 0x28
		::System::UInt32 BookSeriesID; // 0x38
		::System::UInt32 BookSeriesWorld; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BookSeriesConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BookSeriesConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
