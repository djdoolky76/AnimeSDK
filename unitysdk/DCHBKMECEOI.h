#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournDivisionEffectRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DCHBKMECEOI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1F608180)
#define DCHBKMECEOI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F608750)
#define DCHBKMECEOI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1F6082F0)
#define DCHBKMECEOI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1F607BF0)
#define DCHBKMECEOI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1F607E80)
#define DCHBKMECEOI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1F608390)
#define DCHBKMECEOI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1F6083E0)
#define DCHBKMECEOI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1F6081C0)
#define DCHBKMECEOI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1F607E20)
#define DCHBKMECEOI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1F607FF0)
#define DCHBKMECEOI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1F608250)
#define DCHBKMECEOI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1F607B70)

inline static constexpr unsigned int DCHBKMECEOI_TypeDefinitionIndex = 15107;

	class DCHBKMECEOI : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DCHBKMECEOI")->GetStaticField(0x3A800);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDivisionEffectRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDivisionEffectRow*>**)UnitySDK::FromName("", "DCHBKMECEOI")->GetStaticField(0x3A808);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DCHBKMECEOI")->GetStaticField(0x3A810);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DCHBKMECEOI")->GetStaticField(0xBB00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DCHBKMECEOI")->GetStaticField(0xBB01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCHBKMECEOI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDivisionEffectRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDivisionEffectRow*>*(*)())((::PBYTE)hIl2Cpp + DCHBKMECEOI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DCHBKMECEOI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDivisionEffectRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDivisionEffectRow*>(*)())((::PBYTE)hIl2Cpp + DCHBKMECEOI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournDivisionEffectRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournDivisionEffectRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DCHBKMECEOI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DCHBKMECEOI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCHBKMECEOI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCHBKMECEOI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DCHBKMECEOI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DCHBKMECEOI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DCHBKMECEOI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournDivisionEffectRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournDivisionEffectRow*))((::PBYTE)hIl2Cpp + DCHBKMECEOI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
