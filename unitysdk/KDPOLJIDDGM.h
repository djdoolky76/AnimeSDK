#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAFMEEKFHHM.h"
#include "unitysdk/PJBGHMDHHBM.h"

class EMLODEPOENE;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define KDPOLJIDDGM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1DAC5A60)
#define KDPOLJIDDGM_CIKMLKEIJCK_OFFSET UNITYSDK_OFFSET(0x1DAC6150)
#define KDPOLJIDDGM_FOFLGMONKPJ_OFFSET UNITYSDK_OFFSET(0x1DAC6FA0)
#define KDPOLJIDDGM_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1DAC5D50)
#define KDPOLJIDDGM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1DAC64B0)
#define KDPOLJIDDGM_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1DAC5F30)
#define KDPOLJIDDGM_MFGIDBMPLIN_OFFSET UNITYSDK_OFFSET(0x1DAC6270)
#define KDPOLJIDDGM_OACNBDBHLMD_OFFSET UNITYSDK_OFFSET(0x1DAC5CC0)
#define KDPOLJIDDGM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1DAC6390)
#define KDPOLJIDDGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC5AA0)

inline static constexpr unsigned int KDPOLJIDDGM_TypeDefinitionIndex = 93447;

class KDPOLJIDDGM : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* LBBEHOLDEDI; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* EGKMFHJLGFO; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* PNGFNFHPCFB; // 0x28
	::FAFMEEKFHHM DHDJDGFNBOA; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::EMLODEPOENE*>* JMINOGAOFIL; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPOLJIDDGM__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPOLJIDDGM_BHLAEBMEOLO_OFFSET))(this);
	}

	::EMLODEPOENE* OACNBDBHLMD(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EMLODEPOENE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDPOLJIDDGM_OACNBDBHLMD_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPOLJIDDGM_MDGCOKBMLFG_OFFSET))(this);
	}

	::EMLODEPOENE* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::EMLODEPOENE*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + KDPOLJIDDGM_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* CIKMLKEIJCK(::System::Int32 EEIKCCDAFCI)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDPOLJIDDGM_CIKMLKEIJCK_OFFSET))(this, EEIKCCDAFCI);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* MFGIDBMPLIN(::System::Int32 HNDHMJOMFHC)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDPOLJIDDGM_MFGIDBMPLIN_OFFSET))(this, HNDHMJOMFHC);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPOLJIDDGM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KDPOLJIDDGM_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Int32 FOFLGMONKPJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KDPOLJIDDGM_FOFLGMONKPJ_OFFSET))(this, MGMDLMBEDJF);
	}
};
