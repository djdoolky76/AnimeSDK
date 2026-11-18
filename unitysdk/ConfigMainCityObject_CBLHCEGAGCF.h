#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

class ConfigMainCityObject;
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define CONFIGMAINCITYOBJECT_CBLHCEGAGCF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16890B20)
#define CONFIGMAINCITYOBJECT_CBLHCEGAGCF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16890B30)
#define CONFIGMAINCITYOBJECT_CBLHCEGAGCF_WRITE_OFFSET UNITYSDK_OFFSET(0x16890CC0)
#define CONFIGMAINCITYOBJECT_CBLHCEGAGCF__CTOR_OFFSET UNITYSDK_OFFSET(0x16890DE0)

inline static constexpr unsigned int ConfigMainCityObject_CBLHCEGAGCF_TypeDefinitionIndex = 62140;

class ConfigMainCityObject_CBLHCEGAGCF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMAINCITYOBJECT_CBLHCEGAGCF__CTOR_OFFSET))(this);
	}

	::System::Int32 get_MemberCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMAINCITYOBJECT_CBLHCEGAGCF_GET_MEMBERCOUNT_OFFSET))(this);
	}

	::System::Boolean ReadMember(::ConfigMainCityObject*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
	{
		return ((::System::Boolean(*)(::PVOID, ::ConfigMainCityObject*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + CONFIGMAINCITYOBJECT_CBLHCEGAGCF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
	}

	::System::Void Write(::ConfigMainCityObject*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
	{
		return ((::System::Void(*)(::PVOID, ::ConfigMainCityObject*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + CONFIGMAINCITYOBJECT_CBLHCEGAGCF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
	}
};
