#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSeasonGuideQuestConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IHJEAAOHNFI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E6CC2C0)
#define IHJEAAOHNFI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6CC840)
#define IHJEAAOHNFI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E6CC430)
#define IHJEAAOHNFI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E6CBD70)
#define IHJEAAOHNFI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E6CC000)
#define IHJEAAOHNFI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E6CC4D0)
#define IHJEAAOHNFI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E6CC520)
#define IHJEAAOHNFI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E6CC300)
#define IHJEAAOHNFI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E6CBFA0)
#define IHJEAAOHNFI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E6CC130)
#define IHJEAAOHNFI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E6CC390)
#define IHJEAAOHNFI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E6CBCF0)

inline static constexpr unsigned int IHJEAAOHNFI_TypeDefinitionIndex = 13691;

	class IHJEAAOHNFI : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IHJEAAOHNFI")->GetStaticField(0x1F9E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonGuideQuestConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonGuideQuestConfigRow*>**)UnitySDK::FromName("", "IHJEAAOHNFI")->GetStaticField(0x1F9E8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IHJEAAOHNFI")->GetStaticField(0x1F9F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IHJEAAOHNFI")->GetStaticField(0x6AE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IHJEAAOHNFI")->GetStaticField(0x6AE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHJEAAOHNFI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonGuideQuestConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonGuideQuestConfigRow*>*(*)())((::PBYTE)hIl2Cpp + IHJEAAOHNFI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IHJEAAOHNFI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonGuideQuestConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonGuideQuestConfigRow*>(*)())((::PBYTE)hIl2Cpp + IHJEAAOHNFI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightSeasonGuideQuestConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightSeasonGuideQuestConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IHJEAAOHNFI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IHJEAAOHNFI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHJEAAOHNFI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHJEAAOHNFI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IHJEAAOHNFI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IHJEAAOHNFI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IHJEAAOHNFI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightSeasonGuideQuestConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSeasonGuideQuestConfigRow*))((::PBYTE)hIl2Cpp + IHJEAAOHNFI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
