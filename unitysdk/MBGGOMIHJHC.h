#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ILBattleAvatarConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MBGGOMIHJHC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D133B80)
#define MBGGOMIHJHC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D134100)
#define MBGGOMIHJHC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D133CF0)
#define MBGGOMIHJHC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D133630)
#define MBGGOMIHJHC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1338C0)
#define MBGGOMIHJHC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D133D90)
#define MBGGOMIHJHC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D133DE0)
#define MBGGOMIHJHC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D133BC0)
#define MBGGOMIHJHC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D133860)
#define MBGGOMIHJHC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1339F0)
#define MBGGOMIHJHC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D133C50)
#define MBGGOMIHJHC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1335B0)

inline static constexpr unsigned int MBGGOMIHJHC_TypeDefinitionIndex = 13780;

	class MBGGOMIHJHC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarConfigRow*>**)UnitySDK::FromName("", "MBGGOMIHJHC")->GetStaticField(0x47270);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MBGGOMIHJHC")->GetStaticField(0x47278);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MBGGOMIHJHC")->GetStaticField(0x47280);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MBGGOMIHJHC")->GetStaticField(0x10F40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MBGGOMIHJHC")->GetStaticField(0x10F41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBGGOMIHJHC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MBGGOMIHJHC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MBGGOMIHJHC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILBattleAvatarConfigRow*>(*)())((::PBYTE)hIl2Cpp + MBGGOMIHJHC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ILBattleAvatarConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ILBattleAvatarConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MBGGOMIHJHC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MBGGOMIHJHC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBGGOMIHJHC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBGGOMIHJHC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MBGGOMIHJHC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MBGGOMIHJHC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MBGGOMIHJHC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ILBattleAvatarConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ILBattleAvatarConfigRow*))((::PBYTE)hIl2Cpp + MBGGOMIHJHC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
