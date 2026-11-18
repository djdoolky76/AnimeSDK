#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/InspireZoneOperationType.h"
#include "unitysdk/System/Object.h"

class KPJAJIJHHIL;
class ODBFJKANCBI;
namespace MoleMole { class UIInLevelExQteFeverV3ChildWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define BLPJDIHECEG_GHHDMAJCPHP_OFFSET UNITYSDK_OFFSET(0xFF8BCE0)
#define BLPJDIHECEG_GPGMCIMBLMG_OFFSET UNITYSDK_OFFSET(0xFF8C680)
#define BLPJDIHECEG_IKGNOPHGADG_OFFSET UNITYSDK_OFFSET(0xFF8B760)
#define BLPJDIHECEG_KMKHNLDGHGK_OFFSET UNITYSDK_OFFSET(0xFF8B800)
#define BLPJDIHECEG_LFKAGJMFMEJ_OFFSET UNITYSDK_OFFSET(0xFF8C970)
#define BLPJDIHECEG_OBDPNKKBMFI_OFFSET UNITYSDK_OFFSET(0xFF8C390)
#define BLPJDIHECEG_OCPIPIJCOEO_OFFSET UNITYSDK_OFFSET(0xFF8BD50)
#define BLPJDIHECEG_OIBKFFAGPNH_OFFSET UNITYSDK_OFFSET(0xFF8C890)
#define BLPJDIHECEG_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0xFF8CD50)
#define BLPJDIHECEG_PLAEHGJOHCA_OFFSET UNITYSDK_OFFSET(0xFF8CBE0)
#define BLPJDIHECEG__CTOR_OFFSET UNITYSDK_OFFSET(0xFF8B750)

inline static constexpr unsigned int BLPJDIHECEG_TypeDefinitionIndex = 90688;

class BLPJDIHECEG : public ::System::Object
{
public:
	::MoleMole::UIInLevelExQteFeverV3ChildWindowController* NDNMJGKBDAK; // 0x10
	::KPJAJIJHHIL* HDMIJOJOHBP; // 0x18
	::ODBFJKANCBI* JAHCOBHPIEE; // 0x20
	::System::Single NPEDGEFBPJA; // 0x28
	::System::Int32 PAGFJCAKJNE; // 0x2C
	::System::Single BNBOMCPLBLF; // 0x30
	::System::Int32 GPIKDFGPMBD; // 0x34
	::System::UInt32 IHONEOGNLGH; // 0x38
	::System::Boolean NMFCPLDKKAF; // 0x3C
	::System::Byte _padding0[0x3];
	::MoleMole::Battle::InspireZoneOperationType LGEDBJJBHEF; // 0x40

	::System::Void _ctor(::MoleMole::UIInLevelExQteFeverV3ChildWindowController* DALMDJJEOEM, ::System::UInt32 BDHOILPIGKB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelExQteFeverV3ChildWindowController*, ::System::UInt32))((::PBYTE)hIl2Cpp + BLPJDIHECEG__CTOR_OFFSET))(this, DALMDJJEOEM, BDHOILPIGKB);
	}

	static ::System::String* IKGNOPHGADG(::System::Single EGEGIMGMJHN)
	{
		return ((::System::String*(*)(::System::Single))((::PBYTE)hIl2Cpp + BLPJDIHECEG_IKGNOPHGADG_OFFSET))(EGEGIMGMJHN);
	}

	::System::Void KMKHNLDGHGK(::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BLPJDIHECEG_KMKHNLDGHGK_OFFSET))(this, NPPMJEIPMFC);
	}

	::System::Void OCPIPIJCOEO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPJDIHECEG_OCPIPIJCOEO_OFFSET))(this);
	}

	::System::Void GPGMCIMBLMG(::System::Boolean NPPMJEIPMFC, ::System::Boolean OCKDHKLMPDH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BLPJDIHECEG_GPGMCIMBLMG_OFFSET))(this, NPPMJEIPMFC, OCKDHKLMPDH);
	}

	::System::Void OIBKFFAGPNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPJDIHECEG_OIBKFFAGPNH_OFFSET))(this);
	}

	static ::System::Single GHHDMAJCPHP()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + BLPJDIHECEG_GHHDMAJCPHP_OFFSET))();
	}

	::System::Boolean OBDPNKKBMFI(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + BLPJDIHECEG_OBDPNKKBMFI_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Boolean LFKAGJMFMEJ(::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BLPJDIHECEG_LFKAGJMFMEJ_OFFSET))(this, NPPMJEIPMFC);
	}

	::System::Void PLAEHGJOHCA(::System::Int32 MAAAHIIMIIO, ::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BLPJDIHECEG_PLAEHGJOHCA_OFFSET))(this, MAAAHIIMIIO, NPPMJEIPMFC);
	}

	::System::Void OKJCHFGIKBH(::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BLPJDIHECEG_OKJCHFGIKBH_OFFSET))(this, NPPMJEIPMFC);
	}
};
