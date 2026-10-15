#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyGoodsConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FNPAJOFNEGA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDE32D0)
#define FNPAJOFNEGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDE38A0)
#define FNPAJOFNEGA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDE3440)
#define FNPAJOFNEGA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDE2D40)
#define FNPAJOFNEGA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDE2FD0)
#define FNPAJOFNEGA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDE34E0)
#define FNPAJOFNEGA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDE3530)
#define FNPAJOFNEGA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDE3310)
#define FNPAJOFNEGA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDE2F70)
#define FNPAJOFNEGA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDE3140)
#define FNPAJOFNEGA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDE33A0)
#define FNPAJOFNEGA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDE2CC0)

inline static constexpr unsigned int FNPAJOFNEGA_TypeDefinitionIndex = 12051;

	class FNPAJOFNEGA : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FNPAJOFNEGA")->GetStaticField(0x13390);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FNPAJOFNEGA")->GetStaticField(0x13398);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGoodsConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGoodsConfigRow*>**)UnitySDK::FromName("", "FNPAJOFNEGA")->GetStaticField(0x133A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FNPAJOFNEGA")->GetStaticField(0x3E80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FNPAJOFNEGA")->GetStaticField(0x3E81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNPAJOFNEGA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGoodsConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGoodsConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FNPAJOFNEGA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FNPAJOFNEGA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGoodsConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGoodsConfigRow*>(*)())((::PBYTE)hIl2Cpp + FNPAJOFNEGA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyGoodsConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonopolyGoodsConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FNPAJOFNEGA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FNPAJOFNEGA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNPAJOFNEGA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNPAJOFNEGA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FNPAJOFNEGA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FNPAJOFNEGA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FNPAJOFNEGA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MonopolyGoodsConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyGoodsConfigRow*))((::PBYTE)hIl2Cpp + FNPAJOFNEGA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
