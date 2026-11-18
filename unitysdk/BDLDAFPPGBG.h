#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIOLPMJNFNF.h"
#include "unitysdk/PJBGHMDHHBM.h"

class OBBBIBAPMFI;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BDLDAFPPGBG_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1CCA6310)
#define BDLDAFPPGBG_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1CCA6820)
#define BDLDAFPPGBG_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1CCA6490)
#define BDLDAFPPGBG_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1CCA6A00)
#define BDLDAFPPGBG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1CCA63E0)
#define BDLDAFPPGBG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA6350)

inline static constexpr unsigned int BDLDAFPPGBG_TypeDefinitionIndex = 93654;

class BDLDAFPPGBG : public ::PJBGHMDHHBM
{
public:
	::PIOLPMJNFNF DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::OBBBIBAPMFI*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLDAFPPGBG__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLDAFPPGBG_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLDAFPPGBG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDLDAFPPGBG_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::OBBBIBAPMFI* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::OBBBIBAPMFI*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BDLDAFPPGBG_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLDAFPPGBG_MDGCOKBMLFG_OFFSET))(this);
	}
};
