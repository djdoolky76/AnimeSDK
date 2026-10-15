#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MuseumMissionRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DOBCKPGJFHF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD52210)
#define DOBCKPGJFHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD527E0)
#define DOBCKPGJFHF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD52380)
#define DOBCKPGJFHF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD51C80)
#define DOBCKPGJFHF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD51F10)
#define DOBCKPGJFHF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD52420)
#define DOBCKPGJFHF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD52470)
#define DOBCKPGJFHF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD52250)
#define DOBCKPGJFHF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD51EB0)
#define DOBCKPGJFHF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD52080)
#define DOBCKPGJFHF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD522E0)
#define DOBCKPGJFHF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD51C00)

	class DOBCKPGJFHF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumMissionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumMissionRow*>**)UnitySDK::FromName("", "DOBCKPGJFHF")->GetStaticField(0x52050);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DOBCKPGJFHF")->GetStaticField(0x52058);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DOBCKPGJFHF")->GetStaticField(0x52060);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DOBCKPGJFHF")->GetStaticField(0x123F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DOBCKPGJFHF")->GetStaticField(0x123F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOBCKPGJFHF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumMissionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumMissionRow*>*(*)())((::PBYTE)hIl2Cpp + DOBCKPGJFHF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DOBCKPGJFHF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumMissionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumMissionRow*>(*)())((::PBYTE)hIl2Cpp + DOBCKPGJFHF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MuseumMissionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MuseumMissionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DOBCKPGJFHF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DOBCKPGJFHF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOBCKPGJFHF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOBCKPGJFHF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DOBCKPGJFHF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DOBCKPGJFHF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DOBCKPGJFHF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MuseumMissionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MuseumMissionRow*))((::PBYTE)hIl2Cpp + DOBCKPGJFHF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
