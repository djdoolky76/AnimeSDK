#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicScepterDisplayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MDCHLHAKMNJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D143150)
#define MDCHLHAKMNJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1442B0)
#define MDCHLHAKMNJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1432C0)
#define MDCHLHAKMNJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D142BC0)
#define MDCHLHAKMNJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D142E50)
#define MDCHLHAKMNJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D143EF0)
#define MDCHLHAKMNJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D143F40)
#define MDCHLHAKMNJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D143190)
#define MDCHLHAKMNJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D142DF0)
#define MDCHLHAKMNJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D142FC0)
#define MDCHLHAKMNJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D143220)
#define MDCHLHAKMNJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D142B40)

inline static constexpr unsigned int MDCHLHAKMNJ_TypeDefinitionIndex = 14883;

	class MDCHLHAKMNJ : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MDCHLHAKMNJ")->GetStaticField(0x48510);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterDisplayRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterDisplayRow*>**)UnitySDK::FromName("", "MDCHLHAKMNJ")->GetStaticField(0x48518);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MDCHLHAKMNJ")->GetStaticField(0x48520);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MDCHLHAKMNJ")->GetStaticField(0x11190);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MDCHLHAKMNJ")->GetStaticField(0x11191);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDCHLHAKMNJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterDisplayRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + MDCHLHAKMNJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MDCHLHAKMNJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterDisplayRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterDisplayRow*>(*)())((::PBYTE)hIl2Cpp + MDCHLHAKMNJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueMagicScepterDisplayRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueMagicScepterDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MDCHLHAKMNJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MDCHLHAKMNJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDCHLHAKMNJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDCHLHAKMNJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MDCHLHAKMNJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MDCHLHAKMNJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MDCHLHAKMNJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueMagicScepterDisplayRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMagicScepterDisplayRow*))((::PBYTE)hIl2Cpp + MDCHLHAKMNJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
