#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyActivityQuestRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OLLIJCHKBBD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D29B080)
#define OLLIJCHKBBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D29B600)
#define OLLIJCHKBBD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D29B1F0)
#define OLLIJCHKBBD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D29AB30)
#define OLLIJCHKBBD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D29ADC0)
#define OLLIJCHKBBD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D29B290)
#define OLLIJCHKBBD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D29B2E0)
#define OLLIJCHKBBD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D29B0C0)
#define OLLIJCHKBBD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D29AD60)
#define OLLIJCHKBBD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D29AEF0)
#define OLLIJCHKBBD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D29B150)
#define OLLIJCHKBBD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D29AAB0)

inline static constexpr unsigned int OLLIJCHKBBD_TypeDefinitionIndex = 12635;

	class OLLIJCHKBBD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OLLIJCHKBBD")->GetStaticField(0x39380);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "OLLIJCHKBBD")->GetStaticField(0x39388);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyActivityQuestRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyActivityQuestRow*>**)UnitySDK::FromName("", "OLLIJCHKBBD")->GetStaticField(0x39390);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OLLIJCHKBBD")->GetStaticField(0xC3D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OLLIJCHKBBD")->GetStaticField(0xC3D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLLIJCHKBBD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyActivityQuestRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyActivityQuestRow*>*(*)())((::PBYTE)hIl2Cpp + OLLIJCHKBBD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OLLIJCHKBBD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyActivityQuestRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyActivityQuestRow*>(*)())((::PBYTE)hIl2Cpp + OLLIJCHKBBD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AlleyActivityQuestRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AlleyActivityQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OLLIJCHKBBD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OLLIJCHKBBD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLLIJCHKBBD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLLIJCHKBBD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OLLIJCHKBBD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OLLIJCHKBBD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OLLIJCHKBBD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AlleyActivityQuestRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleyActivityQuestRow*))((::PBYTE)hIl2Cpp + OLLIJCHKBBD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
