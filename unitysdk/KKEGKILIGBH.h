#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightElationPropertyExtraEffectConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KKEGKILIGBH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D09B840)
#define KKEGKILIGBH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D09BE10)
#define KKEGKILIGBH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D09B9B0)
#define KKEGKILIGBH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D09B2B0)
#define KKEGKILIGBH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D09B540)
#define KKEGKILIGBH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D09BA50)
#define KKEGKILIGBH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D09BAA0)
#define KKEGKILIGBH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D09B880)
#define KKEGKILIGBH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D09B4E0)
#define KKEGKILIGBH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D09B6B0)
#define KKEGKILIGBH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D09B910)
#define KKEGKILIGBH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D09B230)

	class KKEGKILIGBH : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KKEGKILIGBH")->GetStaticField(0x35880);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*>**)UnitySDK::FromName("", "KKEGKILIGBH")->GetStaticField(0x35888);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KKEGKILIGBH")->GetStaticField(0x35890);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KKEGKILIGBH")->GetStaticField(0xB480);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KKEGKILIGBH")->GetStaticField(0xB481);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKEGKILIGBH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*>*(*)())((::PBYTE)hIl2Cpp + KKEGKILIGBH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KKEGKILIGBH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*>(*)())((::PBYTE)hIl2Cpp + KKEGKILIGBH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow* LMBKNCAIDLC(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*(*)(::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + KKEGKILIGBH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KKEGKILIGBH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKEGKILIGBH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKEGKILIGBH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KKEGKILIGBH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KKEGKILIGBH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KKEGKILIGBH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*))((::PBYTE)hIl2Cpp + KKEGKILIGBH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
