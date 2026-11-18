#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFGBJHCEJID.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class IANAIPMNOBC;
class JNBMHEBGHAE;
class KFHNCJALFJK;
class MPHHJLPIKPO;
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FDKIIFCDJNP_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xBB38A30)
#define FDKIIFCDJNP_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xBB38C20)
#define FDKIIFCDJNP_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xBB38B90)
#define FDKIIFCDJNP_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xBB38540)
#define FDKIIFCDJNP_PEFFGMNLCLA_OFFSET UNITYSDK_OFFSET(0xBB38D20)
#define FDKIIFCDJNP__CCTOR_OFFSET UNITYSDK_OFFSET(0xBB38A80)
#define FDKIIFCDJNP__CTOR_OFFSET UNITYSDK_OFFSET(0xBB38B00)

inline static constexpr unsigned int FDKIIFCDJNP_TypeDefinitionIndex = 62230;

class FDKIIFCDJNP : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xBB; // 0x0
	::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController* FANMFPOOMOM; // 0x48
	::KFHNCJALFJK* AELAIEACNAM; // 0x50
	::MoleMole::EntityHandle CMDCIADBCCN; // 0x58
	::System::Collections::Generic::List_1<::MPHHJLPIKPO*>* PPIOHHEBHJD; // 0x68
	::MoleMole::EntityHandle CJHKKDKFGJE; // 0x70
	::JNBMHEBGHAE* AHMFPFACACD; // 0x80
	::System::Collections::Generic::List_1<::IANAIPMNOBC*>* MNPMJPIHCOA; // 0x88
	::System::Single FGIFJCJEOFH; // 0x90
	::System::Boolean KLAEINMPECL; // 0x94
	::System::Byte _padding0[0x3];
	::LFGBJHCEJID OBBHKKEEAGG; // 0x98
	::System::Single LMMPGGNLILP; // 0xB4
	::System::Int32 POKBJLLHLPD; // 0xB8

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDKIIFCDJNP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDKIIFCDJNP__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDKIIFCDJNP_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDKIIFCDJNP_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDKIIFCDJNP_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::FDKIIFCDJNP* JFDOOELFAOA()
	{
		return ((::FDKIIFCDJNP*(*)())((::PBYTE)hIl2Cpp + FDKIIFCDJNP_JFDOOELFAOA_OFFSET))();
	}

	::MPHHJLPIKPO* PEFFGMNLCLA()
	{
		return ((::MPHHJLPIKPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDKIIFCDJNP_PEFFGMNLCLA_OFFSET))(this);
	}
};
