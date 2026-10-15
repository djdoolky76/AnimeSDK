#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModuleBanPortalConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NFGMABGCGLB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D203090)
#define NFGMABGCGLB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D203660)
#define NFGMABGCGLB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D203200)
#define NFGMABGCGLB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D202B00)
#define NFGMABGCGLB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D202D90)
#define NFGMABGCGLB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2032A0)
#define NFGMABGCGLB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2032F0)
#define NFGMABGCGLB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2030D0)
#define NFGMABGCGLB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D202D30)
#define NFGMABGCGLB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D202F00)
#define NFGMABGCGLB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D203160)
#define NFGMABGCGLB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D202A80)

inline static constexpr unsigned int NFGMABGCGLB_TypeDefinitionIndex = 13480;

	class NFGMABGCGLB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NFGMABGCGLB")->GetStaticField(0x2E0A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleBanPortalConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleBanPortalConfigRow*>**)UnitySDK::FromName("", "NFGMABGCGLB")->GetStaticField(0x2E0A8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NFGMABGCGLB")->GetStaticField(0x2E0B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NFGMABGCGLB")->GetStaticField(0x9700);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NFGMABGCGLB")->GetStaticField(0x9701);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFGMABGCGLB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleBanPortalConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleBanPortalConfigRow*>*(*)())((::PBYTE)hIl2Cpp + NFGMABGCGLB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NFGMABGCGLB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleBanPortalConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleBanPortalConfigRow*>(*)())((::PBYTE)hIl2Cpp + NFGMABGCGLB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightModuleBanPortalConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightModuleBanPortalConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NFGMABGCGLB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NFGMABGCGLB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFGMABGCGLB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFGMABGCGLB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NFGMABGCGLB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NFGMABGCGLB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NFGMABGCGLB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightModuleBanPortalConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightModuleBanPortalConfigRow*))((::PBYTE)hIl2Cpp + NFGMABGCGLB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
