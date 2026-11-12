#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AetherDivideTrainerLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ODHDJEOGLNK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E45CC70)
#define ODHDJEOGLNK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E45D1F0)
#define ODHDJEOGLNK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E45CDE0)
#define ODHDJEOGLNK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E45C720)
#define ODHDJEOGLNK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E45C9B0)
#define ODHDJEOGLNK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E45CE80)
#define ODHDJEOGLNK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E45CED0)
#define ODHDJEOGLNK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E45CCB0)
#define ODHDJEOGLNK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E45C950)
#define ODHDJEOGLNK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E45CB20)
#define ODHDJEOGLNK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E45CD40)
#define ODHDJEOGLNK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E45C6A0)

inline static constexpr unsigned int ODHDJEOGLNK_TypeDefinitionIndex = 10929;

	class ODHDJEOGLNK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ODHDJEOGLNK")->GetStaticField(0x4EB80);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ODHDJEOGLNK")->GetStaticField(0x4EB88);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideTrainerLevelRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideTrainerLevelRow*>**)UnitySDK::FromName("", "ODHDJEOGLNK")->GetStaticField(0x4EB90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ODHDJEOGLNK")->GetStaticField(0xFBA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ODHDJEOGLNK")->GetStaticField(0xFBA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODHDJEOGLNK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideTrainerLevelRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideTrainerLevelRow*>*(*)())((::PBYTE)hIl2Cpp + ODHDJEOGLNK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ODHDJEOGLNK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideTrainerLevelRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideTrainerLevelRow*>(*)())((::PBYTE)hIl2Cpp + ODHDJEOGLNK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AetherDivideTrainerLevelRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AetherDivideTrainerLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ODHDJEOGLNK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ODHDJEOGLNK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODHDJEOGLNK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODHDJEOGLNK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ODHDJEOGLNK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ODHDJEOGLNK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ODHDJEOGLNK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AetherDivideTrainerLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AetherDivideTrainerLevelRow*))((::PBYTE)hIl2Cpp + ODHDJEOGLNK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
