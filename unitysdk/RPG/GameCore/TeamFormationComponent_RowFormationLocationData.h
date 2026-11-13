#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
class CJEEJFDPPNG;
namespace System { class String; }

#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONLOCATIONDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x125CDC10)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONLOCATIONDATA_RESET_OFFSET UNITYSDK_OFFSET(0x125CDC80)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONLOCATIONDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x125CDC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamFormationComponent_RowFormationLocationData_TypeDefinitionIndex = 58938;

	class TeamFormationComponent_RowFormationLocationData : public ::System::Object
	{
	public:
		::CJEEJFDPPNG* FormationComponent; // 0x10
		::System::Int32 RowIndex; // 0x18
		::System::Single FixedZOffset; // 0x1C
		::RPG::MVector3 LocalFormationOffset; // 0x20
		::System::Boolean IgnoreFormationRefresh; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Single RandomZOffset; // 0x30
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONLOCATIONDATA_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONLOCATIONDATA_TOSTRING_OFFSET))(this);
		}

		::System::Void Reset(::CJEEJFDPPNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJEEJFDPPNG*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONLOCATIONDATA_RESET_OFFSET))(this, a1);
		}

	};
}
