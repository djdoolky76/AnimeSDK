#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeliobusSpecialPostRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IPKFNKGCLGE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CF30710)
#define IPKFNKGCLGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF30C90)
#define IPKFNKGCLGE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CF30880)
#define IPKFNKGCLGE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF301C0)
#define IPKFNKGCLGE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CF30450)
#define IPKFNKGCLGE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CF30920)
#define IPKFNKGCLGE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CF30970)
#define IPKFNKGCLGE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CF30750)
#define IPKFNKGCLGE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CF303F0)
#define IPKFNKGCLGE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CF305C0)
#define IPKFNKGCLGE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CF307E0)
#define IPKFNKGCLGE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CF30140)

	class IPKFNKGCLGE : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "IPKFNKGCLGE")->GetStaticField(0x24FF0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusSpecialPostRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusSpecialPostRow*>**)UnitySDK::FromName("", "IPKFNKGCLGE")->GetStaticField(0x24FF8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IPKFNKGCLGE")->GetStaticField(0x25000);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IPKFNKGCLGE")->GetStaticField(0x80F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IPKFNKGCLGE")->GetStaticField(0x80F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPKFNKGCLGE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusSpecialPostRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusSpecialPostRow*>*(*)())((::PBYTE)hIl2Cpp + IPKFNKGCLGE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IPKFNKGCLGE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusSpecialPostRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusSpecialPostRow*>(*)())((::PBYTE)hIl2Cpp + IPKFNKGCLGE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::HeliobusSpecialPostRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HeliobusSpecialPostRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IPKFNKGCLGE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IPKFNKGCLGE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPKFNKGCLGE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPKFNKGCLGE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IPKFNKGCLGE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IPKFNKGCLGE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IPKFNKGCLGE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::HeliobusSpecialPostRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeliobusSpecialPostRow*))((::PBYTE)hIl2Cpp + IPKFNKGCLGE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
