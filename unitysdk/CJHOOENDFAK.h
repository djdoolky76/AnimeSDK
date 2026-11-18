#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDHEKGIOJMG.h"
#include "unitysdk/PJBGHMDHHBM.h"

class KKGDDLOEICI;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CJHOOENDFAK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E4C89A0)
#define CJHOOENDFAK_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E4C8A70)
#define CJHOOENDFAK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E4C8CF0)
#define CJHOOENDFAK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E4C8C40)
#define CJHOOENDFAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C89E0)

inline static constexpr unsigned int CJHOOENDFAK_TypeDefinitionIndex = 93606;

class CJHOOENDFAK : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::KKGDDLOEICI*>* JMINOGAOFIL; // 0x18
	::MDHEKGIOJMG DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHOOENDFAK__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHOOENDFAK_BHLAEBMEOLO_OFFSET))(this);
	}

	::KKGDDLOEICI* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::KKGDDLOEICI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CJHOOENDFAK_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHOOENDFAK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + CJHOOENDFAK_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}
};
