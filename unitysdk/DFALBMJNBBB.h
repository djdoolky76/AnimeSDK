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

#define DFALBMJNBBB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD14080)
#define DFALBMJNBBB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD14650)
#define DFALBMJNBBB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD141F0)
#define DFALBMJNBBB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD13AF0)
#define DFALBMJNBBB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD13D80)
#define DFALBMJNBBB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD14290)
#define DFALBMJNBBB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD142E0)
#define DFALBMJNBBB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD140C0)
#define DFALBMJNBBB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD13D20)
#define DFALBMJNBBB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD13EF0)
#define DFALBMJNBBB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD14150)
#define DFALBMJNBBB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD13A70)

inline static constexpr unsigned int DFALBMJNBBB_TypeDefinitionIndex = 13675;

	class DFALBMJNBBB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DFALBMJNBBB")->GetStaticField(0x4BAA0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DFALBMJNBBB")->GetStaticField(0x4BAA8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEffectIdConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitEffectIdConfigRow*>**)UnitySDK::FromName("", "DFALBMJNBBB")->GetStaticField(0x4BAB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DFALBMJNBBB")->GetStaticField(0x11860);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DFALBMJNBBB")->GetStaticField(0x11861);
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
