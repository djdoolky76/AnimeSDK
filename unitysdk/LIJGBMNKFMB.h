#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class ACDOGMEAIPD;
class FCOEMCEDLNL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LIJGBMNKFMB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0FABE0)
#define LIJGBMNKFMB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0FB1A0)
#define LIJGBMNKFMB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0FAD50)
#define LIJGBMNKFMB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0FA680)
#define LIJGBMNKFMB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0FA910)
#define LIJGBMNKFMB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0FADF0)
#define LIJGBMNKFMB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0FAE40)
#define LIJGBMNKFMB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0FAC20)
#define LIJGBMNKFMB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0FA8B0)
#define LIJGBMNKFMB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0FAA40)
#define LIJGBMNKFMB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0FACB0)
#define LIJGBMNKFMB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0FA600)

	class LIJGBMNKFMB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ACDOGMEAIPD*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ACDOGMEAIPD*>**)UnitySDK::FromName("", "LIJGBMNKFMB")->GetStaticField(0x3E610);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LIJGBMNKFMB")->GetStaticField(0x3E618);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LIJGBMNKFMB")->GetStaticField(0x3E620);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LIJGBMNKFMB")->GetStaticField(0xD5F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LIJGBMNKFMB")->GetStaticField(0xD5F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIJGBMNKFMB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ACDOGMEAIPD*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ACDOGMEAIPD*>*(*)())((::PBYTE)hIl2Cpp + LIJGBMNKFMB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LIJGBMNKFMB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::ACDOGMEAIPD*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::ACDOGMEAIPD*>(*)())((::PBYTE)hIl2Cpp + LIJGBMNKFMB_FPHGMAMDFHE_OFFSET))();
		}

		static ::ACDOGMEAIPD* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::ACDOGMEAIPD*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LIJGBMNKFMB_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LIJGBMNKFMB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIJGBMNKFMB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIJGBMNKFMB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LIJGBMNKFMB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LIJGBMNKFMB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LIJGBMNKFMB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::ACDOGMEAIPD* a1)
		{
			return ((::System::Void(*)(::ACDOGMEAIPD*))((::PBYTE)hIl2Cpp + LIJGBMNKFMB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
