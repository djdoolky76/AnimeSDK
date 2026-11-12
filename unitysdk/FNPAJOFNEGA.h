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

#define FNPAJOFNEGA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DFEAB10)
#define FNPAJOFNEGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFEB0E0)
#define FNPAJOFNEGA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DFEAC80)
#define FNPAJOFNEGA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DFEA580)
#define FNPAJOFNEGA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DFEA810)
#define FNPAJOFNEGA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DFEAD20)
#define FNPAJOFNEGA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DFEAD70)
#define FNPAJOFNEGA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DFEAB50)
#define FNPAJOFNEGA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DFEA7B0)
#define FNPAJOFNEGA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DFEA980)
#define FNPAJOFNEGA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DFEABE0)
#define FNPAJOFNEGA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DFEA500)

inline static constexpr unsigned int FNPAJOFNEGA_TypeDefinitionIndex = 12108;

	class FNPAJOFNEGA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGoodsConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGoodsConfigRow*>**)UnitySDK::FromName("", "FNPAJOFNEGA")->GetStaticField(0xB2D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FNPAJOFNEGA")->GetStaticField(0xB2D8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FNPAJOFNEGA")->GetStaticField(0xB2E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FNPAJOFNEGA")->GetStaticField(0x1340);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FNPAJOFNEGA")->GetStaticField(0x1341);
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
