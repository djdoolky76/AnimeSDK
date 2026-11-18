#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

class UIControllerExtensionData;
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define UICONTROLLEREXTENSIONDATA_JLPPPCPDKHD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1D9E6A30)
#define UICONTROLLEREXTENSIONDATA_JLPPPCPDKHD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1D9E6A40)
#define UICONTROLLEREXTENSIONDATA_JLPPPCPDKHD_WRITE_OFFSET UNITYSDK_OFFSET(0x1D9E6DF0)
#define UICONTROLLEREXTENSIONDATA_JLPPPCPDKHD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E7020)

inline static constexpr unsigned int UIControllerExtensionData_JLPPPCPDKHD_TypeDefinitionIndex = 83422;

class UIControllerExtensionData_JLPPPCPDKHD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONTROLLEREXTENSIONDATA_JLPPPCPDKHD__CTOR_OFFSET))(this);
	}

	::System::Int32 get_MemberCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UICONTROLLEREXTENSIONDATA_JLPPPCPDKHD_GET_MEMBERCOUNT_OFFSET))(this);
	}

	::System::Boolean ReadMember(::UIControllerExtensionData*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
	{
		return ((::System::Boolean(*)(::PVOID, ::UIControllerExtensionData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + UICONTROLLEREXTENSIONDATA_JLPPPCPDKHD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
	}

	::System::Void Write(::UIControllerExtensionData*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
	{
		return ((::System::Void(*)(::PVOID, ::UIControllerExtensionData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + UICONTROLLEREXTENSIONDATA_JLPPPCPDKHD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
	}
};
