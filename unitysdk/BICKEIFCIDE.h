#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeV2DmgLimitRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BICKEIFCIDE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D806430)
#define BICKEIFCIDE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D806A00)
#define BICKEIFCIDE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D8065A0)
#define BICKEIFCIDE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D805EA0)
#define BICKEIFCIDE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D806130)
#define BICKEIFCIDE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D806640)
#define BICKEIFCIDE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D806690)
#define BICKEIFCIDE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D806470)
#define BICKEIFCIDE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D8060D0)
#define BICKEIFCIDE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D8062A0)
#define BICKEIFCIDE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D806500)
#define BICKEIFCIDE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D805E20)

inline static constexpr unsigned int BICKEIFCIDE_TypeDefinitionIndex = 11957;

	class BICKEIFCIDE : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BICKEIFCIDE")->GetStaticField(0x35960);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BICKEIFCIDE")->GetStaticField(0x35968);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2DmgLimitRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2DmgLimitRow*>**)UnitySDK::FromName("", "BICKEIFCIDE")->GetStaticField(0x35970);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BICKEIFCIDE")->GetStaticField(0xB4D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BICKEIFCIDE")->GetStaticField(0xB4D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BICKEIFCIDE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2DmgLimitRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2DmgLimitRow*>*(*)())((::PBYTE)hIl2Cpp + BICKEIFCIDE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BICKEIFCIDE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2DmgLimitRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2DmgLimitRow*>(*)())((::PBYTE)hIl2Cpp + BICKEIFCIDE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeV2DmgLimitRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MatchThreeV2DmgLimitRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BICKEIFCIDE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BICKEIFCIDE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BICKEIFCIDE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BICKEIFCIDE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BICKEIFCIDE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BICKEIFCIDE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BICKEIFCIDE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MatchThreeV2DmgLimitRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeV2DmgLimitRow*))((::PBYTE)hIl2Cpp + BICKEIFCIDE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
