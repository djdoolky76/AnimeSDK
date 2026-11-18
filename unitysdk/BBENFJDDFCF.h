#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HIPAIKPCOMC.h"
#include "unitysdk/PJBGHMDHHBM.h"
#include "unitysdk/System/ValueTuple_2.h"

class HCHABNFCHBD;
class JGGMKONCEPK;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BBENFJDDFCF_AIBNAPKKFKG_OFFSET UNITYSDK_OFFSET(0x1ED69BC0)
#define BBENFJDDFCF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1ED695C0)
#define BBENFJDDFCF_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1ED699F0)
#define BBENFJDDFCF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1ED69E10)
#define BBENFJDDFCF_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1ED696E0)
#define BBENFJDDFCF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1ED69900)
#define BBENFJDDFCF__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED69600)

inline static constexpr unsigned int BBENFJDDFCF_TypeDefinitionIndex = 94534;

class BBENFJDDFCF : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::JGGMKONCEPK*, ::HCHABNFCHBD*>>* LKMDNEEBHGG; // 0x18
	::HIPAIKPCOMC DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::JGGMKONCEPK*>* JMINOGAOFIL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBENFJDDFCF__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBENFJDDFCF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBENFJDDFCF_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBENFJDDFCF_PHOADBJGFBE_OFFSET))(this);
	}

	::JGGMKONCEPK* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::JGGMKONCEPK*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BBENFJDDFCF_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Collections::Generic::List_1<::System::ValueTuple_2<::JGGMKONCEPK*, ::HCHABNFCHBD*>>* AIBNAPKKFKG()
	{
		return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::JGGMKONCEPK*, ::HCHABNFCHBD*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBENFJDDFCF_AIBNAPKKFKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BBENFJDDFCF_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}
};
