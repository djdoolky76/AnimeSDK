#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceRecallCategoryRow; }
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8FE9E0)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8FDCE0)

namespace RPG::GameCore
{
	class PerformanceRecallCategoryRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID Category; // 0x18
		::System::Boolean isSubCategory; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 CategoryID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceRecallCategoryRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceRecallCategoryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
