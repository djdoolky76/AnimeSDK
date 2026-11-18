#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDKKJDIHMPJ.h"
#include "unitysdk/GEBBPMGAJNH.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }

#define KCHNEANHMKA_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1860A260)
#define KCHNEANHMKA_DDBPHKOFLCN_OFFSET UNITYSDK_OFFSET(0x1860A020)
#define KCHNEANHMKA_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x18609D30)
#define KCHNEANHMKA_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x18609EF0)
#define KCHNEANHMKA_LJJAFPFDMPP_OFFSET UNITYSDK_OFFSET(0x18609E60)
#define KCHNEANHMKA_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x1860A1D0)
#define KCHNEANHMKA_OFMKKOGGMPK_OFFSET UNITYSDK_OFFSET(0x18609F30)
#define KCHNEANHMKA_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x1860A0B0)
#define KCHNEANHMKA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18609F80)
#define KCHNEANHMKA_PNAILBHCMDO_OFFSET UNITYSDK_OFFSET(0x1860A140)
#define KCHNEANHMKA__CTOR_OFFSET UNITYSDK_OFFSET(0x1860A010)

inline static constexpr unsigned int KCHNEANHMKA_TypeDefinitionIndex = 42702;

class KCHNEANHMKA : public ::GEBBPMGAJNH
{
public:
	::System::Action_1<::UnityEngine::Object*>* EACOAJBCFGE; // 0x10
	::System::String* DANPBAKPILL; // 0x18
	::System::Action_2<::System::String*, ::System::Action_1<::UnityEngine::Object*>*>* LADKGCGJBBD; // 0x20
	::System::Boolean NPFIONPDFED; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCHNEANHMKA__CTOR_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCHNEANHMKA_EDEFLFIKNFK_OFFSET))(this);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCHNEANHMKA_HLJPINPGIJN_OFFSET))(this);
	}

	::EDKKJDIHMPJ OFMKKOGGMPK()
	{
		return ((::EDKKJDIHMPJ(*)(::PVOID))((::PBYTE)hIl2Cpp + KCHNEANHMKA_OFMKKOGGMPK_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCHNEANHMKA_PHOADBJGFBE_OFFSET))(this);
	}

	::EDKKJDIHMPJ DDBPHKOFLCN()
	{
		return ((::EDKKJDIHMPJ(*)(::PVOID))((::PBYTE)hIl2Cpp + KCHNEANHMKA_DDBPHKOFLCN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCHNEANHMKA_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Boolean PNAILBHCMDO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCHNEANHMKA_PNAILBHCMDO_OFFSET))(this);
	}

	::System::Void LJJAFPFDMPP(::UnityEngine::Object* JBNBMFNNELP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + KCHNEANHMKA_LJJAFPFDMPP_OFFSET))(this, JBNBMFNNELP);
	}

	::System::Void NIGDIMFIAEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCHNEANHMKA_NIGDIMFIAEJ_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::String* DANPBAKPILL)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KCHNEANHMKA_BBOMJDBNHIC_OFFSET))(this, DANPBAKPILL);
	}
};
