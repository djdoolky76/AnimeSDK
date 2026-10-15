#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeV2PVPScoreRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ANIHLCGEHLI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCE4CC0)
#define ANIHLCGEHLI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCE5240)
#define ANIHLCGEHLI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCE4E30)
#define ANIHLCGEHLI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCE4770)
#define ANIHLCGEHLI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCE4A00)
#define ANIHLCGEHLI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCE4ED0)
#define ANIHLCGEHLI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCE4F20)
#define ANIHLCGEHLI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCE4D00)
#define ANIHLCGEHLI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCE49A0)
#define ANIHLCGEHLI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCE4B30)
#define ANIHLCGEHLI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCE4D90)
#define ANIHLCGEHLI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCE46F0)

inline static constexpr unsigned int ANIHLCGEHLI_TypeDefinitionIndex = 11953;

	class ANIHLCGEHLI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ANIHLCGEHLI")->GetStaticField(0x3C330);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPScoreRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPScoreRow*>**)UnitySDK::FromName("", "ANIHLCGEHLI")->GetStaticField(0x3C338);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ANIHLCGEHLI")->GetStaticField(0x3C340);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ANIHLCGEHLI")->GetStaticField(0xCDE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ANIHLCGEHLI")->GetStaticField(0xCDE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANIHLCGEHLI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPScoreRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPScoreRow*>*(*)())((::PBYTE)hIl2Cpp + ANIHLCGEHLI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ANIHLCGEHLI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPScoreRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2PVPScoreRow*>(*)())((::PBYTE)hIl2Cpp + ANIHLCGEHLI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeV2PVPScoreRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MatchThreeV2PVPScoreRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ANIHLCGEHLI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ANIHLCGEHLI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANIHLCGEHLI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANIHLCGEHLI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ANIHLCGEHLI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ANIHLCGEHLI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ANIHLCGEHLI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MatchThreeV2PVPScoreRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeV2PVPScoreRow*))((::PBYTE)hIl2Cpp + ANIHLCGEHLI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
