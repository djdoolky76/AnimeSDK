#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShopGiftConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EJGMOICGCBE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1F11A780)
#define EJGMOICGCBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F11B2D0)
#define EJGMOICGCBE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1F11AB20)
#define EJGMOICGCBE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1F11A7C0)
#define EJGMOICGCBE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1F11B010)
#define EJGMOICGCBE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1F11ABC0)
#define EJGMOICGCBE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1F11AC10)
#define EJGMOICGCBE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1F11A9F0)
#define EJGMOICGCBE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1F11AFB0)
#define EJGMOICGCBE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1F11B180)
#define EJGMOICGCBE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1F11AA80)
#define EJGMOICGCBE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1F11AF30)

inline static constexpr unsigned int EJGMOICGCBE_TypeDefinitionIndex = 15268;

	class EJGMOICGCBE : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EJGMOICGCBE")->GetStaticField(0x48630);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EJGMOICGCBE")->GetStaticField(0x48638);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGiftConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGiftConfigRow*>**)UnitySDK::FromName("", "EJGMOICGCBE")->GetStaticField(0x48640);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EJGMOICGCBE")->GetStaticField(0xE0D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EJGMOICGCBE")->GetStaticField(0xE0D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJGMOICGCBE_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EJGMOICGCBE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJGMOICGCBE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJGMOICGCBE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EJGMOICGCBE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EJGMOICGCBE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EJGMOICGCBE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ShopGiftConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ShopGiftConfigRow*))((::PBYTE)hIl2Cpp + EJGMOICGCBE_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGiftConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGiftConfigRow*>*(*)())((::PBYTE)hIl2Cpp + EJGMOICGCBE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EJGMOICGCBE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGiftConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShopGiftConfigRow*>(*)())((::PBYTE)hIl2Cpp + EJGMOICGCBE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ShopGiftConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ShopGiftConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EJGMOICGCBE_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
