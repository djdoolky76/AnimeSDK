#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

class ConfigTextureColor;
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define CONFIGTEXTURECOLOR_KJGNCEEGPMH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12B95D50)
#define CONFIGTEXTURECOLOR_KJGNCEEGPMH_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12B95D60)
#define CONFIGTEXTURECOLOR_KJGNCEEGPMH_WRITE_OFFSET UNITYSDK_OFFSET(0x12B96070)
#define CONFIGTEXTURECOLOR_KJGNCEEGPMH__CTOR_OFFSET UNITYSDK_OFFSET(0x12B96240)

inline static constexpr unsigned int ConfigTextureColor_KJGNCEEGPMH_TypeDefinitionIndex = 59445;

class ConfigTextureColor_KJGNCEEGPMH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTEXTURECOLOR_KJGNCEEGPMH__CTOR_OFFSET))(this);
	}

	::System::Int32 get_MemberCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTEXTURECOLOR_KJGNCEEGPMH_GET_MEMBERCOUNT_OFFSET))(this);
	}

	::System::Boolean ReadMember(::ConfigTextureColor*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
	{
		return ((::System::Boolean(*)(::PVOID, ::ConfigTextureColor*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + CONFIGTEXTURECOLOR_KJGNCEEGPMH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
	}

	::System::Void Write(::ConfigTextureColor*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
	{
		return ((::System::Void(*)(::PVOID, ::ConfigTextureColor*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + CONFIGTEXTURECOLOR_KJGNCEEGPMH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
	}
};
