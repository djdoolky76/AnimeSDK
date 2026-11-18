#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHCLPIGDLFF.h"
#include "unitysdk/PJBGHMDHHBM.h"

class EOCDIIAHPJB;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AFGLPIBDNAN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E718F90)
#define AFGLPIBDNAN_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E719330)
#define AFGLPIBDNAN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E719510)
#define AFGLPIBDNAN_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E719060)
#define AFGLPIBDNAN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E719280)
#define AFGLPIBDNAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E718FD0)

inline static constexpr unsigned int AFGLPIBDNAN_TypeDefinitionIndex = 93545;

class AFGLPIBDNAN : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::EOCDIIAHPJB*>* JMINOGAOFIL; // 0x18
	::AHCLPIGDLFF DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFGLPIBDNAN__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFGLPIBDNAN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFGLPIBDNAN_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFGLPIBDNAN_PHOADBJGFBE_OFFSET))(this);
	}

	::EOCDIIAHPJB* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::EOCDIIAHPJB*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + AFGLPIBDNAN_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AFGLPIBDNAN_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}
};
