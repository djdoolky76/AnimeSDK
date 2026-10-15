#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class InclinationTextRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DIIJKAGGMBK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD270D0)
#define DIIJKAGGMBK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD27650)
#define DIIJKAGGMBK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD27240)
#define DIIJKAGGMBK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD26EA0)
#define DIIJKAGGMBK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD26A90)
#define DIIJKAGGMBK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD272E0)
#define DIIJKAGGMBK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD27330)
#define DIIJKAGGMBK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD27110)
#define DIIJKAGGMBK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD26A30)
#define DIIJKAGGMBK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD26D50)
#define DIIJKAGGMBK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD271A0)
#define DIIJKAGGMBK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD269B0)

	class DIIJKAGGMBK : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DIIJKAGGMBK")->GetStaticField(0x4CEB0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DIIJKAGGMBK")->GetStaticField(0x4CEB8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InclinationTextRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InclinationTextRow*>**)UnitySDK::FromName("", "DIIJKAGGMBK")->GetStaticField(0x4CEC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DIIJKAGGMBK")->GetStaticField(0x11B40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DIIJKAGGMBK")->GetStaticField(0x11B41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIIJKAGGMBK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InclinationTextRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InclinationTextRow*>*(*)())((::PBYTE)hIl2Cpp + DIIJKAGGMBK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DIIJKAGGMBK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InclinationTextRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InclinationTextRow*>(*)())((::PBYTE)hIl2Cpp + DIIJKAGGMBK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::InclinationTextRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::InclinationTextRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DIIJKAGGMBK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DIIJKAGGMBK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIIJKAGGMBK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIIJKAGGMBK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DIIJKAGGMBK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIIJKAGGMBK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DIIJKAGGMBK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::InclinationTextRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::InclinationTextRow*))((::PBYTE)hIl2Cpp + DIIJKAGGMBK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
