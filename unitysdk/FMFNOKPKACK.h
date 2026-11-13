#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleServantStarConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FMFNOKPKACK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EA2C100)
#define FMFNOKPKACK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA2C700)
#define FMFNOKPKACK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EA2C270)
#define FMFNOKPKACK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EA2BB30)
#define FMFNOKPKACK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EA2BDC0)
#define FMFNOKPKACK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EA2C310)
#define FMFNOKPKACK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EA2C360)
#define FMFNOKPKACK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EA2C140)
#define FMFNOKPKACK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EA2BD60)
#define FMFNOKPKACK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EA2BF30)
#define FMFNOKPKACK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EA2C1D0)
#define FMFNOKPKACK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EA2BAB0)

inline static constexpr unsigned int FMFNOKPKACK_TypeDefinitionIndex = 13614;

	class FMFNOKPKACK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleServantStarConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleServantStarConfigRow*>**)UnitySDK::FromName("", "FMFNOKPKACK")->GetStaticField(0x9CD0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FMFNOKPKACK")->GetStaticField(0x9CD8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FMFNOKPKACK")->GetStaticField(0x9CE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FMFNOKPKACK")->GetStaticField(0xCA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FMFNOKPKACK")->GetStaticField(0xCA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMFNOKPKACK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleServantStarConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleServantStarConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FMFNOKPKACK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FMFNOKPKACK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleServantStarConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleServantStarConfigRow*>(*)())((::PBYTE)hIl2Cpp + FMFNOKPKACK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightRoleServantStarConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightRoleServantStarConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FMFNOKPKACK_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FMFNOKPKACK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMFNOKPKACK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMFNOKPKACK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FMFNOKPKACK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FMFNOKPKACK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FMFNOKPKACK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightRoleServantStarConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightRoleServantStarConfigRow*))((::PBYTE)hIl2Cpp + FMFNOKPKACK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
