#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnterPageConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BNMFOJGPPCI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9EB6D0)
#define BNMFOJGPPCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9EBC50)
#define BNMFOJGPPCI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9EB840)
#define BNMFOJGPPCI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9EB160)
#define BNMFOJGPPCI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9EB3F0)
#define BNMFOJGPPCI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9EB8E0)
#define BNMFOJGPPCI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9EB930)
#define BNMFOJGPPCI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9EB710)
#define BNMFOJGPPCI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9EB390)
#define BNMFOJGPPCI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9EB560)
#define BNMFOJGPPCI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9EB7A0)
#define BNMFOJGPPCI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9EB0E0)

inline static constexpr unsigned int BNMFOJGPPCI_TypeDefinitionIndex = 13230;

	class BNMFOJGPPCI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnterPageConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnterPageConfigRow*>**)UnitySDK::FromName("", "BNMFOJGPPCI")->GetStaticField(0x38AE0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BNMFOJGPPCI")->GetStaticField(0x38AE8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BNMFOJGPPCI")->GetStaticField(0x38AF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BNMFOJGPPCI")->GetStaticField(0xC180);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BNMFOJGPPCI")->GetStaticField(0xC181);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNMFOJGPPCI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnterPageConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnterPageConfigRow*>*(*)())((::PBYTE)hIl2Cpp + BNMFOJGPPCI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BNMFOJGPPCI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnterPageConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnterPageConfigRow*>(*)())((::PBYTE)hIl2Cpp + BNMFOJGPPCI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::EnterPageConfigRow* LMBKNCAIDLC(::System::String* a1)
		{
			return ((::RPG::GameCore::EnterPageConfigRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + BNMFOJGPPCI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BNMFOJGPPCI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNMFOJGPPCI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNMFOJGPPCI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BNMFOJGPPCI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BNMFOJGPPCI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BNMFOJGPPCI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::EnterPageConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EnterPageConfigRow*))((::PBYTE)hIl2Cpp + BNMFOJGPPCI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
