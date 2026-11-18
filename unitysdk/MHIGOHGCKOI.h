#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODDOBHCNAJO.h"
#include "unitysdk/System/Object.h"

class GFJAMOFBCKM;
namespace FlatBuffers { class ByteBuffer; }

#define MHIGOHGCKOI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1F670610)
#define MHIGOHGCKOI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1F670660)
#define MHIGOHGCKOI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1F670970)
#define MHIGOHGCKOI__CTOR_OFFSET UNITYSDK_OFFSET(0x1F670650)

inline static constexpr unsigned int MHIGOHGCKOI_TypeDefinitionIndex = 95253;

class MHIGOHGCKOI : public ::System::Object
{
public:
	::Il2CppArray<::GFJAMOFBCKM*>* JMINOGAOFIL; // 0x10
	::ODDOBHCNAJO DHDJDGFNBOA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIGOHGCKOI__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIGOHGCKOI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MHIGOHGCKOI_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHIGOHGCKOI_PHOADBJGFBE_OFFSET))(this);
	}
};
