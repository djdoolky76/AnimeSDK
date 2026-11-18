#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/GKNGGHDFOIE_BILADCMGOGJ.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class EGOJNNIFDJJ;

#define GKNGGHDFOIE_AMEGHCHMIOD_OFFSET UNITYSDK_OFFSET(0x14CF8550)
#define GKNGGHDFOIE_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14CF7E30)
#define GKNGGHDFOIE_HDDDADKPCOK_OFFSET UNITYSDK_OFFSET(0x14CF7F60)
#define GKNGGHDFOIE_IBBNAFMONON_OFFSET UNITYSDK_OFFSET(0x14CF7F10)
#define GKNGGHDFOIE_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x14CF84D0)
#define GKNGGHDFOIE_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x14CF87F0)
#define GKNGGHDFOIE_OHLOGGJHKGE_OFFSET UNITYSDK_OFFSET(0x14CF85C0)
#define GKNGGHDFOIE_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14CF7DE0)
#define GKNGGHDFOIE_PEKNBJPFKJN_OFFSET UNITYSDK_OFFSET(0x14CF82F0)
#define GKNGGHDFOIE__CCTOR_OFFSET UNITYSDK_OFFSET(0x14CF7E80)
#define GKNGGHDFOIE__CTOR_OFFSET UNITYSDK_OFFSET(0x14CF7F00)

inline static constexpr unsigned int GKNGGHDFOIE_TypeDefinitionIndex = 87776;

class GKNGGHDFOIE : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xDB; // 0x0
	::Foundation::ViewObject::ViewObjectHandle NACHIBDCMMJ; // 0x48
	::GKNGGHDFOIE_BILADCMGOGJ JBHBDMIIEGN; // 0x58
	::System::Single AMLJAGMBFIN; // 0x70
	::System::Boolean EEICPDPEAIC; // 0x74

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKNGGHDFOIE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNGGHDFOIE__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNGGHDFOIE_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNGGHDFOIE_GETCLASSID_OFFSET))(this);
	}

	::System::Void IBBNAFMONON()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNGGHDFOIE_IBBNAFMONON_OFFSET))(this);
	}

	::System::Void HDDDADKPCOK(::MoleMole::EntityHandle HPADNAEINPK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + GKNGGHDFOIE_HDDDADKPCOK_OFFSET))(this, HPADNAEINPK);
	}

	::EGOJNNIFDJJ* PEKNBJPFKJN()
	{
		return ((::EGOJNNIFDJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNGGHDFOIE_PEKNBJPFKJN_OFFSET))(this);
	}

	static ::GKNGGHDFOIE* JFDOOELFAOA()
	{
		return ((::GKNGGHDFOIE*(*)())((::PBYTE)hIl2Cpp + GKNGGHDFOIE_JFDOOELFAOA_OFFSET))();
	}

	::GKNGGHDFOIE* AMEGHCHMIOD(::Foundation::ViewObject::ViewObjectHandle FIPCNCNEKDB)
	{
		return ((::GKNGGHDFOIE*(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + GKNGGHDFOIE_AMEGHCHMIOD_OFFSET))(this, FIPCNCNEKDB);
	}

	::System::Void OHLOGGJHKGE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNGGHDFOIE_OHLOGGJHKGE_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKNGGHDFOIE_MEFBHFEOKGH_OFFSET))(this);
	}
};
