#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class OANOGADDKKH;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KOEEGBOPHPA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0BE540)
#define KOEEGBOPHPA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0BEB10)
#define KOEEGBOPHPA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0BE6B0)
#define KOEEGBOPHPA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0BDFB0)
#define KOEEGBOPHPA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0BE240)
#define KOEEGBOPHPA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0BE750)
#define KOEEGBOPHPA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0BE7A0)
#define KOEEGBOPHPA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0BE580)
#define KOEEGBOPHPA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0BE1E0)
#define KOEEGBOPHPA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0BE3B0)
#define KOEEGBOPHPA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0BE610)
#define KOEEGBOPHPA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0BDF30)

inline static constexpr unsigned int KOEEGBOPHPA_TypeDefinitionIndex = 13904;

	class KOEEGBOPHPA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KOEEGBOPHPA")->GetStaticField(0x39190);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OANOGADDKKH*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OANOGADDKKH*>**)UnitySDK::FromName("", "KOEEGBOPHPA")->GetStaticField(0x39198);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KOEEGBOPHPA")->GetStaticField(0x391A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KOEEGBOPHPA")->GetStaticField(0xC340);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KOEEGBOPHPA")->GetStaticField(0xC341);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOEEGBOPHPA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OANOGADDKKH*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OANOGADDKKH*>*(*)())((::PBYTE)hIl2Cpp + KOEEGBOPHPA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KOEEGBOPHPA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::OANOGADDKKH*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::OANOGADDKKH*>(*)())((::PBYTE)hIl2Cpp + KOEEGBOPHPA_FPHGMAMDFHE_OFFSET))();
		}

		static ::OANOGADDKKH* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::OANOGADDKKH*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KOEEGBOPHPA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KOEEGBOPHPA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOEEGBOPHPA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOEEGBOPHPA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KOEEGBOPHPA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KOEEGBOPHPA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KOEEGBOPHPA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::OANOGADDKKH* a1)
		{
			return ((::System::Void(*)(::OANOGADDKKH*))((::PBYTE)hIl2Cpp + KOEEGBOPHPA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
