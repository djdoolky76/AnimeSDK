#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class PICPKGKNFMC;
namespace System { class String; }

#define IAIJHNBNPBP_BEIPKNLEBJB_HOGMFIHGECP_OFFSET UNITYSDK_OFFSET(0x1F3AA040)
#define IAIJHNBNPBP_BEIPKNLEBJB__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3AA030)

inline static constexpr unsigned int IAIJHNBNPBP_BEIPKNLEBJB_TypeDefinitionIndex = 8410;

class IAIJHNBNPBP_BEIPKNLEBJB : public ::System::Object
{
public:
	::System::Boolean GMBHNOINAPK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIJHNBNPBP_BEIPKNLEBJB__CTOR_OFFSET))(this);
	}

	::System::Int32 HOGMFIHGECP(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::PICPKGKNFMC*> NMDDIIHGFMN, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::PICPKGKNFMC*> JILEDNLMGGA)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::PICPKGKNFMC*>, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::PICPKGKNFMC*>))((::PBYTE)hIl2Cpp + IAIJHNBNPBP_BEIPKNLEBJB_HOGMFIHGECP_OFFSET))(this, NMDDIIHGFMN, JILEDNLMGGA);
	}
};
