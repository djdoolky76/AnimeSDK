#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAFCKJIHFBK.h"
#include "unitysdk/PJBGHMDHHBM.h"

class BHCOJILIOIJ;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CPEKDHMMNKA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E1B9040)
#define CPEKDHMMNKA_CFDDCDDLIJF_OFFSET UNITYSDK_OFFSET(0x1E1B9180)
#define CPEKDHMMNKA_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E1B9440)
#define CPEKDHMMNKA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E1B9840)
#define CPEKDHMMNKA_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E1B9620)
#define CPEKDHMMNKA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E1B9390)
#define CPEKDHMMNKA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B9080)

inline static constexpr unsigned int CPEKDHMMNKA_TypeDefinitionIndex = 94137;

class CPEKDHMMNKA : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::BHCOJILIOIJ*>* JMINOGAOFIL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::BHCOJILIOIJ*>*>*>* KMILHOIPGHJ; // 0x20
	::DAFCKJIHFBK DHDJDGFNBOA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEKDHMMNKA__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEKDHMMNKA_BHLAEBMEOLO_OFFSET))(this);
	}

	::BHCOJILIOIJ* CFDDCDDLIJF(::System::Int32 PAICIBDPFPB, ::System::Int32 KPBHHCDEKHI, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::BHCOJILIOIJ*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CPEKDHMMNKA_CFDDCDDLIJF_OFFSET))(this, PAICIBDPFPB, KPBHHCDEKHI, JHFKDGBCOBA);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEKDHMMNKA_PHOADBJGFBE_OFFSET))(this);
	}

	::BHCOJILIOIJ* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::BHCOJILIOIJ*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CPEKDHMMNKA_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPEKDHMMNKA_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CPEKDHMMNKA_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}
};
