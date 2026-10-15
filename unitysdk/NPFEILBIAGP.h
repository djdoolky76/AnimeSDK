#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BoxingClubActivityQuestConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPFEILBIAGP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D217D00)
#define NPFEILBIAGP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D218280)
#define NPFEILBIAGP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D217E70)
#define NPFEILBIAGP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2177B0)
#define NPFEILBIAGP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D217A40)
#define NPFEILBIAGP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D217F10)
#define NPFEILBIAGP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D217F60)
#define NPFEILBIAGP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D217D40)
#define NPFEILBIAGP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2179E0)
#define NPFEILBIAGP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D217B70)
#define NPFEILBIAGP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D217DD0)
#define NPFEILBIAGP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D217730)

inline static constexpr unsigned int NPFEILBIAGP_TypeDefinitionIndex = 12923;

	class NPFEILBIAGP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubActivityQuestConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubActivityQuestConfigRow*>**)UnitySDK::FromName("", "NPFEILBIAGP")->GetStaticField(0x42810);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NPFEILBIAGP")->GetStaticField(0x42818);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NPFEILBIAGP")->GetStaticField(0x42820);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NPFEILBIAGP")->GetStaticField(0xFCA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NPFEILBIAGP")->GetStaticField(0xFCA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPFEILBIAGP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubActivityQuestConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubActivityQuestConfigRow*>*(*)())((::PBYTE)hIl2Cpp + NPFEILBIAGP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPFEILBIAGP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubActivityQuestConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubActivityQuestConfigRow*>(*)())((::PBYTE)hIl2Cpp + NPFEILBIAGP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::BoxingClubActivityQuestConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BoxingClubActivityQuestConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NPFEILBIAGP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NPFEILBIAGP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPFEILBIAGP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPFEILBIAGP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NPFEILBIAGP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPFEILBIAGP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NPFEILBIAGP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::BoxingClubActivityQuestConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::BoxingClubActivityQuestConfigRow*))((::PBYTE)hIl2Cpp + NPFEILBIAGP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
