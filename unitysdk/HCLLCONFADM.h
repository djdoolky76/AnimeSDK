#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define HCLLCONFADM_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7B4CA0)
#define HCLLCONFADM_GET_ID_OFFSET UNITYSDK_OFFSET(0x1B7B4C40)
#define HCLLCONFADM_GET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x1B7B4C80)
#define HCLLCONFADM_GET_SUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x1B7B4C60)
#define HCLLCONFADM_SET_ID_OFFSET UNITYSDK_OFFSET(0x1B7B4C50)
#define HCLLCONFADM_SET_JSONPATH_OFFSET UNITYSDK_OFFSET(0x1B7B4C90)
#define HCLLCONFADM_SET_SUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x1B7B4C70)

inline static constexpr unsigned int HCLLCONFADM_TypeDefinitionIndex = 83554;

	class HCLLCONFADM : public ::System::Object
	{
	public:
		::System::String* _JsonPath_k__BackingField; // 0x10
		::System::UInt32 _SubMissionID_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLLCONFADM_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLLCONFADM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCLLCONFADM_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SubMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLLCONFADM_GET_SUBMISSIONID_OFFSET))(this);
		}

		::System::Void set_SubMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCLLCONFADM_SET_SUBMISSIONID_OFFSET))(this, a1);
		}

		::System::String* get_JsonPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLLCONFADM_GET_JSONPATH_OFFSET))(this);
		}

		::System::Void set_JsonPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HCLLCONFADM_SET_JSONPATH_OFFSET))(this, a1);
		}

	};
