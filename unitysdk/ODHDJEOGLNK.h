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

#define ODHDJEOGLNK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2289E0)
#define ODHDJEOGLNK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D228F60)
#define ODHDJEOGLNK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D228B50)
#define ODHDJEOGLNK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D228490)
#define ODHDJEOGLNK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D228720)
#define ODHDJEOGLNK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D228BF0)
#define ODHDJEOGLNK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D228C40)
#define ODHDJEOGLNK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D228A20)
#define ODHDJEOGLNK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2286C0)
#define ODHDJEOGLNK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D228890)
#define ODHDJEOGLNK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D228AB0)
#define ODHDJEOGLNK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D228410)

inline static constexpr unsigned int ODHDJEOGLNK_TypeDefinitionIndex = 10913;

	class ODHDJEOGLNK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideTrainerLevelRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideTrainerLevelRow*>**)UnitySDK::FromName("", "ODHDJEOGLNK")->GetStaticField(0x443D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ODHDJEOGLNK")->GetStaticField(0x443D8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ODHDJEOGLNK")->GetStaticField(0x443E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ODHDJEOGLNK")->GetStaticField(0x10230);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ODHDJEOGLNK")->GetStaticField(0x10231);
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
