#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKFEOPMFCGL.h"
#include "unitysdk/PJBGHMDHHBM.h"

class PFBNBEECFAC;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NBHKCFIMHML_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E72F190)
#define NBHKCFIMHML_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E72F6A0)
#define NBHKCFIMHML_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E72F260)
#define NBHKCFIMHML_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E72F880)
#define NBHKCFIMHML_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E72F5F0)
#define NBHKCFIMHML__CTOR_OFFSET UNITYSDK_OFFSET(0x1E72F1D0)

inline static constexpr unsigned int NBHKCFIMHML_TypeDefinitionIndex = 94349;

class NBHKCFIMHML : public ::PJBGHMDHHBM
{
public:
	::KKFEOPMFCGL DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::PFBNBEECFAC*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHKCFIMHML__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHKCFIMHML_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NBHKCFIMHML_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHKCFIMHML_PHOADBJGFBE_OFFSET))(this);
	}

	::PFBNBEECFAC* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::PFBNBEECFAC*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NBHKCFIMHML_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHKCFIMHML_MDGCOKBMLFG_OFFSET))(this);
	}
};
