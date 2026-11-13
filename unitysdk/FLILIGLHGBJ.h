#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EaseType.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FLILIGLHGBJ_BIGAFJLBOIL_OFFSET UNITYSDK_OFFSET(0x189630C0)
#define FLILIGLHGBJ_BOJODCMLFNF_OFFSET UNITYSDK_OFFSET(0x18963330)
#define FLILIGLHGBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x18963910)
#define FLILIGLHGBJ_CGGNHGDNGLJ_OFFSET UNITYSDK_OFFSET(0x189636A0)
#define FLILIGLHGBJ_CJLCDGEBCOF_OFFSET UNITYSDK_OFFSET(0x18963520)
#define FLILIGLHGBJ_DAFAJOCOFPI_OFFSET UNITYSDK_OFFSET(0x189635D0)
#define FLILIGLHGBJ_DDLLCLCHKDA_OFFSET UNITYSDK_OFFSET(0x18963450)
#define FLILIGLHGBJ_EDNPGFJBEFL_OFFSET UNITYSDK_OFFSET(0x18963740)
#define FLILIGLHGBJ_EMACCLJFBJE_OFFSET UNITYSDK_OFFSET(0x189631C0)
#define FLILIGLHGBJ_FBAAFBEFPBH_OFFSET UNITYSDK_OFFSET(0x18963160)
#define FLILIGLHGBJ_FBFGCCJNHNO_OFFSET UNITYSDK_OFFSET(0x189633A0)
#define FLILIGLHGBJ_GPODLLMFIME_OFFSET UNITYSDK_OFFSET(0x18962DE0)
#define FLILIGLHGBJ_HCNFPLHKHDO_OFFSET UNITYSDK_OFFSET(0x18962E70)
#define FLILIGLHGBJ_IDPKCPDILDJ_OFFSET UNITYSDK_OFFSET(0x189632D0)
#define FLILIGLHGBJ_IFMINKBILGJ_OFFSET UNITYSDK_OFFSET(0x189634B0)
#define FLILIGLHGBJ_IHBINMAMLDF_OFFSET UNITYSDK_OFFSET(0x18962F90)
#define FLILIGLHGBJ_KCBOGLIELCO_OFFSET UNITYSDK_OFFSET(0x18963050)
#define FLILIGLHGBJ_KCNEKLOBBID_OFFSET UNITYSDK_OFFSET(0x189637C0)
#define FLILIGLHGBJ_KDJNAMLIEJE_OFFSET UNITYSDK_OFFSET(0x18963230)
#define FLILIGLHGBJ_LAONGFGOFJM_OFFSET UNITYSDK_OFFSET(0x18963000)
#define FLILIGLHGBJ_LENCEKOIFOP_OFFSET UNITYSDK_OFFSET(0x18963840)
#define FLILIGLHGBJ_NMHMAMAOBGL_OFFSET UNITYSDK_OFFSET(0x18962EC0)
#define FLILIGLHGBJ_OHDEFDIDPLM_OFFSET UNITYSDK_OFFSET(0x18962F30)
#define FLILIGLHGBJ_PBDPLGJNLBH_OFFSET UNITYSDK_OFFSET(0x18963630)

inline static constexpr unsigned int FLILIGLHGBJ_TypeDefinitionIndex = 60324;

	class FLILIGLHGBJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EaseType, ::System::Func_2<::System::Single, ::System::Single>*>** StaticGet_OLLFGBHKKLN()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EaseType, ::System::Func_2<::System::Single, ::System::Single>*>**)UnitySDK::FromName("", "FLILIGLHGBJ")->GetStaticField(0x68F60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLILIGLHGBJ_CCTOR_OFFSET))();
		}

		static ::System::Func_2<::System::Single, ::System::Single>* GPODLLMFIME(::RPG::GameCore::EaseType a1)
		{
			return ((::System::Func_2<::System::Single, ::System::Single>*(*)(::RPG::GameCore::EaseType))((::PBYTE)hIl2Cpp + FLILIGLHGBJ_GPODLLMFIME_OFFSET))(a1);
		}

		static ::System::Single HCNFPLHKHDO(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLILIGLHGBJ_HCNFPLHKHDO_OFFSET))(a1);
		}

		static ::System::Single NMHMAMAOBGL(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLILIGLHGBJ_NMHMAMAOBGL_OFFSET))(a1);
		}

		static ::System::Single OHDEFDIDPLM(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLILIGLHGBJ_OHDEFDIDPLM_OFFSET))(a1);
		}

		static ::System::Single IHBINMAMLDF(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLILIGLHGBJ_IHBINMAMLDF_OFFSET))(a1);
		}

		static ::System::Single LAONGFGOFJM(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLILIGLHGBJ_LAONGFGOFJM_OFFSET))(a1);
		}

		static ::System::Single KCBOGLIELCO(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLILIGLHGBJ_KCBOGLIELCO_OFFSET))(a1);
		}

		static ::System::Single BIGAFJLBOIL(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLILIGLHGBJ_BIGAFJLBOIL_OFFSET))(a1);
		}

		static ::System::Single FBAAFBEFPBH(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLILIGLHGBJ_FBAAFBEFPBH_OFFSET))(a1);
		}

		static ::System::Single EMACCLJFBJE(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLILIGLHGBJ_EMACCLJFBJE_OFFSET))(a1);
		}

		static ::System::Single KDJNAMLIEJE(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLILIGLHGBJ_KDJNAMLIEJE_OFFSET))(a1);
		}

		static ::System::Single IDPKCPDILDJ(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLILIGLHGBJ_IDPKCPDILDJ_OFFSET))(a1);
		}

		static ::System::Single BOJODCMLFNF(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLILIGLHGBJ_BOJODCMLFNF_OFFSET))(a1);
		}

		static ::System::Single FBFGCCJNHNO(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLILIGLHGBJ_FBFGCCJNHNO_OFFSET))(a1);
		}

		static ::System::Single DDLLCLCHKDA(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLILIGLHGBJ_DDLLCLCHKDA_OFFSET))(a1);
		}

		static ::System::Single IFMINKBILGJ(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLILIGLHGBJ_IFMINKBILGJ_OFFSET))(a1);
		}

		static ::System::Single CJLCDGEBCOF(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLILIGLHGBJ_CJLCDGEBCOF_OFFSET))(a1);
		}

		static ::System::Single DAFAJOCOFPI(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLILIGLHGBJ_DAFAJOCOFPI_OFFSET))(a1);
		}

		static ::System::Single PBDPLGJNLBH(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLILIGLHGBJ_PBDPLGJNLBH_OFFSET))(a1);
		}

		static ::System::Single CGGNHGDNGLJ(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLILIGLHGBJ_CGGNHGDNGLJ_OFFSET))(a1);
		}

		static ::System::Single EDNPGFJBEFL(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLILIGLHGBJ_EDNPGFJBEFL_OFFSET))(a1);
		}

		static ::System::Single KCNEKLOBBID(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLILIGLHGBJ_KCNEKLOBBID_OFFSET))(a1);
		}

		static ::System::Single LENCEKOIFOP(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLILIGLHGBJ_LENCEKOIFOP_OFFSET))(a1);
		}

	};
