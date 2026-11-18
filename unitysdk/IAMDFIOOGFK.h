#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNMBCEPELDK.h"
#include "unitysdk/PJBGHMDHHBM.h"

class OADIEDILCGN;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IAMDFIOOGFK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1EFC8390)
#define IAMDFIOOGFK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1EFC8C80)
#define IAMDFIOOGFK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1EFC84D0)
#define IAMDFIOOGFK_PEMEOHKNKMA_OFFSET UNITYSDK_OFFSET(0x1EFC8A30)
#define IAMDFIOOGFK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1EFC8910)
#define IAMDFIOOGFK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC83D0)

inline static constexpr unsigned int IAMDFIOOGFK_TypeDefinitionIndex = 28681;

class IAMDFIOOGFK : public ::PJBGHMDHHBM
{
public:
	::LNMBCEPELDK DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::OADIEDILCGN*>* JMINOGAOFIL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::OADIEDILCGN*>*>* MDEOMIKFCJI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMDFIOOGFK__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMDFIOOGFK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + IAMDFIOOGFK_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Collections::Generic::List_1<::OADIEDILCGN*>* PEMEOHKNKMA(::System::Int32 HBHJNGPLMNL, ::System::Int32 DHLNBNGJALG)
	{
		return ((::System::Collections::Generic::List_1<::OADIEDILCGN*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IAMDFIOOGFK_PEMEOHKNKMA_OFFSET))(this, HBHJNGPLMNL, DHLNBNGJALG);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMDFIOOGFK_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMDFIOOGFK_PHOADBJGFBE_OFFSET))(this);
	}
};
