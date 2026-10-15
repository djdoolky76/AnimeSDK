#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ADLNNPBDDIH_CTOR_OFFSET UNITYSDK_OFFSET(0xB145670)
#define ADLNNPBDDIH_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0xB145650)
#define ADLNNPBDDIH_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xB145610)
#define ADLNNPBDDIH_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xB145630)
#define ADLNNPBDDIH_GET_ISSELF_OFFSET UNITYSDK_OFFSET(0xB1455F0)
#define ADLNNPBDDIH_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0xB145660)
#define ADLNNPBDDIH_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xB145620)
#define ADLNNPBDDIH_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xB145640)
#define ADLNNPBDDIH_SET_ISSELF_OFFSET UNITYSDK_OFFSET(0xB145600)

inline static constexpr unsigned int ADLNNPBDDIH_TypeDefinitionIndex = 62916;

	class ADLNNPBDDIH : public ::System::Object
	{
	public:
		::System::UInt32 _GroupID_k__BackingField; // 0x10
		::System::UInt32 _InstanceID_k__BackingField; // 0x14
		::System::UInt32 _EntityID_k__BackingField; // 0x18
		::System::Boolean _IsSelf_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLNNPBDDIH_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsSelf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLNNPBDDIH_GET_ISSELF_OFFSET))(this);
		}

		::System::Void set_IsSelf(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ADLNNPBDDIH_SET_ISSELF_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLNNPBDDIH_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ADLNNPBDDIH_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLNNPBDDIH_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ADLNNPBDDIH_SET_INSTANCEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_EntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLNNPBDDIH_GET_ENTITYID_OFFSET))(this);
		}

		::System::Void set_EntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ADLNNPBDDIH_SET_ENTITYID_OFFSET))(this, a1);
		}

	};
