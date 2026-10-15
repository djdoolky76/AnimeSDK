#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSubTraitBasicInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DEBPCLCBKEI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCE1AA0)
#define DEBPCLCBKEI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCE2070)
#define DEBPCLCBKEI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCE1C10)
#define DEBPCLCBKEI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCE1510)
#define DEBPCLCBKEI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCE17A0)
#define DEBPCLCBKEI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCE1CB0)
#define DEBPCLCBKEI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCE1D00)
#define DEBPCLCBKEI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCE1AE0)
#define DEBPCLCBKEI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCE1740)
#define DEBPCLCBKEI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCE1910)
#define DEBPCLCBKEI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCE1B70)
#define DEBPCLCBKEI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCE1490)

inline static constexpr unsigned int DEBPCLCBKEI_TypeDefinitionIndex = 13685;

	class DEBPCLCBKEI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSubTraitBasicInfoRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSubTraitBasicInfoRow*>**)UnitySDK::FromName("", "DEBPCLCBKEI")->GetStaticField(0x44C70);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DEBPCLCBKEI")->GetStaticField(0x44C78);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DEBPCLCBKEI")->GetStaticField(0x44C80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DEBPCLCBKEI")->GetStaticField(0x103E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DEBPCLCBKEI")->GetStaticField(0x103E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEBPCLCBKEI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSubTraitBasicInfoRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSubTraitBasicInfoRow*>*(*)())((::PBYTE)hIl2Cpp + DEBPCLCBKEI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DEBPCLCBKEI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSubTraitBasicInfoRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSubTraitBasicInfoRow*>(*)())((::PBYTE)hIl2Cpp + DEBPCLCBKEI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightSubTraitBasicInfoRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightSubTraitBasicInfoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DEBPCLCBKEI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DEBPCLCBKEI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEBPCLCBKEI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEBPCLCBKEI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DEBPCLCBKEI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DEBPCLCBKEI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DEBPCLCBKEI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightSubTraitBasicInfoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSubTraitBasicInfoRow*))((::PBYTE)hIl2Cpp + DEBPCLCBKEI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
