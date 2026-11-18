#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBHPDPBIGPK;
class MKFNBHDICNJ;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MKFNBHDICNJ_BKNBLIPLOAO_AGCOCFFELKM_OFFSET UNITYSDK_OFFSET(0x14DEF1F0)
#define MKFNBHDICNJ_BKNBLIPLOAO_LIECGLFBNAJ_OFFSET UNITYSDK_OFFSET(0x14DEF2D0)
#define MKFNBHDICNJ_BKNBLIPLOAO__CTOR_OFFSET UNITYSDK_OFFSET(0x14DEF1E0)

inline static constexpr unsigned int MKFNBHDICNJ_BKNBLIPLOAO_TypeDefinitionIndex = 61401;

class MKFNBHDICNJ_BKNBLIPLOAO : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x18
	::System::Action_1<::System::Collections::Generic::List_1<::FBHPDPBIGPK*>*>* DLMJCFBENGB; // 0x20
	::System::UInt32 FJLIILLCBCE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_BKNBLIPLOAO__CTOR_OFFSET))(this);
	}

	::System::Void AGCOCFFELKM(::System::Collections::Generic::List_1<::FBHPDPBIGPK*>* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FBHPDPBIGPK*>*))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_BKNBLIPLOAO_AGCOCFFELKM_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void LIECGLFBNAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_BKNBLIPLOAO_LIECGLFBNAJ_OFFSET))(this);
	}
};
