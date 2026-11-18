#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FOLOGHLENFB;
namespace MoleMole { class UIGeneralRechargePopWindowContext; }

#define GHFDDIKCLEC_GKDAFONGFPP_OFFSET UNITYSDK_OFFSET(0x11DAA960)
#define GHFDDIKCLEC_HPBAMGLDAED_OFFSET UNITYSDK_OFFSET(0x11DAAAE0)
#define GHFDDIKCLEC_JOKBFJNEIFL_OFFSET UNITYSDK_OFFSET(0x11DAA9E0)
#define GHFDDIKCLEC_OPIINFADMIC_OFFSET UNITYSDK_OFFSET(0x11DAA900)
#define GHFDDIKCLEC__CTOR_OFFSET UNITYSDK_OFFSET(0x11DAA8F0)

inline static constexpr unsigned int GHFDDIKCLEC_TypeDefinitionIndex = 78997;

class GHFDDIKCLEC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFDDIKCLEC__CTOR_OFFSET))(this);
	}

	static ::System::Int32 OPIINFADMIC(::System::Int32 EKBGJNECOFD)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + GHFDDIKCLEC_OPIINFADMIC_OFFSET))(EKBGJNECOFD);
	}

	static ::System::UInt32 GKDAFONGFPP(::MoleMole::UIGeneralRechargePopWindowContext* AAOCANGHBDG, ::System::Int32 EKBGJNECOFD, ::System::UInt32 JHFKDGBCOBA)
	{
		return ((::System::UInt32(*)(::MoleMole::UIGeneralRechargePopWindowContext*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + GHFDDIKCLEC_GKDAFONGFPP_OFFSET))(AAOCANGHBDG, EKBGJNECOFD, JHFKDGBCOBA);
	}

	static ::FOLOGHLENFB* HPBAMGLDAED(::System::Int32 OIKFFGKDHME)
	{
		return ((::FOLOGHLENFB*(*)(::System::Int32))((::PBYTE)hIl2Cpp + GHFDDIKCLEC_HPBAMGLDAED_OFFSET))(OIKFFGKDHME);
	}

	static ::System::UInt32 JOKBFJNEIFL(::MoleMole::UIGeneralRechargePopWindowContext* AAOCANGHBDG, ::System::Int32 EKBGJNECOFD)
	{
		return ((::System::UInt32(*)(::MoleMole::UIGeneralRechargePopWindowContext*, ::System::Int32))((::PBYTE)hIl2Cpp + GHFDDIKCLEC_JOKBFJNEIFL_OFFSET))(AAOCANGHBDG, EKBGJNECOFD);
	}
};
