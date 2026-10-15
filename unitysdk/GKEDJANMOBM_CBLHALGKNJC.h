#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"
class AkCallbackInfo;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define GKEDJANMOBM_CBLHALGKNJC_CBIBKBILMAA_OFFSET UNITYSDK_OFFSET(0x15A94120)
#define GKEDJANMOBM_CBLHALGKNJC_CTOR_OFFSET UNITYSDK_OFFSET(0x15A93720)
#define GKEDJANMOBM_CBLHALGKNJC_EGNNJAGKMIH_OFFSET UNITYSDK_OFFSET(0x15A94080)
#define GKEDJANMOBM_CBLHALGKNJC_FFDHICFFNPJ_OFFSET UNITYSDK_OFFSET(0x15A93EF0)
#define GKEDJANMOBM_CBLHALGKNJC_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0x15A93CE0)
#define GKEDJANMOBM_CBLHALGKNJC_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0x15A93810)
#define GKEDJANMOBM_CBLHALGKNJC_MIIJKHPLOAF_OFFSET UNITYSDK_OFFSET(0x15A94030)
#define GKEDJANMOBM_CBLHALGKNJC_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x15A93A00)
#define GKEDJANMOBM_CBLHALGKNJC_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x15A93E50)
#define GKEDJANMOBM_CBLHALGKNJC_PODBDMJEMJP_OFFSET UNITYSDK_OFFSET(0x15A93FE0)

	class GKEDJANMOBM_CBLHALGKNJC : public ::System::Object
	{
	public:
		::System::String* FGMKCOANOOK; // 0x10
		::UnityEngine::GameObject* EAFMEEFNGMM; // 0x18
		::System::Single NPINECOCALC; // 0x20
		::System::Boolean GOFKAELMOPB; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 KPBMOBEFBCC; // 0x28
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GKEDJANMOBM_CBLHALGKNJC_CTOR_OFFSET))(this, a1);
		}

		::System::Void JDAGFHEPMHF(::UnityEngine::GameObject* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + GKEDJANMOBM_CBLHALGKNJC_JDAGFHEPMHF_OFFSET))(this, a1, a2);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEDJANMOBM_CBLHALGKNJC_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void IECIAPPANHI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKEDJANMOBM_CBLHALGKNJC_IECIAPPANHI_OFFSET))(this, a1);
		}

		::System::Void FFDHICFFNPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEDJANMOBM_CBLHALGKNJC_FFDHICFFNPJ_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEDJANMOBM_CBLHALGKNJC_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Boolean PODBDMJEMJP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEDJANMOBM_CBLHALGKNJC_PODBDMJEMJP_OFFSET))(this);
		}

		::System::Void MIIJKHPLOAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEDJANMOBM_CBLHALGKNJC_MIIJKHPLOAF_OFFSET))(this);
		}

		::System::Void EGNNJAGKMIH(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + GKEDJANMOBM_CBLHALGKNJC_EGNNJAGKMIH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CBIBKBILMAA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKEDJANMOBM_CBLHALGKNJC_CBIBKBILMAA_OFFSET))(this, a1);
		}

	};
