#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WorkNodeState.h"
#include "unitysdk/System/Object.h"
class JDKNLNLGODN;
class PALANLLDNLP;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JDKNLNLGODN_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0x165D5270)
#define JDKNLNLGODN_BNDCKKCCAGG_OFFSET UNITYSDK_OFFSET(0x165D49D0)
#define JDKNLNLGODN_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0x165D4890)
#define JDKNLNLGODN_CTOR_OFFSET UNITYSDK_OFFSET(0x165D5280)
#define JDKNLNLGODN_EJDGOHKEJJD_OFFSET UNITYSDK_OFFSET(0x165D3E10)
#define JDKNLNLGODN_EOJKNKMNGJB_OFFSET UNITYSDK_OFFSET(0x165D4EF0)
#define JDKNLNLGODN_FEBHPNNPELD_OFFSET UNITYSDK_OFFSET(0x165D4160)
#define JDKNLNLGODN_GJENBIOCJII_OFFSET UNITYSDK_OFFSET(0x165D51E0)
#define JDKNLNLGODN_JBOAFILMPJJ_OFFSET UNITYSDK_OFFSET(0x165D5200)
#define JDKNLNLGODN_JGFONFFOKFG_OFFSET UNITYSDK_OFFSET(0x165D51F0)
#define JDKNLNLGODN_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0x165D3E70)
#define JDKNLNLGODN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x165D4C10)
#define JDKNLNLGODN_JMKLBMEHDCG_OFFSET UNITYSDK_OFFSET(0x165D4F90)
#define JDKNLNLGODN_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0x165D3FB0)
#define JDKNLNLGODN_KJMCBCCDOFM_OFFSET UNITYSDK_OFFSET(0x165D4F30)
#define JDKNLNLGODN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x165D3CC0)
#define JDKNLNLGODN_LCIDMLKJENK_OFFSET UNITYSDK_OFFSET(0x165D4EB0)
#define JDKNLNLGODN_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x165D51D0)
#define JDKNLNLGODN_NAAIPKKCMML_OFFSET UNITYSDK_OFFSET(0x165D4630)
#define JDKNLNLGODN_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x165D4280)
#define JDKNLNLGODN_ONINIT_OFFSET UNITYSDK_OFFSET(0x165D4DF0)
#define JDKNLNLGODN_ONSTARTLOADING_OFFSET UNITYSDK_OFFSET(0x165D4E70)
#define JDKNLNLGODN_ONUNINIT_OFFSET UNITYSDK_OFFSET(0x165D4E30)

	class JDKNLNLGODN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::PALANLLDNLP*>* CINPBPLPCAD; // 0x10
		::System::String* GIDAEFPOGHI; // 0x18
		::System::Action* DPANHIICMLD; // 0x20
		::System::Action* HKHDLACNBOK; // 0x28
		::JDKNLNLGODN* CMJJLIFIEJH; // 0x30
		::System::Action* DHEEKNDLMPN; // 0x38
		::System::Object* HBAEKBMPGFK; // 0x40
		::RPG::Client::WorkNodeState DLNIGFGLPLJ; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKNLNLGODN_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::JDKNLNLGODN* a1, ::System::Object* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::JDKNLNLGODN*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + JDKNLNLGODN_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKNLNLGODN_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void FEBHPNNPELD(::PALANLLDNLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PALANLLDNLP*))((::PBYTE)hIl2Cpp + JDKNLNLGODN_FEBHPNNPELD_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKNLNLGODN_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void CIHFGJDCHIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKNLNLGODN_CIHFGJDCHIA_OFFSET))(this);
		}

		::System::Void KAOLPGACCID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKNLNLGODN_KAOLPGACCID_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JDKNLNLGODN_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKNLNLGODN_ONINIT_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKNLNLGODN_ONUNINIT_OFFSET))(this);
		}

		::System::Void OnStartLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKNLNLGODN_ONSTARTLOADING_OFFSET))(this);
		}

		::System::Void LCIDMLKJENK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKNLNLGODN_LCIDMLKJENK_OFFSET))(this);
		}

		::System::Void EOJKNKMNGJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKNLNLGODN_EOJKNKMNGJB_OFFSET))(this);
		}

		::System::Void KJMCBCCDOFM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JDKNLNLGODN_KJMCBCCDOFM_OFFSET))(this, a1);
		}

		::System::Void JMKLBMEHDCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKNLNLGODN_JMKLBMEHDCG_OFFSET))(this);
		}

		::System::Void BNDCKKCCAGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKNLNLGODN_BNDCKKCCAGG_OFFSET))(this);
		}

		::System::Boolean NAAIPKKCMML()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKNLNLGODN_NAAIPKKCMML_OFFSET))(this);
		}

		::System::Void EJDGOHKEJJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKNLNLGODN_EJDGOHKEJJD_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKNLNLGODN_MLMGEFIOION_OFFSET))(this);
		}

		::System::Object* GJENBIOCJII()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKNLNLGODN_GJENBIOCJII_OFFSET))(this);
		}

		::JDKNLNLGODN* JGFONFFOKFG()
		{
			return ((::JDKNLNLGODN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKNLNLGODN_JGFONFFOKFG_OFFSET))(this);
		}

		::JDKNLNLGODN* JBOAFILMPJJ()
		{
			return ((::JDKNLNLGODN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKNLNLGODN_JBOAFILMPJJ_OFFSET))(this);
		}

		::RPG::Client::WorkNodeState BGDKFHEBDFJ()
		{
			return ((::RPG::Client::WorkNodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKNLNLGODN_BGDKFHEBDFJ_OFFSET))(this);
		}

	};
