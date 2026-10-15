#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/SilverWolfSubTabType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SilverWolfSubTabRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PGENAPDGPHM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2E1060)
#define PGENAPDGPHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2E1660)
#define PGENAPDGPHM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2E11D0)
#define PGENAPDGPHM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2E0A80)
#define PGENAPDGPHM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2E0D10)
#define PGENAPDGPHM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2E1270)
#define PGENAPDGPHM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2E12C0)
#define PGENAPDGPHM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2E10A0)
#define PGENAPDGPHM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2E0CB0)
#define PGENAPDGPHM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2E0E80)
#define PGENAPDGPHM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2E1130)
#define PGENAPDGPHM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2E0A00)

inline static constexpr unsigned int PGENAPDGPHM_TypeDefinitionIndex = 12352;

	class PGENAPDGPHM : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PGENAPDGPHM")->GetStaticField(0x3F8A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SilverWolfSubTabRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SilverWolfSubTabRow*>**)UnitySDK::FromName("", "PGENAPDGPHM")->GetStaticField(0x3F8A8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PGENAPDGPHM")->GetStaticField(0x3F8B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PGENAPDGPHM")->GetStaticField(0xD8D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PGENAPDGPHM")->GetStaticField(0xD8D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGENAPDGPHM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SilverWolfSubTabRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SilverWolfSubTabRow*>*(*)())((::PBYTE)hIl2Cpp + PGENAPDGPHM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PGENAPDGPHM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SilverWolfSubTabRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SilverWolfSubTabRow*>(*)())((::PBYTE)hIl2Cpp + PGENAPDGPHM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SilverWolfSubTabRow* LMBKNCAIDLC(::RPG::GameCore::SilverWolfSubTabType a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::SilverWolfSubTabRow*(*)(::RPG::GameCore::SilverWolfSubTabType, ::System::UInt32))((::PBYTE)hIl2Cpp + PGENAPDGPHM_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PGENAPDGPHM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGENAPDGPHM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGENAPDGPHM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PGENAPDGPHM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PGENAPDGPHM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PGENAPDGPHM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SilverWolfSubTabRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SilverWolfSubTabRow*))((::PBYTE)hIl2Cpp + PGENAPDGPHM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
