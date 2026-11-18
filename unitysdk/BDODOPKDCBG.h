#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KFEBGLHBNOE;
class MAJDEJFBDCI;
class OKHHAELBFPC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BDODOPKDCBG_BKEEELNCDGN_OFFSET UNITYSDK_OFFSET(0x18667430)
#define BDODOPKDCBG_BOMIPILDOLB_OFFSET UNITYSDK_OFFSET(0x186672B0)
#define BDODOPKDCBG_HENCKFGFLCI_OFFSET UNITYSDK_OFFSET(0x18667470)
#define BDODOPKDCBG_NAFOMCPANFB_OFFSET UNITYSDK_OFFSET(0x186673F0)
#define BDODOPKDCBG__CTOR_OFFSET UNITYSDK_OFFSET(0x18667230)

inline static constexpr unsigned int BDODOPKDCBG_TypeDefinitionIndex = 70598;

class BDODOPKDCBG : public ::System::Object
{
public:
	::OKHHAELBFPC* DIPLHPDNDPG; // 0x10
	::System::Collections::Generic::List_1<::OKHHAELBFPC*>* LHNMIGOFLOK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDODOPKDCBG__CTOR_OFFSET))(this);
	}

	::System::Void BOMIPILDOLB(::KFEBGLHBNOE* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::KFEBGLHBNOE*))((::PBYTE)hIl2Cpp + BDODOPKDCBG_BOMIPILDOLB_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Collections::Generic::List_1<::OKHHAELBFPC*>* NAFOMCPANFB()
	{
		return ((::System::Collections::Generic::List_1<::OKHHAELBFPC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDODOPKDCBG_NAFOMCPANFB_OFFSET))(this);
	}

	::OKHHAELBFPC* BKEEELNCDGN()
	{
		return ((::OKHHAELBFPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDODOPKDCBG_BKEEELNCDGN_OFFSET))(this);
	}

	::System::Void HENCKFGFLCI(::MAJDEJFBDCI* MECOFDHMKEB)
	{
		return ((::System::Void(*)(::PVOID, ::MAJDEJFBDCI*))((::PBYTE)hIl2Cpp + BDODOPKDCBG_HENCKFGFLCI_OFFSET))(this, MECOFDHMKEB);
	}
};
