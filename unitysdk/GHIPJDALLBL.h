#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournMiracleGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GHIPJDALLBL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E63B820)
#define GHIPJDALLBL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E63BDF0)
#define GHIPJDALLBL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E63B990)
#define GHIPJDALLBL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E63B290)
#define GHIPJDALLBL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E63B520)
#define GHIPJDALLBL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E63BA30)
#define GHIPJDALLBL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E63BA80)
#define GHIPJDALLBL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E63B860)
#define GHIPJDALLBL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E63B4C0)
#define GHIPJDALLBL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E63B690)
#define GHIPJDALLBL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E63B8F0)
#define GHIPJDALLBL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E63B210)

inline static constexpr unsigned int GHIPJDALLBL_TypeDefinitionIndex = 15178;

	class GHIPJDALLBL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiracleGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiracleGroupRow*>**)UnitySDK::FromName("", "GHIPJDALLBL")->GetStaticField(0xF8D0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GHIPJDALLBL")->GetStaticField(0xF8D8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GHIPJDALLBL")->GetStaticField(0xF8E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GHIPJDALLBL")->GetStaticField(0x32A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GHIPJDALLBL")->GetStaticField(0x32A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHIPJDALLBL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiracleGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiracleGroupRow*>*(*)())((::PBYTE)hIl2Cpp + GHIPJDALLBL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GHIPJDALLBL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiracleGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiracleGroupRow*>(*)())((::PBYTE)hIl2Cpp + GHIPJDALLBL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournMiracleGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournMiracleGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GHIPJDALLBL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GHIPJDALLBL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHIPJDALLBL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHIPJDALLBL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GHIPJDALLBL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GHIPJDALLBL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GHIPJDALLBL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournMiracleGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournMiracleGroupRow*))((::PBYTE)hIl2Cpp + GHIPJDALLBL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
