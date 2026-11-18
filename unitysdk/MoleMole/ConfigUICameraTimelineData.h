#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/LACMBKFHKPB.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUICAMERATIMELINEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05CBE0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICameraTimelineData_TypeDefinitionIndex = 60762;

	class ConfigUICameraTimelineData : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::LACMBKFHKPB timelineType; // 0x58
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::String*>* timelineSequence; // 0x60
		::System::Int32 endTransitionID; // 0x68
		::System::Boolean hideOvernightArea; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICAMERATIMELINEDATA__CTOR_OFFSET))(this);
		}
	};
}
