#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitBEOverrideConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MECGENOFGDM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D120A60)
#define MECGENOFGDM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D121060)
#define MECGENOFGDM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D120BD0)
#define MECGENOFGDM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D120490)
#define MECGENOFGDM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D120720)
#define MECGENOFGDM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D120C70)
#define MECGENOFGDM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D120CC0)
#define MECGENOFGDM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D120AA0)
#define MECGENOFGDM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1206C0)
#define MECGENOFGDM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D120890)
#define MECGENOFGDM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D120B30)
#define MECGENOFGDM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D120410)

inline static constexpr unsigned int MECGENOFGDM_TypeDefinitionIndex = 13708;

	class MECGENOFGDM : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MECGENOFGDM")->GetStaticField(0x42B00);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MECGENOFGDM")->GetStaticField(0x42B08);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBEOverrideConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBEOverrideConfigRow*>**)UnitySDK::FromName("", "MECGENOFGDM")->GetStaticField(0x42B10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MECGENOFGDM")->GetStaticField(0xFD50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MECGENOFGDM")->GetStaticField(0xFD51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MECGENOFGDM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBEOverrideConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBEOverrideConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MECGENOFGDM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MECGENOFGDM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBEOverrideConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBEOverrideConfigRow*>(*)())((::PBYTE)hIl2Cpp + MECGENOFGDM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTraitBEOverrideConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightTraitBEOverrideConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MECGENOFGDM_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MECGENOFGDM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MECGENOFGDM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MECGENOFGDM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MECGENOFGDM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MECGENOFGDM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MECGENOFGDM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTraitBEOverrideConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTraitBEOverrideConfigRow*))((::PBYTE)hIl2Cpp + MECGENOFGDM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
