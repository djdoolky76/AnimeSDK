#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGLOEEPCEFE.h"
#include "unitysdk/System/Object.h"

class GNKPCOLDKPE;
namespace FlatBuffers { class ByteBuffer; }

#define PFANPBLIMDC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1F339190)
#define PFANPBLIMDC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1F3391E0)
#define PFANPBLIMDC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1F3394F0)
#define PFANPBLIMDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3391D0)

inline static constexpr unsigned int PFANPBLIMDC_TypeDefinitionIndex = 95288;

class PFANPBLIMDC : public ::System::Object
{
public:
	::Il2CppArray<::GNKPCOLDKPE*>* JMINOGAOFIL; // 0x10
	::AGLOEEPCEFE DHDJDGFNBOA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFANPBLIMDC__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFANPBLIMDC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PFANPBLIMDC_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFANPBLIMDC_PHOADBJGFBE_OFFSET))(this);
	}
};
