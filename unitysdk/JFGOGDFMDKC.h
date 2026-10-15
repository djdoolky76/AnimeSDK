#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GridFightTraitSrcType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleChooseRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JFGOGDFMDKC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0257F0)
#define JFGOGDFMDKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D025E20)
#define JFGOGDFMDKC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D025960)
#define JFGOGDFMDKC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0251E0)
#define JFGOGDFMDKC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D025470)
#define JFGOGDFMDKC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D025A00)
#define JFGOGDFMDKC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D025A50)
#define JFGOGDFMDKC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D025830)
#define JFGOGDFMDKC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D025410)
#define JFGOGDFMDKC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0255E0)
#define JFGOGDFMDKC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0258C0)
#define JFGOGDFMDKC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D025160)

inline static constexpr unsigned int JFGOGDFMDKC_TypeDefinitionIndex = 13692;

	class JFGOGDFMDKC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleChooseRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleChooseRow*>**)UnitySDK::FromName("", "JFGOGDFMDKC")->GetStaticField(0x2D660);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JFGOGDFMDKC")->GetStaticField(0x2D668);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JFGOGDFMDKC")->GetStaticField(0x2D670);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JFGOGDFMDKC")->GetStaticField(0x93F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JFGOGDFMDKC")->GetStaticField(0x93F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFGOGDFMDKC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleChooseRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleChooseRow*>*(*)())((::PBYTE)hIl2Cpp + JFGOGDFMDKC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JFGOGDFMDKC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleChooseRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleChooseRow*>(*)())((::PBYTE)hIl2Cpp + JFGOGDFMDKC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightRoleChooseRow* LMBKNCAIDLC(::System::UInt32 a1, ::RPG::GameCore::GridFightTraitSrcType a2, ::System::UInt32 a3)
		{
			return ((::RPG::GameCore::GridFightRoleChooseRow*(*)(::System::UInt32, ::RPG::GameCore::GridFightTraitSrcType, ::System::UInt32))((::PBYTE)hIl2Cpp + JFGOGDFMDKC_LMBKNCAIDLC_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JFGOGDFMDKC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFGOGDFMDKC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFGOGDFMDKC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JFGOGDFMDKC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JFGOGDFMDKC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JFGOGDFMDKC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightRoleChooseRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightRoleChooseRow*))((::PBYTE)hIl2Cpp + JFGOGDFMDKC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
