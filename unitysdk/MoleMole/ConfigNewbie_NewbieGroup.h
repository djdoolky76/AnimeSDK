#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGNEWBIE_NEWBIEGROUP_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1B8C0AC0)
#define MOLEMOLE_CONFIGNEWBIE_NEWBIEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C0BA0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigNewbie_NewbieGroup_TypeDefinitionIndex = 55937;

	class ConfigNewbie_NewbieGroup : public ::System::Object
	{
	public:
		::System::Int32 GroupId; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* GroupName; // 0x18
		::System::Boolean ManualStart; // 0x20
		::System::Boolean ForceEnd; // 0x21
		::System::Byte _padding1[0x6];
		::System::Collections::Generic::List_1<::System::Object*>* StepList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_NEWBIEGROUP__CTOR_OFFSET))(this);
		}

		::System::Boolean IsMatch(::System::String* searchString)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGNEWBIE_NEWBIEGROUP_ISMATCH_OFFSET))(this, searchString);
		}
	};
}
