#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookCardPoolRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JJAJHAJGGJG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D009690)
#define JJAJHAJGGJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D00A1E0)
#define JJAJHAJGGJG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D009A30)
#define JJAJHAJGGJG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0096D0)
#define JJAJHAJGGJG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D009F20)
#define JJAJHAJGGJG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D009AD0)
#define JJAJHAJGGJG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D009B20)
#define JJAJHAJGGJG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D009900)
#define JJAJHAJGGJG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D009EC0)
#define JJAJHAJGGJG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D00A050)
#define JJAJHAJGGJG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D009990)
#define JJAJHAJGGJG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D009E40)

inline static constexpr unsigned int JJAJHAJGGJG_TypeDefinitionIndex = 15250;

	class JJAJHAJGGJG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardPoolRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardPoolRow*>**)UnitySDK::FromName("", "JJAJHAJGGJG")->GetStaticField(0x2ED40);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JJAJHAJGGJG")->GetStaticField(0x2ED48);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JJAJHAJGGJG")->GetStaticField(0x2ED50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JJAJHAJGGJG")->GetStaticField(0x9AA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JJAJHAJGGJG")->GetStaticField(0x9AA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJAJHAJGGJG_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JJAJHAJGGJG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJAJHAJGGJG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJAJHAJGGJG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JJAJHAJGGJG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JJAJHAJGGJG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JJAJHAJGGJG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TarotBookCardPoolRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TarotBookCardPoolRow*))((::PBYTE)hIl2Cpp + JJAJHAJGGJG_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardPoolRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardPoolRow*>*(*)())((::PBYTE)hIl2Cpp + JJAJHAJGGJG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JJAJHAJGGJG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardPoolRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardPoolRow*>(*)())((::PBYTE)hIl2Cpp + JJAJHAJGGJG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TarotBookCardPoolRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TarotBookCardPoolRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JJAJHAJGGJG_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
