#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyEventEffectRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNDIPHHBLPK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1D52A0)
#define MNDIPHHBLPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1D5870)
#define MNDIPHHBLPK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1D5410)
#define MNDIPHHBLPK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1D4D10)
#define MNDIPHHBLPK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1D4FA0)
#define MNDIPHHBLPK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1D54B0)
#define MNDIPHHBLPK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1D5500)
#define MNDIPHHBLPK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1D52E0)
#define MNDIPHHBLPK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1D4F40)
#define MNDIPHHBLPK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1D5110)
#define MNDIPHHBLPK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1D5370)
#define MNDIPHHBLPK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1D4C90)

inline static constexpr unsigned int MNDIPHHBLPK_TypeDefinitionIndex = 12042;

	class MNDIPHHBLPK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyEventEffectRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyEventEffectRow*>**)UnitySDK::FromName("", "MNDIPHHBLPK")->GetStaticField(0x2A9C0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MNDIPHHBLPK")->GetStaticField(0x2A9C8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MNDIPHHBLPK")->GetStaticField(0x2A9D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MNDIPHHBLPK")->GetStaticField(0x8590);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MNDIPHHBLPK")->GetStaticField(0x8591);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNDIPHHBLPK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyEventEffectRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyEventEffectRow*>*(*)())((::PBYTE)hIl2Cpp + MNDIPHHBLPK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MNDIPHHBLPK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyEventEffectRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyEventEffectRow*>(*)())((::PBYTE)hIl2Cpp + MNDIPHHBLPK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyEventEffectRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MonopolyEventEffectRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MNDIPHHBLPK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MNDIPHHBLPK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNDIPHHBLPK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNDIPHHBLPK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MNDIPHHBLPK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MNDIPHHBLPK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MNDIPHHBLPK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MonopolyEventEffectRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyEventEffectRow*))((::PBYTE)hIl2Cpp + MNDIPHHBLPK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
