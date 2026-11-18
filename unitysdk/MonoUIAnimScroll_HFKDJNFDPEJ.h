#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

class MonoUIAnimScroll;
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MONOUIANIMSCROLL_HFKDJNFDPEJ_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x170EB850)
#define MONOUIANIMSCROLL_HFKDJNFDPEJ_READMEMBER_OFFSET UNITYSDK_OFFSET(0x170EB860)
#define MONOUIANIMSCROLL_HFKDJNFDPEJ_WRITE_OFFSET UNITYSDK_OFFSET(0x170EBD60)
#define MONOUIANIMSCROLL_HFKDJNFDPEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x170EC060)

inline static constexpr unsigned int MonoUIAnimScroll_HFKDJNFDPEJ_TypeDefinitionIndex = 65048;

class MonoUIAnimScroll_HFKDJNFDPEJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_HFKDJNFDPEJ__CTOR_OFFSET))(this);
	}

	::System::Int32 get_MemberCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_HFKDJNFDPEJ_GET_MEMBERCOUNT_OFFSET))(this);
	}

	::System::Boolean ReadMember(::MonoUIAnimScroll*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MonoUIAnimScroll*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_HFKDJNFDPEJ_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
	}

	::System::Void Write(::MonoUIAnimScroll*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUIAnimScroll*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MONOUIANIMSCROLL_HFKDJNFDPEJ_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
	}
};
