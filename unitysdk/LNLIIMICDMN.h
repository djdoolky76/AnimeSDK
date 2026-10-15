#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightBinaryNodeRuleConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LNLIIMICDMN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0F0190)
#define LNLIIMICDMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0F0760)
#define LNLIIMICDMN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0F0300)
#define LNLIIMICDMN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0EFC00)
#define LNLIIMICDMN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0EFE90)
#define LNLIIMICDMN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0F03A0)
#define LNLIIMICDMN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0F03F0)
#define LNLIIMICDMN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0F01D0)
#define LNLIIMICDMN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0EFE30)
#define LNLIIMICDMN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0F0000)
#define LNLIIMICDMN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0F0260)
#define LNLIIMICDMN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0EFB80)

inline static constexpr unsigned int LNLIIMICDMN_TypeDefinitionIndex = 13620;

	class LNLIIMICDMN : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LNLIIMICDMN")->GetStaticField(0x3F190);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBinaryNodeRuleConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBinaryNodeRuleConfigRow*>**)UnitySDK::FromName("", "LNLIIMICDMN")->GetStaticField(0x3F198);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LNLIIMICDMN")->GetStaticField(0x3F1A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LNLIIMICDMN")->GetStaticField(0xEDE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LNLIIMICDMN")->GetStaticField(0xEDE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNLIIMICDMN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBinaryNodeRuleConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBinaryNodeRuleConfigRow*>*(*)())((::PBYTE)hIl2Cpp + LNLIIMICDMN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LNLIIMICDMN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBinaryNodeRuleConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBinaryNodeRuleConfigRow*>(*)())((::PBYTE)hIl2Cpp + LNLIIMICDMN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightBinaryNodeRuleConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightBinaryNodeRuleConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LNLIIMICDMN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LNLIIMICDMN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNLIIMICDMN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNLIIMICDMN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LNLIIMICDMN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LNLIIMICDMN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LNLIIMICDMN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightBinaryNodeRuleConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightBinaryNodeRuleConfigRow*))((::PBYTE)hIl2Cpp + LNLIIMICDMN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
