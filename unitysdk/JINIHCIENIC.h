#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSPSilverWolfChooseConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JINIHCIENIC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E5AFCC0)
#define JINIHCIENIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B02C0)
#define JINIHCIENIC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E5AFE30)
#define JINIHCIENIC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E5AF6F0)
#define JINIHCIENIC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E5AF980)
#define JINIHCIENIC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E5AFED0)
#define JINIHCIENIC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E5AFF20)
#define JINIHCIENIC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E5AFD00)
#define JINIHCIENIC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E5AF920)
#define JINIHCIENIC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E5AFAF0)
#define JINIHCIENIC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E5AFD90)
#define JINIHCIENIC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E5AF670)

inline static constexpr unsigned int JINIHCIENIC_TypeDefinitionIndex = 13673;

	class JINIHCIENIC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JINIHCIENIC")->GetStaticField(0x36A90);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JINIHCIENIC")->GetStaticField(0x36A98);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSPSilverWolfChooseConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSPSilverWolfChooseConfigRow*>**)UnitySDK::FromName("", "JINIHCIENIC")->GetStaticField(0x36AA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JINIHCIENIC")->GetStaticField(0xAB40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JINIHCIENIC")->GetStaticField(0xAB41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JINIHCIENIC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSPSilverWolfChooseConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSPSilverWolfChooseConfigRow*>*(*)())((::PBYTE)hIl2Cpp + JINIHCIENIC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JINIHCIENIC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSPSilverWolfChooseConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSPSilverWolfChooseConfigRow*>(*)())((::PBYTE)hIl2Cpp + JINIHCIENIC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightSPSilverWolfChooseConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightSPSilverWolfChooseConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JINIHCIENIC_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JINIHCIENIC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JINIHCIENIC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JINIHCIENIC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JINIHCIENIC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JINIHCIENIC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JINIHCIENIC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightSPSilverWolfChooseConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSPSilverWolfChooseConfigRow*))((::PBYTE)hIl2Cpp + JINIHCIENIC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
