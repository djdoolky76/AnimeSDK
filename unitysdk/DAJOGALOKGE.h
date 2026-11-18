#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGFPBHGPFFM;
namespace MoleMole { class UIBaseController; }
namespace System { class Action; }

#define DAJOGALOKGE_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x13E26DB0)
#define DAJOGALOKGE_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x13E26D50)
#define DAJOGALOKGE_JPLKKFMBIBP_OFFSET UNITYSDK_OFFSET(0x13E27A00)
#define DAJOGALOKGE_LJAPJFDPIKF_OFFSET UNITYSDK_OFFSET(0x13E27BC0)
#define DAJOGALOKGE__CTOR_OFFSET UNITYSDK_OFFSET(0x13E26C90)

inline static constexpr unsigned int DAJOGALOKGE_TypeDefinitionIndex = 85439;

class DAJOGALOKGE : public ::System::Object
{
public:
	::HGFPBHGPFFM* KCKNMNJHPNE; // 0x10

	::System::Void _ctor(::HGFPBHGPFFM* KAJGFLDKEFB)
	{
		return ((::System::Void(*)(::PVOID, ::HGFPBHGPFFM*))((::PBYTE)hIl2Cpp + DAJOGALOKGE__CTOR_OFFSET))(this, KAJGFLDKEFB);
	}

	::System::Void HFBPONNNLBA(::System::Boolean IOKNPLAMIKB, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + DAJOGALOKGE_HFBPONNNLBA_OFFSET))(this, IOKNPLAMIKB, IBNICCGMILF);
	}

	::System::Void GLEJMKLOMBP(::System::Boolean IOKNPLAMIKB, ::System::Action* IBNICCGMILF, ::System::Boolean AMGAAHMANDM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + DAJOGALOKGE_GLEJMKLOMBP_OFFSET))(this, IOKNPLAMIKB, IBNICCGMILF, AMGAAHMANDM);
	}

	::System::Void LJAPJFDPIKF(::System::Boolean IOKNPLAMIKB, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + DAJOGALOKGE_LJAPJFDPIKF_OFFSET))(this, IOKNPLAMIKB, IBNICCGMILF);
	}

	static ::System::Boolean JPLKKFMBIBP(::MoleMole::UIBaseController* NCIMBHDKIJM, ::System::Boolean AMGAAHMANDM)
	{
		return ((::System::Boolean(*)(::MoleMole::UIBaseController*, ::System::Boolean))((::PBYTE)hIl2Cpp + DAJOGALOKGE_JPLKKFMBIBP_OFFSET))(NCIMBHDKIJM, AMGAAHMANDM);
	}
};
