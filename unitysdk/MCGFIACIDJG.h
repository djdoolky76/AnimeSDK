#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityVoracityInvasionProgressBuffRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MCGFIACIDJG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D13BF80)
#define MCGFIACIDJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D13C620)
#define MCGFIACIDJG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D13C170)
#define MCGFIACIDJG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D13B880)
#define MCGFIACIDJG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D13BBE0)
#define MCGFIACIDJG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D13C240)
#define MCGFIACIDJG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D13C2B0)
#define MCGFIACIDJG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D13BFE0)
#define MCGFIACIDJG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D13BB60)
#define MCGFIACIDJG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D13BD90)
#define MCGFIACIDJG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D13C0A0)
#define MCGFIACIDJG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D13B770)

inline static constexpr unsigned int MCGFIACIDJG_TypeDefinitionIndex = 12545;

	class MCGFIACIDJG : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MCGFIACIDJG")->GetStaticField(0x47AB0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityVoracityInvasionProgressBuffRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityVoracityInvasionProgressBuffRow*>**)UnitySDK::FromName("", "MCGFIACIDJG")->GetStaticField(0x47AB8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MCGFIACIDJG")->GetStaticField(0x47AC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MCGFIACIDJG")->GetStaticField(0x11070);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MCGFIACIDJG")->GetStaticField(0x11071);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCGFIACIDJG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityVoracityInvasionProgressBuffRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityVoracityInvasionProgressBuffRow*>*(*)())((::PBYTE)hIl2Cpp + MCGFIACIDJG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MCGFIACIDJG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityVoracityInvasionProgressBuffRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityVoracityInvasionProgressBuffRow*>(*)())((::PBYTE)hIl2Cpp + MCGFIACIDJG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityVoracityInvasionProgressBuffRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityVoracityInvasionProgressBuffRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MCGFIACIDJG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MCGFIACIDJG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCGFIACIDJG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCGFIACIDJG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MCGFIACIDJG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MCGFIACIDJG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MCGFIACIDJG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityVoracityInvasionProgressBuffRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityVoracityInvasionProgressBuffRow*))((::PBYTE)hIl2Cpp + MCGFIACIDJG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
