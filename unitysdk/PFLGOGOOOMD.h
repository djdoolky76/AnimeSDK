#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyAssetConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PFLGOGOOOMD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2B0070)
#define PFLGOGOOOMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2B0630)
#define PFLGOGOOOMD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2B01E0)
#define PFLGOGOOOMD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2AFAE0)
#define PFLGOGOOOMD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2AFD70)
#define PFLGOGOOOMD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2B0280)
#define PFLGOGOOOMD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2B02D0)
#define PFLGOGOOOMD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2B00B0)
#define PFLGOGOOOMD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2AFD10)
#define PFLGOGOOOMD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2AFEA0)
#define PFLGOGOOOMD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2B0140)
#define PFLGOGOOOMD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2AFA60)

inline static constexpr unsigned int PFLGOGOOOMD_TypeDefinitionIndex = 12044;

	class PFLGOGOOOMD : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PFLGOGOOOMD")->GetStaticField(0x4E110);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyAssetConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyAssetConfigRow*>**)UnitySDK::FromName("", "PFLGOGOOOMD")->GetStaticField(0x4E118);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PFLGOGOOOMD")->GetStaticField(0x4E120);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PFLGOGOOOMD")->GetStaticField(0x11D70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PFLGOGOOOMD")->GetStaticField(0x11D71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFLGOGOOOMD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyAssetConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyAssetConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PFLGOGOOOMD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PFLGOGOOOMD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyAssetConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyAssetConfigRow*>(*)())((::PBYTE)hIl2Cpp + PFLGOGOOOMD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyAssetConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MonopolyAssetConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PFLGOGOOOMD_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PFLGOGOOOMD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFLGOGOOOMD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFLGOGOOOMD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PFLGOGOOOMD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PFLGOGOOOMD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PFLGOGOOOMD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MonopolyAssetConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyAssetConfigRow*))((::PBYTE)hIl2Cpp + PFLGOGOOOMD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
