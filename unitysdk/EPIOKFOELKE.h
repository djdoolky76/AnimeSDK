#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDLEDCKKCOD.h"
#include "unitysdk/System/Object.h"

class OBCGDEHBPHG;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EPIOKFOELKE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1FCE2A30)
#define EPIOKFOELKE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1FCE2C90)
#define EPIOKFOELKE_MMBMHGPMOGI_OFFSET UNITYSDK_OFFSET(0x1FCE2B00)
#define EPIOKFOELKE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1FCE2BE0)
#define EPIOKFOELKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCE2A70)

inline static constexpr unsigned int EPIOKFOELKE_TypeDefinitionIndex = 95299;

class EPIOKFOELKE : public ::System::Object
{
public:
	::GDLEDCKKCOD DHDJDGFNBOA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::OBCGDEHBPHG*>* JMINOGAOFIL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIOKFOELKE__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIOKFOELKE_BHLAEBMEOLO_OFFSET))(this);
	}

	::OBCGDEHBPHG* MMBMHGPMOGI(::System::Int32 MGMDLMBEDJF)
	{
		return ((::OBCGDEHBPHG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPIOKFOELKE_MMBMHGPMOGI_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIOKFOELKE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + EPIOKFOELKE_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}
};
