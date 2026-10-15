#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivitySummonGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHJJLGAMJKH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2BB030)
#define PHJJLGAMJKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2BB5B0)
#define PHJJLGAMJKH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2BB1A0)
#define PHJJLGAMJKH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2BAAE0)
#define PHJJLGAMJKH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2BAD70)
#define PHJJLGAMJKH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2BB240)
#define PHJJLGAMJKH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2BB290)
#define PHJJLGAMJKH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2BB070)
#define PHJJLGAMJKH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2BAD10)
#define PHJJLGAMJKH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2BAEA0)
#define PHJJLGAMJKH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2BB100)
#define PHJJLGAMJKH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2BAA60)

inline static constexpr unsigned int PHJJLGAMJKH_TypeDefinitionIndex = 12407;

	class PHJJLGAMJKH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonGroupRow*>**)UnitySDK::FromName("", "PHJJLGAMJKH")->GetStaticField(0x4EF30);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PHJJLGAMJKH")->GetStaticField(0x4EF38);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PHJJLGAMJKH")->GetStaticField(0x4EF40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PHJJLGAMJKH")->GetStaticField(0x11FC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PHJJLGAMJKH")->GetStaticField(0x11FC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHJJLGAMJKH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonGroupRow*>*(*)())((::PBYTE)hIl2Cpp + PHJJLGAMJKH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PHJJLGAMJKH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivitySummonGroupRow*>(*)())((::PBYTE)hIl2Cpp + PHJJLGAMJKH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivitySummonGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivitySummonGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PHJJLGAMJKH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PHJJLGAMJKH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHJJLGAMJKH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHJJLGAMJKH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PHJJLGAMJKH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PHJJLGAMJKH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PHJJLGAMJKH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivitySummonGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivitySummonGroupRow*))((::PBYTE)hIl2Cpp + PHJJLGAMJKH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
