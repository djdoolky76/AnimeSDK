#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitEffectIdConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DFALBMJNBBB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E7DA0C0)
#define DFALBMJNBBB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7DA690)
#define DFALBMJNBBB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E7DA230)
#define DFALBMJNBBB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E7D9B30)
#define DFALBMJNBBB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E7D9DC0)
#define DFALBMJNBBB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E7DA2D0)
#define DFALBMJNBBB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E7DA320)
#define DFALBMJNBBB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E7DA100)
#define DFALBMJNBBB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E7D9D60)
#define DFALBMJNBBB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E7D9F30)
#define DFALBMJNBBB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E7DA190)
#define DFALBMJNBBB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E7D9AB0)

inline static constexpr unsigned int DFALBMJNBBB_TypeDefinitionIndex = 13802;

	class DFALBMJNBBB : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DFALBMJNBBB")->GetStaticField(0x3CAA0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEffectIdConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEffectIdConfigRow*>**)UnitySDK::FromName("", "DFALBMJNBBB")->GetStaticField(0x3CAA8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DFALBMJNBBB")->GetStaticField(0x3CAB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DFALBMJNBBB")->GetStaticField(0xC150);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DFALBMJNBBB")->GetStaticField(0xC151);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFALBMJNBBB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEffectIdConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEffectIdConfigRow*>*(*)())((::PBYTE)hIl2Cpp + DFALBMJNBBB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DFALBMJNBBB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEffectIdConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEffectIdConfigRow*>(*)())((::PBYTE)hIl2Cpp + DFALBMJNBBB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTraitEffectIdConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightTraitEffectIdConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DFALBMJNBBB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DFALBMJNBBB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFALBMJNBBB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFALBMJNBBB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DFALBMJNBBB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DFALBMJNBBB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DFALBMJNBBB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTraitEffectIdConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTraitEffectIdConfigRow*))((::PBYTE)hIl2Cpp + DFALBMJNBBB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
