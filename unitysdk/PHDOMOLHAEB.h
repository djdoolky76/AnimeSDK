#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEGFDGPNICF.h"
#include "unitysdk/System/Object.h"

class HGOMLPLMEBH;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHDOMOLHAEB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E573CA0)
#define PHDOMOLHAEB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E573D70)
#define PHDOMOLHAEB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E574100)
#define PHDOMOLHAEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1E573CE0)

inline static constexpr unsigned int PHDOMOLHAEB_TypeDefinitionIndex = 95259;

class PHDOMOLHAEB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::HGOMLPLMEBH*>* JMINOGAOFIL; // 0x10
	::BEGFDGPNICF DHDJDGFNBOA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDOMOLHAEB__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDOMOLHAEB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PHDOMOLHAEB_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDOMOLHAEB_PHOADBJGFBE_OFFSET))(this);
	}
};
