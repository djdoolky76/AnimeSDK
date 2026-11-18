#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIJHPCKPPAB.h"
#include "unitysdk/System/Object.h"

class EIMAMDFKKKB;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CALPGLNODJH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C5F9D50)
#define CALPGLNODJH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C5FA010)
#define CALPGLNODJH_MMBMHGPMOGI_OFFSET UNITYSDK_OFFSET(0x1C5FA3A0)
#define CALPGLNODJH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C5F9F60)
#define CALPGLNODJH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F9ED0)

inline static constexpr unsigned int CALPGLNODJH_TypeDefinitionIndex = 95214;

class CALPGLNODJH : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::EIMAMDFKKKB*>* JMINOGAOFIL; // 0x10
	::AIJHPCKPPAB DHDJDGFNBOA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALPGLNODJH__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALPGLNODJH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALPGLNODJH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CALPGLNODJH_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::EIMAMDFKKKB* MMBMHGPMOGI(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EIMAMDFKKKB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CALPGLNODJH_MMBMHGPMOGI_OFFSET))(this, MGMDLMBEDJF);
	}
};
