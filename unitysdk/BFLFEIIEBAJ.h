#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KMFEAAMGGOD.h"
#include "unitysdk/PJBGHMDHHBM.h"

class EDELALHEFMB;
class HHDCEJNLLBG;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFLFEIIEBAJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E61E980)
#define BFLFEIIEBAJ_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E61EE90)
#define BFLFEIIEBAJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E61EAA0)
#define BFLFEIIEBAJ_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E61F070)
#define BFLFEIIEBAJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E61EDA0)
#define BFLFEIIEBAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1E61E9C0)

inline static constexpr unsigned int BFLFEIIEBAJ_TypeDefinitionIndex = 94705;

class BFLFEIIEBAJ : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::List_1<::HHDCEJNLLBG*>* MPKLADBLKCN; // 0x18
	::KMFEAAMGGOD DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::EDELALHEFMB*>* JMINOGAOFIL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLFEIIEBAJ__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLFEIIEBAJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BFLFEIIEBAJ_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::EDELALHEFMB* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::EDELALHEFMB*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BFLFEIIEBAJ_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLFEIIEBAJ_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLFEIIEBAJ_PHOADBJGFBE_OFFSET))(this);
	}
};
