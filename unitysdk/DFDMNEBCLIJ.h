#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPortalRemarkConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DFDMNEBCLIJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD15000)
#define DFDMNEBCLIJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD155D0)
#define DFDMNEBCLIJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD15170)
#define DFDMNEBCLIJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD14A70)
#define DFDMNEBCLIJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD14D00)
#define DFDMNEBCLIJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD15210)
#define DFDMNEBCLIJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD15260)
#define DFDMNEBCLIJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD15040)
#define DFDMNEBCLIJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD14CA0)
#define DFDMNEBCLIJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD14E70)
#define DFDMNEBCLIJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD150D0)
#define DFDMNEBCLIJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD149F0)

inline static constexpr unsigned int DFDMNEBCLIJ_TypeDefinitionIndex = 13640;

	class DFDMNEBCLIJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPortalRemarkConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPortalRemarkConfigRow*>**)UnitySDK::FromName("", "DFDMNEBCLIJ")->GetStaticField(0x4BBA0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DFDMNEBCLIJ")->GetStaticField(0x4BBA8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DFDMNEBCLIJ")->GetStaticField(0x4BBB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DFDMNEBCLIJ")->GetStaticField(0x11880);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DFDMNEBCLIJ")->GetStaticField(0x11881);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFDMNEBCLIJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPortalRemarkConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPortalRemarkConfigRow*>*(*)())((::PBYTE)hIl2Cpp + DFDMNEBCLIJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DFDMNEBCLIJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPortalRemarkConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPortalRemarkConfigRow*>(*)())((::PBYTE)hIl2Cpp + DFDMNEBCLIJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightPortalRemarkConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightPortalRemarkConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DFDMNEBCLIJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DFDMNEBCLIJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFDMNEBCLIJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFDMNEBCLIJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DFDMNEBCLIJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DFDMNEBCLIJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DFDMNEBCLIJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightPortalRemarkConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightPortalRemarkConfigRow*))((::PBYTE)hIl2Cpp + DFDMNEBCLIJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
