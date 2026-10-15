#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvertisingBoardConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MPPAKKFLCMM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1B5E00)
#define MPPAKKFLCMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1B63D0)
#define MPPAKKFLCMM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1B5F70)
#define MPPAKKFLCMM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1B5870)
#define MPPAKKFLCMM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1B5B00)
#define MPPAKKFLCMM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1B6010)
#define MPPAKKFLCMM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1B6060)
#define MPPAKKFLCMM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1B5E40)
#define MPPAKKFLCMM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1B5AA0)
#define MPPAKKFLCMM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1B5C70)
#define MPPAKKFLCMM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1B5ED0)
#define MPPAKKFLCMM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1B57F0)

inline static constexpr unsigned int MPPAKKFLCMM_TypeDefinitionIndex = 12592;

	class MPPAKKFLCMM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AdvertisingBoardConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AdvertisingBoardConfigRow*>**)UnitySDK::FromName("", "MPPAKKFLCMM")->GetStaticField(0x3DC00);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MPPAKKFLCMM")->GetStaticField(0x3DC08);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MPPAKKFLCMM")->GetStaticField(0x3DC10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MPPAKKFLCMM")->GetStaticField(0xE910);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MPPAKKFLCMM")->GetStaticField(0xE911);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPPAKKFLCMM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AdvertisingBoardConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AdvertisingBoardConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MPPAKKFLCMM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MPPAKKFLCMM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AdvertisingBoardConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AdvertisingBoardConfigRow*>(*)())((::PBYTE)hIl2Cpp + MPPAKKFLCMM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AdvertisingBoardConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AdvertisingBoardConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MPPAKKFLCMM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MPPAKKFLCMM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPPAKKFLCMM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPPAKKFLCMM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MPPAKKFLCMM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MPPAKKFLCMM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MPPAKKFLCMM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AdvertisingBoardConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AdvertisingBoardConfigRow*))((::PBYTE)hIl2Cpp + MPPAKKFLCMM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
