#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class PMNKLBCPENN;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define NGHNFKFGMNA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12C5CC10)
#define NGHNFKFGMNA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12C5C770)
#define NGHNFKFGMNA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12C5E270)
#define NGHNFKFGMNA__CTOR_OFFSET UNITYSDK_OFFSET(0x12C5DEF0)

inline static constexpr unsigned int NGHNFKFGMNA_TypeDefinitionIndex = 58748;

class NGHNFKFGMNA : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* JAEMGNMGAGP; // 0x28
	::PMNKLBCPENN* BJMOFBNIEJE; // 0x30
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* MIIAKIOJHJC; // 0x38
	::KCMIFNGABDC_1<::System::Single>* KDMAPIKGLJM; // 0x40
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x48
	::CPABOPKIGAL* PLEJMLIFFHG; // 0x50
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* NHIBLGIKAKJ; // 0x58
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* FOOFNOFGGAK; // 0x60
	::CPABOPKIGAL* PIAKOEHLIEP; // 0x68
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* JDFLBLBEAAA; // 0x70
	::KCMIFNGABDC_1<::System::String*>* OJLLEEAILNB; // 0x78
	::KCMIFNGABDC_1<::System::Single>* DCEDNLDKEFD; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHNFKFGMNA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHNFKFGMNA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NGHNFKFGMNA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHNFKFGMNA_GDEOPIBNOIN_OFFSET))(this);
	}
};
