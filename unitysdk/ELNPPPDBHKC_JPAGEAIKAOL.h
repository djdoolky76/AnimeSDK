#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EFNFAOBLNAE;
class ELNPPPDBHKC;
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define ELNPPPDBHKC_JPAGEAIKAOL_BFENNIDGMFI_OFFSET UNITYSDK_OFFSET(0x1615FB90)
#define ELNPPPDBHKC_JPAGEAIKAOL_CMPEKDHCCLJ_OFFSET UNITYSDK_OFFSET(0x1615FA10)
#define ELNPPPDBHKC_JPAGEAIKAOL_EIKNMLHBCCF_OFFSET UNITYSDK_OFFSET(0x1615FBD0)
#define ELNPPPDBHKC_JPAGEAIKAOL_HELEGCOJMLH_OFFSET UNITYSDK_OFFSET(0x1615FBB0)
#define ELNPPPDBHKC_JPAGEAIKAOL_PGKPBNAIHLF_OFFSET UNITYSDK_OFFSET(0x1615F9F0)
#define ELNPPPDBHKC_JPAGEAIKAOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1615F9E0)

inline static constexpr unsigned int ELNPPPDBHKC_JPAGEAIKAOL_TypeDefinitionIndex = 48229;

class ELNPPPDBHKC_JPAGEAIKAOL : public ::System::Object
{
public:
	::System::Action* KAKAEMACNPB; // 0x10
	::System::Action_1<::System::Exception*>* OLDCEOGKOAE; // 0x18
	::ELNPPPDBHKC* AFKKKJKJEIC; // 0x20
	::System::Action_1<::System::Exception*>* COKHBPKODGI; // 0x28
	::System::Func_1<::EFNFAOBLNAE*>* HKJODKBNEJE; // 0x30
	::System::Action_1<::System::Single>* FFMGICPLKFB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_JPAGEAIKAOL__CTOR_OFFSET))(this);
	}

	::System::Void PGKPBNAIHLF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_JPAGEAIKAOL_PGKPBNAIHLF_OFFSET))(this);
	}

	::System::Void CMPEKDHCCLJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_JPAGEAIKAOL_CMPEKDHCCLJ_OFFSET))(this);
	}

	::System::Void BFENNIDGMFI(::System::Single PMGFIHJAJHL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_JPAGEAIKAOL_BFENNIDGMFI_OFFSET))(this, PMGFIHJAJHL);
	}

	::System::Void HELEGCOJMLH(::System::Exception* KMDHKNFMCAE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_JPAGEAIKAOL_HELEGCOJMLH_OFFSET))(this, KMDHKNFMCAE);
	}

	::System::Void EIKNMLHBCCF(::System::Exception* KMDHKNFMCAE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_JPAGEAIKAOL_EIKNMLHBCCF_OFFSET))(this, KMDHKNFMCAE);
	}
};
