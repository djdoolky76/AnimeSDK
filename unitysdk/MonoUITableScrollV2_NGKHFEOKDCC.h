#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

class MonoUITableScrollV2;
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MONOUITABLESCROLLV2_NGKHFEOKDCC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18F84E40)
#define MONOUITABLESCROLLV2_NGKHFEOKDCC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x18F84E50)
#define MONOUITABLESCROLLV2_NGKHFEOKDCC_WRITE_OFFSET UNITYSDK_OFFSET(0x18F85210)
#define MONOUITABLESCROLLV2_NGKHFEOKDCC__CTOR_OFFSET UNITYSDK_OFFSET(0x18F85450)

inline static constexpr unsigned int MonoUITableScrollV2_NGKHFEOKDCC_TypeDefinitionIndex = 40143;

class MonoUITableScrollV2_NGKHFEOKDCC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_NGKHFEOKDCC__CTOR_OFFSET))(this);
	}

	::System::Int32 get_MemberCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_NGKHFEOKDCC_GET_MEMBERCOUNT_OFFSET))(this);
	}

	::System::Boolean ReadMember(::MonoUITableScrollV2*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoUITableScrollV2*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_NGKHFEOKDCC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
	}

	::System::Void Write(::MonoUITableScrollV2*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_NGKHFEOKDCC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
	}
};
