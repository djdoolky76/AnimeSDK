#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirEnemyDisplayConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MPNPJGKHJLN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1E2DE0)
#define MPNPJGKHJLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1E33B0)
#define MPNPJGKHJLN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1E2F50)
#define MPNPJGKHJLN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1E2850)
#define MPNPJGKHJLN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1E2AE0)
#define MPNPJGKHJLN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1E2FF0)
#define MPNPJGKHJLN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1E3040)
#define MPNPJGKHJLN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1E2E20)
#define MPNPJGKHJLN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1E2A80)
#define MPNPJGKHJLN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1E2C50)
#define MPNPJGKHJLN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1E2EB0)
#define MPNPJGKHJLN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1E27D0)

inline static constexpr unsigned int MPNPJGKHJLN_TypeDefinitionIndex = 12148;

	class MPNPJGKHJLN : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MPNPJGKHJLN")->GetStaticField(0x2BF30);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEnemyDisplayConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEnemyDisplayConfigRow*>**)UnitySDK::FromName("", "MPNPJGKHJLN")->GetStaticField(0x2BF38);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MPNPJGKHJLN")->GetStaticField(0x2BF40);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MPNPJGKHJLN")->GetStaticField(0x89C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MPNPJGKHJLN")->GetStaticField(0x89C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPNPJGKHJLN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEnemyDisplayConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEnemyDisplayConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MPNPJGKHJLN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MPNPJGKHJLN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEnemyDisplayConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEnemyDisplayConfigRow*>(*)())((::PBYTE)hIl2Cpp + MPNPJGKHJLN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PixAirEnemyDisplayConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PixAirEnemyDisplayConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MPNPJGKHJLN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MPNPJGKHJLN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPNPJGKHJLN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPNPJGKHJLN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MPNPJGKHJLN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MPNPJGKHJLN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MPNPJGKHJLN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PixAirEnemyDisplayConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PixAirEnemyDisplayConfigRow*))((::PBYTE)hIl2Cpp + MPNPJGKHJLN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
