#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTrailblazeGoodsConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PAELMIHPNCB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E4C9A70)
#define PAELMIHPNCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4CA040)
#define PAELMIHPNCB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E4C9BE0)
#define PAELMIHPNCB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E4C94E0)
#define PAELMIHPNCB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E4C9770)
#define PAELMIHPNCB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E4C9C80)
#define PAELMIHPNCB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E4C9CD0)
#define PAELMIHPNCB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E4C9AB0)
#define PAELMIHPNCB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E4C9710)
#define PAELMIHPNCB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E4C98E0)
#define PAELMIHPNCB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E4C9B40)
#define PAELMIHPNCB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E4C9460)

inline static constexpr unsigned int PAELMIHPNCB_TypeDefinitionIndex = 13851;

	class PAELMIHPNCB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PAELMIHPNCB")->GetStaticField(0x350C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTrailblazeGoodsConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTrailblazeGoodsConfigRow*>**)UnitySDK::FromName("", "PAELMIHPNCB")->GetStaticField(0x350C8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PAELMIHPNCB")->GetStaticField(0x350D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PAELMIHPNCB")->GetStaticField(0xB480);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PAELMIHPNCB")->GetStaticField(0xB481);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAELMIHPNCB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTrailblazeGoodsConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTrailblazeGoodsConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PAELMIHPNCB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PAELMIHPNCB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTrailblazeGoodsConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTrailblazeGoodsConfigRow*>(*)())((::PBYTE)hIl2Cpp + PAELMIHPNCB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTrailblazeGoodsConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightTrailblazeGoodsConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PAELMIHPNCB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PAELMIHPNCB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAELMIHPNCB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAELMIHPNCB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PAELMIHPNCB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PAELMIHPNCB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PAELMIHPNCB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTrailblazeGoodsConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTrailblazeGoodsConfigRow*))((::PBYTE)hIl2Cpp + PAELMIHPNCB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
