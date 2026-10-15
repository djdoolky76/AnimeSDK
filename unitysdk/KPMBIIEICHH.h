#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class OEJDHDANODH;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPMBIIEICHH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0A0460)
#define KPMBIIEICHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0A09E0)
#define KPMBIIEICHH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0A05D0)
#define KPMBIIEICHH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D09FF10)
#define KPMBIIEICHH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0A01A0)
#define KPMBIIEICHH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0A0670)
#define KPMBIIEICHH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0A06C0)
#define KPMBIIEICHH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0A04A0)
#define KPMBIIEICHH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0A0140)
#define KPMBIIEICHH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0A0310)
#define KPMBIIEICHH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0A0530)
#define KPMBIIEICHH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D09FE90)

inline static constexpr unsigned int KPMBIIEICHH_TypeDefinitionIndex = 12499;

	class KPMBIIEICHH : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KPMBIIEICHH")->GetStaticField(0x37A50);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KPMBIIEICHH")->GetStaticField(0x37A58);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OEJDHDANODH*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OEJDHDANODH*>**)UnitySDK::FromName("", "KPMBIIEICHH")->GetStaticField(0x37A60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KPMBIIEICHH")->GetStaticField(0xB440);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KPMBIIEICHH")->GetStaticField(0xB441);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPMBIIEICHH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OEJDHDANODH*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::OEJDHDANODH*>*(*)())((::PBYTE)hIl2Cpp + KPMBIIEICHH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPMBIIEICHH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::OEJDHDANODH*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::OEJDHDANODH*>(*)())((::PBYTE)hIl2Cpp + KPMBIIEICHH_FPHGMAMDFHE_OFFSET))();
		}

		static ::OEJDHDANODH* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::OEJDHDANODH*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KPMBIIEICHH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPMBIIEICHH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPMBIIEICHH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPMBIIEICHH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KPMBIIEICHH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KPMBIIEICHH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KPMBIIEICHH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::OEJDHDANODH* a1)
		{
			return ((::System::Void(*)(::OEJDHDANODH*))((::PBYTE)hIl2Cpp + KPMBIIEICHH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
