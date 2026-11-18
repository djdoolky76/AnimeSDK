#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBGABOFHFHL.h"
#include "unitysdk/FFINLFNBLBG.h"
#include "unitysdk/MEMDIFHDIAC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Tuple_3.h"

class NFCIDHJGOIB;
namespace MoleMole { class MonoConfigurableCollider; }
namespace MoleMole::Config { class ConfigTimeDrivenAttackCollider; }

#define CFAADMFEGHP_KHDCFLNFENM_OFFSET UNITYSDK_OFFSET(0x1153A580)
#define CFAADMFEGHP_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1153A2D0)
#define CFAADMFEGHP_OAFPNLCIPGC_OFFSET UNITYSDK_OFFSET(0x1153A350)
#define CFAADMFEGHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1153A2C0)

inline static constexpr unsigned int CFAADMFEGHP_TypeDefinitionIndex = 83372;

class CFAADMFEGHP : public ::System::Object
{
public:
	::MoleMole::Config::ConfigTimeDrivenAttackCollider* CNKCEGLIGNK; // 0x10
	::NFCIDHJGOIB* AHMFPFACACD; // 0x18
	::MoleMole::MonoConfigurableCollider* PCGHANONAML; // 0x20
	::FFINLFNBLBG MKPLLOPMFBI; // 0x28
	::MEMDIFHDIAC MGMDJCCEAIB; // 0x2C
	::System::Int32 HBDIPHMIGKI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFAADMFEGHP__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFAADMFEGHP_NPOLNFDBOOD_OFFSET))(this);
	}

	::Foundation::Tuple_3<::System::Single, ::System::Single, ::System::Single> OAFPNLCIPGC()
	{
		return ((::Foundation::Tuple_3<::System::Single, ::System::Single, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + CFAADMFEGHP_OAFPNLCIPGC_OFFSET))(this);
	}

	::EBGABOFHFHL KHDCFLNFENM()
	{
		return ((::EBGABOFHFHL(*)(::PVOID))((::PBYTE)hIl2Cpp + CFAADMFEGHP_KHDCFLNFENM_OFFSET))(this);
	}
};
