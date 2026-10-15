#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceMessageRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNGLHCPEAEE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D30D930)
#define PNGLHCPEAEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D30DEB0)
#define PNGLHCPEAEE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D30DAA0)
#define PNGLHCPEAEE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D30D420)
#define PNGLHCPEAEE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D30D6B0)
#define PNGLHCPEAEE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D30DB40)
#define PNGLHCPEAEE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D30DB90)
#define PNGLHCPEAEE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D30D970)
#define PNGLHCPEAEE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D30D650)
#define PNGLHCPEAEE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D30D7E0)
#define PNGLHCPEAEE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D30DA00)
#define PNGLHCPEAEE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D30D3A0)

	class PNGLHCPEAEE : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PNGLHCPEAEE")->GetStaticField(0x465D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PNGLHCPEAEE")->GetStaticField(0x465D8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceMessageRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceMessageRow*>**)UnitySDK::FromName("", "PNGLHCPEAEE")->GetStaticField(0x465E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PNGLHCPEAEE")->GetStaticField(0x10C80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PNGLHCPEAEE")->GetStaticField(0x10C81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNGLHCPEAEE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceMessageRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceMessageRow*>*(*)())((::PBYTE)hIl2Cpp + PNGLHCPEAEE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PNGLHCPEAEE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceMessageRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceMessageRow*>(*)())((::PBYTE)hIl2Cpp + PNGLHCPEAEE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::CakeRaceMessageRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceMessageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PNGLHCPEAEE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PNGLHCPEAEE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNGLHCPEAEE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNGLHCPEAEE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PNGLHCPEAEE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNGLHCPEAEE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PNGLHCPEAEE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::CakeRaceMessageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CakeRaceMessageRow*))((::PBYTE)hIl2Cpp + PNGLHCPEAEE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
