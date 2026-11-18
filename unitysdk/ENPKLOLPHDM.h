#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGNOFNGFOFJ.h"
#include "unitysdk/PJBGHMDHHBM.h"

class CJMGLINLAJA;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ENPKLOLPHDM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E2327C0)
#define ENPKLOLPHDM_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E232B60)
#define ENPKLOLPHDM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E232D40)
#define ENPKLOLPHDM_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E232940)
#define ENPKLOLPHDM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E232890)
#define ENPKLOLPHDM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E232800)

inline static constexpr unsigned int ENPKLOLPHDM_TypeDefinitionIndex = 93425;

class ENPKLOLPHDM : public ::PJBGHMDHHBM
{
public:
	::KGNOFNGFOFJ DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::CJMGLINLAJA*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPKLOLPHDM__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPKLOLPHDM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPKLOLPHDM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPKLOLPHDM_MDGCOKBMLFG_OFFSET))(this);
	}

	::CJMGLINLAJA* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::CJMGLINLAJA*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ENPKLOLPHDM_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + ENPKLOLPHDM_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}
};
