#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIIOFMPIMOG.h"
#include "unitysdk/PJBGHMDHHBM.h"

class APPFBHFIJMC;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HAJFMOJBJHI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D9FE950)
#define HAJFMOJBJHI_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1D9FEE60)
#define HAJFMOJBJHI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D9FEAD0)
#define HAJFMOJBJHI_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D9FF040)
#define HAJFMOJBJHI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D9FEA20)
#define HAJFMOJBJHI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FE990)

inline static constexpr unsigned int HAJFMOJBJHI_TypeDefinitionIndex = 94046;

class HAJFMOJBJHI : public ::PJBGHMDHHBM
{
public:
	::AIIOFMPIMOG DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::APPFBHFIJMC*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJFMOJBJHI__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJFMOJBJHI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJFMOJBJHI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HAJFMOJBJHI_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::APPFBHFIJMC* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::APPFBHFIJMC*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HAJFMOJBJHI_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJFMOJBJHI_MDGCOKBMLFG_OFFSET))(this);
	}
};
