#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJIIACFOAKA.h"
#include "unitysdk/PJBGHMDHHBM.h"

class GLJOLMOFGBJ;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HEAELOECIJH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D989650)
#define HEAELOECIJH_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1D989720)
#define HEAELOECIJH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D989900)
#define HEAELOECIJH_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D989D40)
#define HEAELOECIJH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D989C90)
#define HEAELOECIJH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D989690)

inline static constexpr unsigned int HEAELOECIJH_TypeDefinitionIndex = 93880;

class HEAELOECIJH : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::GLJOLMOFGBJ*>* JMINOGAOFIL; // 0x18
	::FJIIACFOAKA DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAELOECIJH__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAELOECIJH_BHLAEBMEOLO_OFFSET))(this);
	}

	::GLJOLMOFGBJ* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::GLJOLMOFGBJ*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HEAELOECIJH_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HEAELOECIJH_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAELOECIJH_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAELOECIJH_PHOADBJGFBE_OFFSET))(this);
	}
};
