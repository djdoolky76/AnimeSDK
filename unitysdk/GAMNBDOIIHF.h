#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"
#include "unitysdk/UnityEngine/Vector2.h"

class EDLAOJHICOE;
class NHPPHFMEHCK;
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GAMNBDOIIHF_AALPGAGJNNO_OFFSET UNITYSDK_OFFSET(0x116D9980)
#define GAMNBDOIIHF_AELHIFKGMDG_OFFSET UNITYSDK_OFFSET(0x116D9C30)
#define GAMNBDOIIHF_AIOJMILLHON_OFFSET UNITYSDK_OFFSET(0x116D9EC0)
#define GAMNBDOIIHF_CFGOPKLDNGL_OFFSET UNITYSDK_OFFSET(0x116D9710)
#define GAMNBDOIIHF_CINANGNBMFM_OFFSET UNITYSDK_OFFSET(0x116DAD40)
#define GAMNBDOIIHF_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x116D9E30)
#define GAMNBDOIIHF_DLAOMLPPHEK_OFFSET UNITYSDK_OFFSET(0x116DA8B0)
#define GAMNBDOIIHF_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0x116D9A10)
#define GAMNBDOIIHF_EEIPFLGIFNC_OFFSET UNITYSDK_OFFSET(0x116D9C90)
#define GAMNBDOIIHF_IDADCOECIGG_OFFSET UNITYSDK_OFFSET(0x116D9610)
#define GAMNBDOIIHF_KKPJPEDMICC_OFFSET UNITYSDK_OFFSET(0x116D8C60)
#define GAMNBDOIIHF_MGFEKLJKBFD_OFFSET UNITYSDK_OFFSET(0x116DAF60)
#define GAMNBDOIIHF_NJKEGKKECMB_OFFSET UNITYSDK_OFFSET(0x116DAE80)
#define GAMNBDOIIHF_NNDPHMPOCDC_OFFSET UNITYSDK_OFFSET(0x116D9F70)
#define GAMNBDOIIHF_NNMABKBGOOD_OFFSET UNITYSDK_OFFSET(0x116DAED0)
#define GAMNBDOIIHF_OGAGPKMKOFF_OFFSET UNITYSDK_OFFSET(0x116DAA90)
#define GAMNBDOIIHF_OMBGLCNHDLG_OFFSET UNITYSDK_OFFSET(0x116D97D0)
#define GAMNBDOIIHF_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x116D90B0)
#define GAMNBDOIIHF_ONSTART_OFFSET UNITYSDK_OFFSET(0x116D8820)
#define GAMNBDOIIHF_PDKELHHHPGO_OFFSET UNITYSDK_OFFSET(0x116DB5A0)
#define GAMNBDOIIHF_PHHPJJKEIFB_OFFSET UNITYSDK_OFFSET(0x116D9AA0)
#define GAMNBDOIIHF__CTOR_OFFSET UNITYSDK_OFFSET(0x116D94E0)

inline static constexpr unsigned int GAMNBDOIIHF_TypeDefinitionIndex = 87420;

class GAMNBDOIIHF : public ::JGELKBLKFHE
{
public:
	static ::NHPPHFMEHCK** StaticGet_DDOCNFBLPLF()
	{
		return (::NHPPHFMEHCK**)Il2CppClass::FromTypeDefinitionIndex(GAMNBDOIIHF_TypeDefinitionIndex)->GetStaticField(0x3AE30);
	}
	// static const ::System::String* OJEFBNDOPGO; // 0x0
	// static const ::System::Int32 KIOJENNLKBI = 0x5; // 0x0
	::System::Collections::Generic::List_1<::EDLAOJHICOE*>* GAPDNMKPHKE; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* ELOKHOIEPDJ; // 0x20
	::System::Boolean LCMIPILNCAH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMNBDOIIHF__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_ONSTART_OFFSET))(this);
	}

	::System::Void OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_ONSHUTDOWN_OFFSET))(this);
	}

	::System::Int32 IDADCOECIGG(::System::Int32 HHEGANCPILH)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_IDADCOECIGG_OFFSET))(this, HHEGANCPILH);
	}

	static ::System::Void CFGOPKLDNGL(::System::Int32 ABEFOPGDDBL, ::System::Action_1<::System::Boolean>* KJEGEDODKCE)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_CFGOPKLDNGL_OFFSET))(ABEFOPGDDBL, KJEGEDODKCE);
	}

	::EDLAOJHICOE* AALPGAGJNNO()
	{
		return ((::EDLAOJHICOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_AALPGAGJNNO_OFFSET))(this);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_DOPGAFCKMNF_OFFSET))(this);
	}

	::System::Void PHHPJJKEIFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_PHHPJJKEIFB_OFFSET))(this);
	}

	::System::Void KKPJPEDMICC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_KKPJPEDMICC_OFFSET))(this);
	}

	::System::Boolean AELHIFKGMDG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_AELHIFKGMDG_OFFSET))(this);
	}

	static ::System::Void EEIPFLGIFNC(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_EEIPFLGIFNC_OFFSET))(NACGJJKHEJE);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_CNIKAMOAANF_OFFSET))(this);
	}

	static ::System::Void AIOJMILLHON(::System::Int32 IKMDLFLGHAM)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_AIOJMILLHON_OFFSET))(IKMDLFLGHAM);
	}

	static ::System::Void NNDPHMPOCDC(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_NNDPHMPOCDC_OFFSET))(NACGJJKHEJE);
	}

	static ::System::Void DLAOMLPPHEK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAMNBDOIIHF_DLAOMLPPHEK_OFFSET))();
	}

	::System::Boolean OGAGPKMKOFF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_OGAGPKMKOFF_OFFSET))(this);
	}

	static ::System::Void CINANGNBMFM(::System::Int32 NACGJJKHEJE)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_CINANGNBMFM_OFFSET))(NACGJJKHEJE);
	}

	::System::Void NJKEGKKECMB(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_NJKEGKKECMB_OFFSET))(this, MNDIBLLFAJI);
	}

	::EDLAOJHICOE* NNMABKBGOOD()
	{
		return ((::EDLAOJHICOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_NNMABKBGOOD_OFFSET))(this);
	}

	::UnityEngine::Vector2 MGFEKLJKBFD(::System::Int32 JGHLPCPCCKL)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_MGFEKLJKBFD_OFFSET))(this, JGHLPCPCCKL);
	}

	::System::Void PDKELHHHPGO(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_PDKELHHHPGO_OFFSET))(this, MNDIBLLFAJI);
	}

	static ::System::Void OMBGLCNHDLG(::System::Action* AONGGJGJNMM)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_OMBGLCNHDLG_OFFSET))(AONGGJGJNMM);
	}
};
