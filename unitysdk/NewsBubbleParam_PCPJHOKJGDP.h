#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

class NewsBubbleParam;
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define NEWSBUBBLEPARAM_PCPJHOKJGDP_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1365BDF0)
#define NEWSBUBBLEPARAM_PCPJHOKJGDP_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1365BE00)
#define NEWSBUBBLEPARAM_PCPJHOKJGDP_WRITE_OFFSET UNITYSDK_OFFSET(0x1365C060)
#define NEWSBUBBLEPARAM_PCPJHOKJGDP__CTOR_OFFSET UNITYSDK_OFFSET(0x1365C1E0)

inline static constexpr unsigned int NewsBubbleParam_PCPJHOKJGDP_TypeDefinitionIndex = 61465;

class NewsBubbleParam_PCPJHOKJGDP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWSBUBBLEPARAM_PCPJHOKJGDP__CTOR_OFFSET))(this);
	}

	::System::Int32 get_MemberCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWSBUBBLEPARAM_PCPJHOKJGDP_GET_MEMBERCOUNT_OFFSET))(this);
	}

	::System::Boolean ReadMember(::NewsBubbleParam*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
	{
		return ((::System::Boolean(*)(::PVOID, ::NewsBubbleParam*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWSBUBBLEPARAM_PCPJHOKJGDP_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
	}

	::System::Void Write(::NewsBubbleParam*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
	{
		return ((::System::Void(*)(::PVOID, ::NewsBubbleParam*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + NEWSBUBBLEPARAM_PCPJHOKJGDP_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
	}
};
