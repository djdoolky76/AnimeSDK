#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define APOLLOBLGOE_ACOEONABOJL_OFFSET UNITYSDK_OFFSET(0x143BDE90)
#define APOLLOBLGOE_BAOINHBDGNC_OFFSET UNITYSDK_OFFSET(0x143BDEE0)
#define APOLLOBLGOE_CPMMMCOFALP_OFFSET UNITYSDK_OFFSET(0x143BDF90)
#define APOLLOBLGOE_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x143BDDA0)
#define APOLLOBLGOE_GPEKEFPKMBA_OFFSET UNITYSDK_OFFSET(0x143BE0F0)
#define APOLLOBLGOE_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x143BDEA0)
#define APOLLOBLGOE_NGMLLEJADOG_OFFSET UNITYSDK_OFFSET(0x143BE040)
#define APOLLOBLGOE_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x143BDE40)
#define APOLLOBLGOE_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x143BE1B0)
#define APOLLOBLGOE_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x143BDDF0)
#define APOLLOBLGOE__CCTOR_OFFSET UNITYSDK_OFFSET(0x143BE1A0)
#define APOLLOBLGOE__CTOR_OFFSET UNITYSDK_OFFSET(0x143BDD60)

inline static constexpr unsigned int APOLLOBLGOE_TypeDefinitionIndex = 51963;

class APOLLOBLGOE : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_DHLFJDCJBMM()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(APOLLOBLGOE_TypeDefinitionIndex)->GetStaticField(0x12BD0);
	}
	::System::Action* BBPDGAJIBKC; // 0x10
	::System::Action_1<::System::Exception*>* PDNCAALIPJN; // 0x18
	::System::Action* JABMCGBGLML; // 0x20
	::System::Action* OLEPBEPIGHM; // 0x28
	::System::Int32 _JFPALPENGNB_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APOLLOBLGOE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APOLLOBLGOE__CCTOR_OFFSET))();
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APOLLOBLGOE_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APOLLOBLGOE_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APOLLOBLGOE_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Int32 ACOEONABOJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APOLLOBLGOE_ACOEONABOJL_OFFSET))(this);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APOLLOBLGOE_IAHPLEHJFGB_OFFSET))(this);
	}

	::System::Void BAOINHBDGNC(::System::Action* OAPJBPJOHMA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + APOLLOBLGOE_BAOINHBDGNC_OFFSET))(this, OAPJBPJOHMA);
	}

	::System::Void CPMMMCOFALP(::System::Action* DLOHHEOKBIN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + APOLLOBLGOE_CPMMMCOFALP_OFFSET))(this, DLOHHEOKBIN);
	}

	::System::Void NGMLLEJADOG(::System::Action* BFIJFAPFJBJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + APOLLOBLGOE_NGMLLEJADOG_OFFSET))(this, BFIJFAPFJBJ);
	}

	::System::Void GPEKEFPKMBA(::System::Action_1<::System::Exception*>* NPFDCEGKFJE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + APOLLOBLGOE_GPEKEFPKMBA_OFFSET))(this, NPFDCEGKFJE);
	}

	::System::Void OKLLFEIJKHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APOLLOBLGOE_OKLLFEIJKHN_OFFSET))(this);
	}
};
