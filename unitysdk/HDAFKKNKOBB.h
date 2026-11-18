#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJAGDAABFDL.h"
#include "unitysdk/System/Object.h"

class HDPAHECMMGA;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HDAFKKNKOBB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1FC6F3E0)
#define HDAFKKNKOBB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1FC6F4B0)
#define HDAFKKNKOBB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1FC6F840)
#define HDAFKKNKOBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6F420)

inline static constexpr unsigned int HDAFKKNKOBB_TypeDefinitionIndex = 95302;

class HDAFKKNKOBB : public ::System::Object
{
public:
	::IJAGDAABFDL DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::HDPAHECMMGA*>* JMINOGAOFIL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDAFKKNKOBB__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDAFKKNKOBB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HDAFKKNKOBB_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDAFKKNKOBB_PHOADBJGFBE_OFFSET))(this);
	}
};
