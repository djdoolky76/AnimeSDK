#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"

class AFMMAIKKACF;
class ALGKMLLALFG;
class EHGPNGPADCB;
class LAAEPKNJKHA;
namespace MoleMole { class UIHollowMainPageController; }
namespace System { class String; }

#define EALMKBBKOKE_ABOHCAAFOLD_OFFSET UNITYSDK_OFFSET(0x1062A250)
#define EALMKBBKOKE_GKIADBLIBOD_OFFSET UNITYSDK_OFFSET(0x1062A400)
#define EALMKBBKOKE_GLEJMKLOMBP_OFFSET UNITYSDK_OFFSET(0x10629E60)
#define EALMKBBKOKE_GOKOLBOHHGA_OFFSET UNITYSDK_OFFSET(0x1062A450)
#define EALMKBBKOKE_JJDHHMEFPCB_OFFSET UNITYSDK_OFFSET(0x10629F20)
#define EALMKBBKOKE_KFNLJGLDOAD_OFFSET UNITYSDK_OFFSET(0x1062A4F0)
#define EALMKBBKOKE_LIDIODHDJAF_OFFSET UNITYSDK_OFFSET(0x1062A600)
#define EALMKBBKOKE_LMGELBKMBOM_OFFSET UNITYSDK_OFFSET(0x1062A140)
#define EALMKBBKOKE_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x1062A0F0)
#define EALMKBBKOKE__CTOR_OFFSET UNITYSDK_OFFSET(0x10629DD0)

inline static constexpr unsigned int EALMKBBKOKE_TypeDefinitionIndex = 86580;

class EALMKBBKOKE
{
public:
	::AFMMAIKKACF* AAOCANGHBDG; // 0x30
	::ALGKMLLALFG* BMPFILBMNKJ; // 0x38
	::MoleMole::UIHollowMainPageController* BNGABEMPOMH; // 0x40

	::System::Void _ctor(::EHGPNGPADCB* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::EHGPNGPADCB*))((::PBYTE)hIl2Cpp + EALMKBBKOKE__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void GLEJMKLOMBP(::AFMMAIKKACF* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + EALMKBBKOKE_GLEJMKLOMBP_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void OKLLFEIJKHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EALMKBBKOKE_OKLLFEIJKHN_OFFSET))(this);
	}

	::System::Boolean JJDHHMEFPCB(::AFMMAIKKACF* AAOCANGHBDG, ::LAAEPKNJKHA*& LNPEMMIGEKK)
	{
		return ((::System::Boolean(*)(::PVOID, ::AFMMAIKKACF*, ::LAAEPKNJKHA*&))((::PBYTE)hIl2Cpp + EALMKBBKOKE_JJDHHMEFPCB_OFFSET))(this, AAOCANGHBDG, LNPEMMIGEKK);
	}

	::System::Void GKIADBLIBOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EALMKBBKOKE_GKIADBLIBOD_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Boolean, ::System::String*> GOKOLBOHHGA(::System::String* KDPCIAPDOLK)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::String*>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EALMKBBKOKE_GOKOLBOHHGA_OFFSET))(this, KDPCIAPDOLK);
	}

	::System::Void ABOHCAAFOLD(::System::String* IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EALMKBBKOKE_ABOHCAAFOLD_OFFSET))(this, IGAAKDOIPNN);
	}

	::System::String* KFNLJGLDOAD(::System::Int32 BCLIEKIBGNJ)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EALMKBBKOKE_KFNLJGLDOAD_OFFSET))(this, BCLIEKIBGNJ);
	}

	::System::Void LIDIODHDJAF(::AFMMAIKKACF* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::AFMMAIKKACF*))((::PBYTE)hIl2Cpp + EALMKBBKOKE_LIDIODHDJAF_OFFSET))(this, MIALFKCCCPI);
	}

	::System::String* LMGELBKMBOM(::LAAEPKNJKHA* LNPEMMIGEKK)
	{
		return ((::System::String*(*)(::PVOID, ::LAAEPKNJKHA*))((::PBYTE)hIl2Cpp + EALMKBBKOKE_LMGELBKMBOM_OFFSET))(this, LNPEMMIGEKK);
	}
};
