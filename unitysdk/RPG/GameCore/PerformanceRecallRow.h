#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class PerformanceRecallRow; }
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCERECALLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1550C0)
#define RPG_GAMECORE_PERFORMANCERECALLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F1537D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceRecallRow_TypeDefinitionIndex = 14492;

	class PerformanceRecallRow : public ::System::Object
	{
	public:
		::System::String* ImgPathWall_F; // 0x10
		::System::String* ImgPathWall; // 0x18
		::System::String* ImgPath_F; // 0x20
		::System::String* ImgPath; // 0x28
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnlockCondition; // 0x30
		::System::UInt32 CategoryID; // 0x38
		::System::UInt32 PerformanceID; // 0x3C
		::System::UInt32 WorldID; // 0x40
		::System::Boolean isVideo; // 0x44
		::System::Boolean ShowInPlayerRoom; // 0x45
		::System::Byte _padding0[0x2];
		::System::UInt32 ImgHeightSize; // 0x48
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID Name; // 0x50
		::System::UInt32 SubCategoryID; // 0x60
		::System::UInt32 ID; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceRecallRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceRecallRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
