#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SFXConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNHKOJHHECM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1D68B0)
#define MNHKOJHHECM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1D7490)
#define MNHKOJHHECM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1D6C50)
#define MNHKOJHHECM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1D68F0)
#define MNHKOJHHECM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1D7190)
#define MNHKOJHHECM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1D6CF0)
#define MNHKOJHHECM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1D6D40)
#define MNHKOJHHECM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1D6B20)
#define MNHKOJHHECM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1D7130)
#define MNHKOJHHECM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1D7300)
#define MNHKOJHHECM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1D6BB0)
#define MNHKOJHHECM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1D70B0)

inline static constexpr unsigned int MNHKOJHHECM_TypeDefinitionIndex = 15086;

	class MNHKOJHHECM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MNHKOJHHECM")->GetStaticField(0x2AA00);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SFXConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SFXConfigRow*>**)UnitySDK::FromName("", "MNHKOJHHECM")->GetStaticField(0x2AA08);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MNHKOJHHECM")->GetStaticField(0x2AA10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MNHKOJHHECM")->GetStaticField(0x85B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MNHKOJHHECM")->GetStaticField(0x85B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNHKOJHHECM_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MNHKOJHHECM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNHKOJHHECM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNHKOJHHECM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MNHKOJHHECM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MNHKOJHHECM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MNHKOJHHECM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SFXConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SFXConfigRow*))((::PBYTE)hIl2Cpp + MNHKOJHHECM_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SFXConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SFXConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MNHKOJHHECM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MNHKOJHHECM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SFXConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SFXConfigRow*>(*)())((::PBYTE)hIl2Cpp + MNHKOJHHECM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SFXConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SFXConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MNHKOJHHECM_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
