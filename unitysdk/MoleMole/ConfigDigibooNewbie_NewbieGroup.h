#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPCOHJHLDIE.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGDIGIBOONEWBIE_NEWBIEGROUP_ISMATCH_OFFSET UNITYSDK_OFFSET(0xFFF18F0)
#define MOLEMOLE_CONFIGDIGIBOONEWBIE_NEWBIEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xFFF19D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigDigibooNewbie_NewbieGroup_TypeDefinitionIndex = 64910;

	class ConfigDigibooNewbie_NewbieGroup : public ::System::Object
	{
	public:
		::System::Int32 NewBieID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Description; // 0x18
		::System::Int32 Priority; // 0x20
		::DPCOHJHLDIE IgnorePlatform; // 0x24
		::System::Collections::Generic::List_1<::System::Object*>* StepList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDIGIBOONEWBIE_NEWBIEGROUP__CTOR_OFFSET))(this);
		}

		::System::Boolean IsMatch(::System::String* searchString)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGDIGIBOONEWBIE_NEWBIEGROUP_ISMATCH_OFFSET))(this, searchString);
		}
	};
}
