#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BookDisplayTypeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MMPDBEFLFHL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1A5630)
#define MMPDBEFLFHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1A5BB0)
#define MMPDBEFLFHL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1A57A0)
#define MMPDBEFLFHL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1A50E0)
#define MMPDBEFLFHL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1A5370)
#define MMPDBEFLFHL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1A5840)
#define MMPDBEFLFHL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1A5890)
#define MMPDBEFLFHL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1A5670)
#define MMPDBEFLFHL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1A5310)
#define MMPDBEFLFHL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1A54E0)
#define MMPDBEFLFHL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1A5700)
#define MMPDBEFLFHL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1A5060)

inline static constexpr unsigned int MMPDBEFLFHL_TypeDefinitionIndex = 12902;

	class MMPDBEFLFHL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MMPDBEFLFHL")->GetStaticField(0x3C2E0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MMPDBEFLFHL")->GetStaticField(0x3C2E8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookDisplayTypeConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookDisplayTypeConfigRow*>**)UnitySDK::FromName("", "MMPDBEFLFHL")->GetStaticField(0x3C2F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MMPDBEFLFHL")->GetStaticField(0xC080);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MMPDBEFLFHL")->GetStaticField(0xC081);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMPDBEFLFHL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookDisplayTypeConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookDisplayTypeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MMPDBEFLFHL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MMPDBEFLFHL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookDisplayTypeConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BookDisplayTypeConfigRow*>(*)())((::PBYTE)hIl2Cpp + MMPDBEFLFHL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::BookDisplayTypeConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BookDisplayTypeConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MMPDBEFLFHL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MMPDBEFLFHL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMPDBEFLFHL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMPDBEFLFHL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MMPDBEFLFHL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MMPDBEFLFHL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MMPDBEFLFHL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::BookDisplayTypeConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BookDisplayTypeConfigRow*))((::PBYTE)hIl2Cpp + MMPDBEFLFHL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
