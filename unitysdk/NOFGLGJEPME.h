#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TalkRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NOFGLGJEPME_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E76F050)
#define NOFGLGJEPME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5EC830)
#define NOFGLGJEPME_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E76F3F0)
#define NOFGLGJEPME_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E76F090)
#define NOFGLGJEPME_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E5EC530)
#define NOFGLGJEPME_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E76F490)
#define NOFGLGJEPME_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E76F4E0)
#define NOFGLGJEPME_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E76F2C0)
#define NOFGLGJEPME_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E5EC4D0)
#define NOFGLGJEPME_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E5EC6A0)
#define NOFGLGJEPME_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E76F350)
#define NOFGLGJEPME_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E76F850)

inline static constexpr unsigned int NOFGLGJEPME_TypeDefinitionIndex = 15373;

	class NOFGLGJEPME : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NOFGLGJEPME")->GetStaticField(0x53F50);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NOFGLGJEPME")->GetStaticField(0x53F58);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkRewardRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkRewardRow*>**)UnitySDK::FromName("", "NOFGLGJEPME")->GetStaticField(0x53F60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NOFGLGJEPME")->GetStaticField(0x12010);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NOFGLGJEPME")->GetStaticField(0x12011);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOFGLGJEPME_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NOFGLGJEPME_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOFGLGJEPME_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOFGLGJEPME_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NOFGLGJEPME_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NOFGLGJEPME_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NOFGLGJEPME_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TalkRewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TalkRewardRow*))((::PBYTE)hIl2Cpp + NOFGLGJEPME_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkRewardRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkRewardRow*>*(*)())((::PBYTE)hIl2Cpp + NOFGLGJEPME_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NOFGLGJEPME_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkRewardRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkRewardRow*>(*)())((::PBYTE)hIl2Cpp + NOFGLGJEPME_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TalkRewardRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TalkRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NOFGLGJEPME_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
