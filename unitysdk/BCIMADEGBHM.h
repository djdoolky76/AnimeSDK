#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class PLPMBINCFAI;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BCIMADEGBHM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCF92B0)
#define BCIMADEGBHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCF9880)
#define BCIMADEGBHM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCF9420)
#define BCIMADEGBHM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCF8D20)
#define BCIMADEGBHM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCF8FB0)
#define BCIMADEGBHM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCF94C0)
#define BCIMADEGBHM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCF9510)
#define BCIMADEGBHM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCF92F0)
#define BCIMADEGBHM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCF8F50)
#define BCIMADEGBHM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCF9120)
#define BCIMADEGBHM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCF9380)
#define BCIMADEGBHM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCF8CA0)

inline static constexpr unsigned int BCIMADEGBHM_TypeDefinitionIndex = 14441;

	class BCIMADEGBHM : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BCIMADEGBHM")->GetStaticField(0x3DFD0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BCIMADEGBHM")->GetStaticField(0x3DFD8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PLPMBINCFAI*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PLPMBINCFAI*>**)UnitySDK::FromName("", "BCIMADEGBHM")->GetStaticField(0x3DFE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BCIMADEGBHM")->GetStaticField(0xD440);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BCIMADEGBHM")->GetStaticField(0xD441);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCIMADEGBHM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PLPMBINCFAI*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PLPMBINCFAI*>*(*)())((::PBYTE)hIl2Cpp + BCIMADEGBHM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BCIMADEGBHM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::PLPMBINCFAI*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::PLPMBINCFAI*>(*)())((::PBYTE)hIl2Cpp + BCIMADEGBHM_FPHGMAMDFHE_OFFSET))();
		}

		static ::PLPMBINCFAI* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::PLPMBINCFAI*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BCIMADEGBHM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BCIMADEGBHM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCIMADEGBHM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCIMADEGBHM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BCIMADEGBHM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BCIMADEGBHM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BCIMADEGBHM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::PLPMBINCFAI* a1)
		{
			return ((::System::Void(*)(::PLPMBINCFAI*))((::PBYTE)hIl2Cpp + BCIMADEGBHM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
