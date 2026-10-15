#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightExpertRestrictConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BFDNDMMMOJN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D670860)
#define BFDNDMMMOJN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D670E30)
#define BFDNDMMMOJN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D6709D0)
#define BFDNDMMMOJN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D6702D0)
#define BFDNDMMMOJN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D670560)
#define BFDNDMMMOJN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D670A70)
#define BFDNDMMMOJN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D670AC0)
#define BFDNDMMMOJN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D6708A0)
#define BFDNDMMMOJN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D670500)
#define BFDNDMMMOJN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D6706D0)
#define BFDNDMMMOJN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D670930)
#define BFDNDMMMOJN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D670250)

	class BFDNDMMMOJN : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BFDNDMMMOJN")->GetStaticField(0x33C40);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BFDNDMMMOJN")->GetStaticField(0x33C48);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightExpertRestrictConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightExpertRestrictConfigRow*>**)UnitySDK::FromName("", "BFDNDMMMOJN")->GetStaticField(0x33C50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BFDNDMMMOJN")->GetStaticField(0xADF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BFDNDMMMOJN")->GetStaticField(0xADF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFDNDMMMOJN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightExpertRestrictConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightExpertRestrictConfigRow*>*(*)())((::PBYTE)hIl2Cpp + BFDNDMMMOJN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BFDNDMMMOJN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightExpertRestrictConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightExpertRestrictConfigRow*>(*)())((::PBYTE)hIl2Cpp + BFDNDMMMOJN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightExpertRestrictConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightExpertRestrictConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BFDNDMMMOJN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BFDNDMMMOJN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFDNDMMMOJN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFDNDMMMOJN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BFDNDMMMOJN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BFDNDMMMOJN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BFDNDMMMOJN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightExpertRestrictConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightExpertRestrictConfigRow*))((::PBYTE)hIl2Cpp + BFDNDMMMOJN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
