#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"

namespace MoleMole::Config { class HackObjectTrait; }

#define IGBEALPEKOE_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16A98050)
#define IGBEALPEKOE_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16A97B40)
#define IGBEALPEKOE_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x16A980B0)
#define IGBEALPEKOE_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x16A98130)
#define IGBEALPEKOE_NGHCGANFNCD_OFFSET UNITYSDK_OFFSET(0x16A97C20)
#define IGBEALPEKOE_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16A97AF0)
#define IGBEALPEKOE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A97B90)
#define IGBEALPEKOE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A97C10)

inline static constexpr unsigned int IGBEALPEKOE_TypeDefinitionIndex = 53900;

class IGBEALPEKOE : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::String* FMABHPMBCFB; // 0x0
	// static const ::System::Int32 GCGKOBIPAIG = 0x1E8875; // 0x0
	// static const ::System::Int32 IPAPPCOIEIF = 0x98; // 0x0
	::MoleMole::Config::HackObjectTrait* OFJDNKBIALO; // 0x48
	::System::Boolean DPOJBEEBGFG; // 0x50
	::System::Byte _padding0[0x3];
	::System::UInt32 HCOJLINMKPO; // 0x54

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGBEALPEKOE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBEALPEKOE__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBEALPEKOE_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBEALPEKOE_GETCLASSID_OFFSET))(this);
	}

	::Foundation::ViewObject::ViewObjectHandle NGHCGANFNCD()
	{
		return ((::Foundation::ViewObject::ViewObjectHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBEALPEKOE_NGHCGANFNCD_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Config::HackObjectTrait* CGMNNBDIGDJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::HackObjectTrait*))((::PBYTE)hIl2Cpp + IGBEALPEKOE_BBOMJDBNHIC_OFFSET))(this, CGMNNBDIGDJ);
	}

	static ::IGBEALPEKOE* JFDOOELFAOA()
	{
		return ((::IGBEALPEKOE*(*)())((::PBYTE)hIl2Cpp + IGBEALPEKOE_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBEALPEKOE_MEFBHFEOKGH_OFFSET))(this);
	}
};
