#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define APIHGEGGOEL_CKIJJEGEKNN_OFFSET UNITYSDK_OFFSET(0x1EBBF960)
#define APIHGEGGOEL_DDEJEJBCLJM_OFFSET UNITYSDK_OFFSET(0x1EBBFD70)
#define APIHGEGGOEL_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x1EBBF0B0)
#define APIHGEGGOEL_GET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x1EBBF2C0)
#define APIHGEGGOEL_IGGMJLGPJBF_OFFSET UNITYSDK_OFFSET(0x1EBBFBF0)
#define APIHGEGGOEL_KFNIFOIHHHC_OFFSET UNITYSDK_OFFSET(0x1EBBFAE0)
#define APIHGEGGOEL_LDINBGHDMGN_OFFSET UNITYSDK_OFFSET(0x1EBBF5B0)
#define APIHGEGGOEL_MHLKGONEGDG_OFFSET UNITYSDK_OFFSET(0x1EBBFE60)
#define APIHGEGGOEL_NCBOFIGJHCL_OFFSET UNITYSDK_OFFSET(0x1EBBF6A0)
#define APIHGEGGOEL_OOFPLDBPIGD_OFFSET UNITYSDK_OFFSET(0x1EBBF2E0)
#define APIHGEGGOEL_SET_HASVALUE_OFFSET UNITYSDK_OFFSET(0x1EBBF2D0)

inline static constexpr unsigned int APIHGEGGOEL_TypeDefinitionIndex = 35211;

	class APIHGEGGOEL : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::JSONNode** StaticGet_NENLPOGCFND()
		{
			return (::MiHoYo::SDK::JSONNode**)UnitySDK::FromName("", "APIHGEGGOEL")->GetStaticField(0x48BF0);
		}

		static ::System::Boolean* StaticGet__HasValue_k__BackingField()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "APIHGEGGOEL")->GetStaticField(0x10EA0);
		}

		// static const ::System::String* JMJGEKALCCF; // 0x0
		// static const ::System::String* GLLLDMCOGKN; // 0x0
		// static const ::System::String* LIJMHPGNGBA; // 0x0
		// static const ::System::String* FONKOFMJLON; // 0x0
		// static const ::System::String* KFCAJMHBIKC; // 0x0
		// static const ::System::String* DKLIINHCDBI; // 0x0
		// static const ::System::String* IIMDANPBGNL; // 0x0
		// static const ::System::String* CKIOGKILGPA; // 0x0
		static ::System::Void FPKLDCGAJGP(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + APIHGEGGOEL_FPKLDCGAJGP_OFFSET))(a1);
		}

		static ::System::Boolean get_HasValue()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + APIHGEGGOEL_GET_HASVALUE_OFFSET))();
		}

		static ::System::Void set_HasValue(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + APIHGEGGOEL_SET_HASVALUE_OFFSET))(a1);
		}

		static ::System::String* OOFPLDBPIGD()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + APIHGEGGOEL_OOFPLDBPIGD_OFFSET))();
		}

		static ::System::String* LDINBGHDMGN()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + APIHGEGGOEL_LDINBGHDMGN_OFFSET))();
		}

		static ::System::Int32 NCBOFIGJHCL()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + APIHGEGGOEL_NCBOFIGJHCL_OFFSET))();
		}

		static ::System::Int32 CKIJJEGEKNN()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + APIHGEGGOEL_CKIJJEGEKNN_OFFSET))();
		}

		static ::System::String* KFNIFOIHHHC()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + APIHGEGGOEL_KFNIFOIHHHC_OFFSET))();
		}

		static ::System::Int32 IGGMJLGPJBF()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + APIHGEGGOEL_IGGMJLGPJBF_OFFSET))();
		}

		static ::System::String* DDEJEJBCLJM()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + APIHGEGGOEL_DDEJEJBCLJM_OFFSET))();
		}

		static ::System::String* MHLKGONEGDG()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + APIHGEGGOEL_MHLKGONEGDG_OFFSET))();
		}

	};
