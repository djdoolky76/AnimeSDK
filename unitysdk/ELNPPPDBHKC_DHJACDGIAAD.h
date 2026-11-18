#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EFNFAOBLNAE;
class ELNPPPDBHKC;
namespace System { class Action; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define ELNPPPDBHKC_DHJACDGIAAD_BKCOKIDDAML_OFFSET UNITYSDK_OFFSET(0x1417A0E0)
#define ELNPPPDBHKC_DHJACDGIAAD_BNPNDBGJBHJ_OFFSET UNITYSDK_OFFSET(0x1417A270)
#define ELNPPPDBHKC_DHJACDGIAAD_IHLEDPCIFII_OFFSET UNITYSDK_OFFSET(0x1417A2A0)
#define ELNPPPDBHKC_DHJACDGIAAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1417A0D0)

inline static constexpr unsigned int ELNPPPDBHKC_DHJACDGIAAD_TypeDefinitionIndex = 48242;

class ELNPPPDBHKC_DHJACDGIAAD : public ::System::Object
{
public:
	::System::Action* KAKAEMACNPB; // 0x10
	::ELNPPPDBHKC* AFKKKJKJEIC; // 0x18
	::System::Action_1<::System::Exception*>* FFMGICPLKFB; // 0x20
	::Il2CppArray<::System::Single>* PMGFIHJAJHL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_DHJACDGIAAD__CTOR_OFFSET))(this);
	}

	::System::Void BKCOKIDDAML(::EFNFAOBLNAE* LGBLDAMKBPM, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::EFNFAOBLNAE*, ::System::Int32))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_DHJACDGIAAD_BKCOKIDDAML_OFFSET))(this, LGBLDAMKBPM, ABHBKFJKINO);
	}

	::System::Void BNPNDBGJBHJ(::System::Exception* KMDHKNFMCAE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_DHJACDGIAAD_BNPNDBGJBHJ_OFFSET))(this, KMDHKNFMCAE);
	}

	::System::Void IHLEDPCIFII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNPPPDBHKC_DHJACDGIAAD_IHLEDPCIFII_OFFSET))(this);
	}
};
