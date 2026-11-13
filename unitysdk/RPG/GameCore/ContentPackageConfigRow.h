#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ContentPackageConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_CONTENTPACKAGECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFE7BE0)
#define RPG_GAMECORE_CONTENTPACKAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EFE78D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ContentPackageConfigRow_TypeDefinitionIndex = 13161;

	class ContentPackageConfigRow : public ::System::Object
	{
	public:
		::System::String* ReleaseCondition; // 0x10
		::System::String* GuideConditions; // 0x18
		::Il2CppArray<::System::UInt32>* MainMissionIDList; // 0x20
		::System::String* EarlyAccessCondition; // 0x28
		::System::UInt32 AfterGuideEntranceID; // 0x30
		::System::Boolean IsHaveResidentPart; // 0x34
		::System::Byte _padding0[0x3];
		::System::UInt32 ActivityModuleID; // 0x38
		::System::UInt32 InitEntranceID; // 0x3C
		::System::UInt32 ContentID; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONTENTPACKAGECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ContentPackageConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ContentPackageConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONTENTPACKAGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
