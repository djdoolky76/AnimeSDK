#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHEIBCAEJPP.h"
#include "unitysdk/PJBGHMDHHBM.h"

class CFFPNCIJCFI;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FAHABEOMOEP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E2330D0)
#define FAHABEOMOEP_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E233800)
#define FAHABEOMOEP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E2333C0)
#define FAHABEOMOEP_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E2331A0)
#define FAHABEOMOEP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E233750)
#define FAHABEOMOEP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E233110)

inline static constexpr unsigned int FAHABEOMOEP_TypeDefinitionIndex = 94235;

class FAHABEOMOEP : public ::PJBGHMDHHBM
{
public:
	::GHEIBCAEJPP DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::CFFPNCIJCFI*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHABEOMOEP__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHABEOMOEP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHABEOMOEP_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FAHABEOMOEP_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHABEOMOEP_PHOADBJGFBE_OFFSET))(this);
	}

	::CFFPNCIJCFI* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::CFFPNCIJCFI*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FAHABEOMOEP_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}
};
