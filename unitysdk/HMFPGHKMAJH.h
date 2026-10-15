#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeadFrameConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HMFPGHKMAJH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEC40F0)
#define HMFPGHKMAJH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEC4670)
#define HMFPGHKMAJH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEC4260)
#define HMFPGHKMAJH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEC3BA0)
#define HMFPGHKMAJH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEC3E30)
#define HMFPGHKMAJH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEC4300)
#define HMFPGHKMAJH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEC4350)
#define HMFPGHKMAJH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEC4130)
#define HMFPGHKMAJH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEC3DD0)
#define HMFPGHKMAJH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEC3FA0)
#define HMFPGHKMAJH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEC41C0)
#define HMFPGHKMAJH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEC3B20)

	class HMFPGHKMAJH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeadFrameConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeadFrameConfigRow*>**)UnitySDK::FromName("", "HMFPGHKMAJH")->GetStaticField(0x1F310);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HMFPGHKMAJH")->GetStaticField(0x1F318);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HMFPGHKMAJH")->GetStaticField(0x1F320);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HMFPGHKMAJH")->GetStaticField(0x71F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HMFPGHKMAJH")->GetStaticField(0x71F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMFPGHKMAJH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeadFrameConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeadFrameConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HMFPGHKMAJH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HMFPGHKMAJH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeadFrameConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeadFrameConfigRow*>(*)())((::PBYTE)hIl2Cpp + HMFPGHKMAJH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::HeadFrameConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HeadFrameConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HMFPGHKMAJH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HMFPGHKMAJH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMFPGHKMAJH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMFPGHKMAJH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HMFPGHKMAJH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HMFPGHKMAJH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HMFPGHKMAJH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::HeadFrameConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeadFrameConfigRow*))((::PBYTE)hIl2Cpp + HMFPGHKMAJH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
