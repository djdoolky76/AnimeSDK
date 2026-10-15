#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveTechTreeRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FHNJDABDHDA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDF2ED0)
#define FHNJDABDHDA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDF3450)
#define FHNJDABDHDA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDF3040)
#define FHNJDABDHDA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDF2980)
#define FHNJDABDHDA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDF2C10)
#define FHNJDABDHDA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDF30E0)
#define FHNJDABDHDA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDF3130)
#define FHNJDABDHDA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDF2F10)
#define FHNJDABDHDA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDF2BB0)
#define FHNJDABDHDA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDF2D40)
#define FHNJDABDHDA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDF2FA0)
#define FHNJDABDHDA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDF2900)

inline static constexpr unsigned int FHNJDABDHDA_TypeDefinitionIndex = 11730;

	class FHNJDABDHDA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FHNJDABDHDA")->GetStaticField(0x135A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTechTreeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTechTreeRow*>**)UnitySDK::FromName("", "FHNJDABDHDA")->GetStaticField(0x135A8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "FHNJDABDHDA")->GetStaticField(0x135B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FHNJDABDHDA")->GetStaticField(0x4400);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FHNJDABDHDA")->GetStaticField(0x4401);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHNJDABDHDA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTechTreeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTechTreeRow*>*(*)())((::PBYTE)hIl2Cpp + FHNJDABDHDA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FHNJDABDHDA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTechTreeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTechTreeRow*>(*)())((::PBYTE)hIl2Cpp + FHNJDABDHDA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveTechTreeRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveTechTreeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FHNJDABDHDA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FHNJDABDHDA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHNJDABDHDA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHNJDABDHDA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FHNJDABDHDA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FHNJDABDHDA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FHNJDABDHDA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveTechTreeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveTechTreeRow*))((::PBYTE)hIl2Cpp + FHNJDABDHDA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
