#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleModeViewState.h"
#include "unitysdk/System/Object.h"
class ADGFFEDNPPO;
namespace System { class Action; }
namespace System { class Object; }

#define JHIDGDHOJEF_AHGNCDFAFBM_OFFSET UNITYSDK_OFFSET(0xB1B4C10)
#define JHIDGDHOJEF_BFLENEMBIBM_OFFSET UNITYSDK_OFFSET(0xB1B44A0)
#define JHIDGDHOJEF_BNCDOBFLNNE_OFFSET UNITYSDK_OFFSET(0xB1B4640)
#define JHIDGDHOJEF_CTOR_OFFSET UNITYSDK_OFFSET(0xB1B4C90)
#define JHIDGDHOJEF_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xB1B4AB0)
#define JHIDGDHOJEF_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xB1B4A10)
#define JHIDGDHOJEF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1B4450)
#define JHIDGDHOJEF_FIHDJNEGBLD_OFFSET UNITYSDK_OFFSET(0xB1B4A70)
#define JHIDGDHOJEF_HHPNEJMBACH_OFFSET UNITYSDK_OFFSET(0xB1B4C50)
#define JHIDGDHOJEF_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0xB1B46A0)
#define JHIDGDHOJEF_HNMIMHNPHPK_OFFSET UNITYSDK_OFFSET(0xB1B4390)
#define JHIDGDHOJEF_ILEGLKEBDGJ_OFFSET UNITYSDK_OFFSET(0xB1B45C0)
#define JHIDGDHOJEF_JFMHLDKBJIG_OFFSET UNITYSDK_OFFSET(0xB1B4B80)
#define JHIDGDHOJEF_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xB1B4030)
#define JHIDGDHOJEF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB1B49B0)
#define JHIDGDHOJEF_KMEPEKPAPPC_OFFSET UNITYSDK_OFFSET(0xB1B3D90)
#define JHIDGDHOJEF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB1B3E50)
#define JHIDGDHOJEF_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0xB1B4AF0)
#define JHIDGDHOJEF_OALEOPGMOFM_OFFSET UNITYSDK_OFFSET(0xB1B4830)
#define JHIDGDHOJEF_PCHDHLPOKEO_OFFSET UNITYSDK_OFFSET(0xB1B4BC0)
#define JHIDGDHOJEF_PEECNCABGFD_OFFSET UNITYSDK_OFFSET(0xB1B4240)
#define JHIDGDHOJEF_PHHAABHKPMN_OFFSET UNITYSDK_OFFSET(0xB1B4890)
#define JHIDGDHOJEF_PMLLOFFOEIK_OFFSET UNITYSDK_OFFSET(0xB1B4B30)

	class JHIDGDHOJEF : public ::System::Object
	{
	public:
		::System::Action* NBHFJPINFJG; // 0x10
		::System::Object* MMHPIKHEFCI; // 0x18
		::ADGFFEDNPPO* EBBDBBNGHBH; // 0x20
		::System::Action* DJGECIMJPPP; // 0x28
		::RPG::Client::BattleModeViewState DLNIGFGLPLJ; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDGDHOJEF_CTOR_OFFSET))(this);
		}

		::System::Void KMEPEKPAPPC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JHIDGDHOJEF_KMEPEKPAPPC_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::ADGFFEDNPPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ADGFFEDNPPO*))((::PBYTE)hIl2Cpp + JHIDGDHOJEF_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDGDHOJEF_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDGDHOJEF_DISPOSE_OFFSET))(this);
		}

		::System::Void BFLENEMBIBM(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JHIDGDHOJEF_BFLENEMBIBM_OFFSET))(this, a1);
		}

		::System::Void ILEGLKEBDGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDGDHOJEF_ILEGLKEBDGJ_OFFSET))(this);
		}

		::System::Void HNMIMHNPHPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDGDHOJEF_HNMIMHNPHPK_OFFSET))(this);
		}

		::System::Void HKEPJLDBGIG(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JHIDGDHOJEF_HKEPJLDBGIG_OFFSET))(this, a1);
		}

		::System::Void PHHAABHKPMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDGDHOJEF_PHHAABHKPMN_OFFSET))(this);
		}

		::System::Void PEECNCABGFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDGDHOJEF_PEECNCABGFD_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JHIDGDHOJEF_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JHIDGDHOJEF_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void FIHDJNEGBLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDGDHOJEF_FIHDJNEGBLD_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDGDHOJEF_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDGDHOJEF_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void PMLLOFFOEIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDGDHOJEF_PMLLOFFOEIK_OFFSET))(this);
		}

		::System::Void JFMHLDKBJIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDGDHOJEF_JFMHLDKBJIG_OFFSET))(this);
		}

		::System::Void PCHDHLPOKEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDGDHOJEF_PCHDHLPOKEO_OFFSET))(this);
		}

		::System::Void AHGNCDFAFBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDGDHOJEF_AHGNCDFAFBM_OFFSET))(this);
		}

		::System::Void HHPNEJMBACH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDGDHOJEF_HHPNEJMBACH_OFFSET))(this);
		}

		::System::Void BNCDOBFLNNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDGDHOJEF_BNCDOBFLNNE_OFFSET))(this);
		}

		::System::Void OALEOPGMOFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHIDGDHOJEF_OALEOPGMOFM_OFFSET))(this);
		}

	};
