#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHIDDCPCCHP.h"
#include "unitysdk/PJBGHMDHHBM.h"
#include "unitysdk/System/ValueTuple_2.h"

class HCHABNFCHBD;
class LLMMPGEIGIE;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DJEDIIKMPDB_AIBNAPKKFKG_OFFSET UNITYSDK_OFFSET(0x1E75E960)
#define DJEDIIKMPDB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E75E620)
#define DJEDIIKMPDB_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E759D30)
#define DJEDIIKMPDB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E75ECA0)
#define DJEDIIKMPDB_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E75E740)
#define DJEDIIKMPDB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E75EBB0)
#define DJEDIIKMPDB__CTOR_OFFSET UNITYSDK_OFFSET(0x1E75E660)

inline static constexpr unsigned int DJEDIIKMPDB_TypeDefinitionIndex = 94809;

class DJEDIIKMPDB : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::LLMMPGEIGIE*>* JMINOGAOFIL; // 0x18
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::LLMMPGEIGIE*, ::HCHABNFCHBD*>>* LKMDNEEBHGG; // 0x20
	::JHIDDCPCCHP DHDJDGFNBOA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEDIIKMPDB__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEDIIKMPDB_BHLAEBMEOLO_OFFSET))(this);
	}

	::LLMMPGEIGIE* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::LLMMPGEIGIE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DJEDIIKMPDB_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEDIIKMPDB_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::ValueTuple_2<::LLMMPGEIGIE*, ::HCHABNFCHBD*>>* AIBNAPKKFKG()
	{
		return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::LLMMPGEIGIE*, ::HCHABNFCHBD*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEDIIKMPDB_AIBNAPKKFKG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEDIIKMPDB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DJEDIIKMPDB_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}
};
