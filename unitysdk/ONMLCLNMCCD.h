#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookEnergyRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ONMLCLNMCCD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E4ABE30)
#define ONMLCLNMCCD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4ACA10)
#define ONMLCLNMCCD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E4AC1D0)
#define ONMLCLNMCCD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E4ABE70)
#define ONMLCLNMCCD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E4AC710)
#define ONMLCLNMCCD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E4AC270)
#define ONMLCLNMCCD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E4AC2C0)
#define ONMLCLNMCCD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E4AC0A0)
#define ONMLCLNMCCD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E4AC6B0)
#define ONMLCLNMCCD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E4AC880)
#define ONMLCLNMCCD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E4AC130)
#define ONMLCLNMCCD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E4AC630)

inline static constexpr unsigned int ONMLCLNMCCD_TypeDefinitionIndex = 15416;

	class ONMLCLNMCCD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ONMLCLNMCCD")->GetStaticField(0x54050);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookEnergyRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookEnergyRow*>**)UnitySDK::FromName("", "ONMLCLNMCCD")->GetStaticField(0x54058);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ONMLCLNMCCD")->GetStaticField(0x54060);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ONMLCLNMCCD")->GetStaticField(0x10430);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ONMLCLNMCCD")->GetStaticField(0x10431);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONMLCLNMCCD_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ONMLCLNMCCD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONMLCLNMCCD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONMLCLNMCCD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ONMLCLNMCCD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ONMLCLNMCCD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ONMLCLNMCCD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TarotBookEnergyRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TarotBookEnergyRow*))((::PBYTE)hIl2Cpp + ONMLCLNMCCD_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookEnergyRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookEnergyRow*>*(*)())((::PBYTE)hIl2Cpp + ONMLCLNMCCD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ONMLCLNMCCD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookEnergyRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookEnergyRow*>(*)())((::PBYTE)hIl2Cpp + ONMLCLNMCCD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TarotBookEnergyRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TarotBookEnergyRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ONMLCLNMCCD_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
