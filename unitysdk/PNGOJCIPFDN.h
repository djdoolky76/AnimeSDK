#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceTitleRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNGOJCIPFDN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D30E590)
#define PNGOJCIPFDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D30EB10)
#define PNGOJCIPFDN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D30E700)
#define PNGOJCIPFDN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D30E080)
#define PNGOJCIPFDN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D30E310)
#define PNGOJCIPFDN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D30E7A0)
#define PNGOJCIPFDN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D30E7F0)
#define PNGOJCIPFDN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D30E5D0)
#define PNGOJCIPFDN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D30E2B0)
#define PNGOJCIPFDN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D30E440)
#define PNGOJCIPFDN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D30E660)
#define PNGOJCIPFDN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D30E000)

inline static constexpr unsigned int PNGOJCIPFDN_TypeDefinitionIndex = 11013;

	class PNGOJCIPFDN : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PNGOJCIPFDN")->GetStaticField(0x46730);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceTitleRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceTitleRow*>**)UnitySDK::FromName("", "PNGOJCIPFDN")->GetStaticField(0x46738);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PNGOJCIPFDN")->GetStaticField(0x46740);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PNGOJCIPFDN")->GetStaticField(0x10CC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PNGOJCIPFDN")->GetStaticField(0x10CC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNGOJCIPFDN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceTitleRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceTitleRow*>*(*)())((::PBYTE)hIl2Cpp + PNGOJCIPFDN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PNGOJCIPFDN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceTitleRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceTitleRow*>(*)())((::PBYTE)hIl2Cpp + PNGOJCIPFDN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::CakeRaceTitleRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceTitleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PNGOJCIPFDN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PNGOJCIPFDN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNGOJCIPFDN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNGOJCIPFDN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PNGOJCIPFDN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNGOJCIPFDN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PNGOJCIPFDN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::CakeRaceTitleRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CakeRaceTitleRow*))((::PBYTE)hIl2Cpp + PNGOJCIPFDN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
