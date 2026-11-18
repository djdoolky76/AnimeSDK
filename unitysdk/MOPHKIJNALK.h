#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralConsoleExistGoBtnWidgetController; }
namespace System { class String; }

#define MOPHKIJNALK_CKLBAKCCEPJ_OFFSET UNITYSDK_OFFSET(0x11F689E0)
#define MOPHKIJNALK_COPONMPMPIM_OFFSET UNITYSDK_OFFSET(0x11F68870)
#define MOPHKIJNALK_ENANPJJCIGJ_OFFSET UNITYSDK_OFFSET(0x11F68CB0)
#define MOPHKIJNALK_FFBCNKDLBGP_OFFSET UNITYSDK_OFFSET(0x11F68A70)
#define MOPHKIJNALK_FFPKNGNHEHD_OFFSET UNITYSDK_OFFSET(0x11F68730)

inline static constexpr unsigned int MOPHKIJNALK_TypeDefinitionIndex = 45192;

class MOPHKIJNALK : public ::System::Object
{
public:
	// static const ::System::String* GPLAKONPKKD; // 0x0
	// static const ::System::String* DIBAGLFFIBK; // 0x0
	// static const ::System::String* DCNHCMBHOFP; // 0x0
	// static const ::System::String* BBCEEJNPBOK; // 0x0
	// static const ::System::Int64 HOGLLEGLDGA = 0x15180; // 0x0

	static ::System::Boolean FFPKNGNHEHD(::System::String* NBPKLMAFEGH, ::System::Boolean& KOOPHNDHGNG, ::System::Int32& CAOLFFIGPDA)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Boolean&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOPHKIJNALK_FFPKNGNHEHD_OFFSET))(NBPKLMAFEGH, KOOPHNDHGNG, CAOLFFIGPDA);
	}

	static ::System::Boolean COPONMPMPIM(::System::String* NBPKLMAFEGH, ::System::Boolean& JCOMJKACIOJ, ::System::Boolean& DAOHNOEFIOI)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOPHKIJNALK_COPONMPMPIM_OFFSET))(NBPKLMAFEGH, JCOMJKACIOJ, DAOHNOEFIOI);
	}

	static ::System::Boolean CKLBAKCCEPJ(::System::Int64& GFAJGMONNPM)
	{
		return ((::System::Boolean(*)(::System::Int64&))((::PBYTE)hIl2Cpp + MOPHKIJNALK_CKLBAKCCEPJ_OFFSET))(GFAJGMONNPM);
	}

	static ::System::Boolean FFBCNKDLBGP(::MoleMole::UIGeneralConsoleExistGoBtnWidgetController* MKIJFELCFOC, ::System::String* NBPKLMAFEGH, ::System::Boolean& JFHBAJBOICG)
	{
		return ((::System::Boolean(*)(::MoleMole::UIGeneralConsoleExistGoBtnWidgetController*, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOPHKIJNALK_FFBCNKDLBGP_OFFSET))(MKIJFELCFOC, NBPKLMAFEGH, JFHBAJBOICG);
	}

	static ::System::Boolean ENANPJJCIGJ(::System::Int32& ODEOJMPAELC)
	{
		return ((::System::Boolean(*)(::System::Int32&))((::PBYTE)hIl2Cpp + MOPHKIJNALK_ENANPJJCIGJ_OFFSET))(ODEOJMPAELC);
	}
};
