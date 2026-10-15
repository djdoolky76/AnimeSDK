#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/HipplenInteractType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenInteractInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPLHCMEMKND_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD2A120)
#define DPLHCMEMKND_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD2A6F0)
#define DPLHCMEMKND_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD2A290)
#define DPLHCMEMKND_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD29B90)
#define DPLHCMEMKND_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD29E20)
#define DPLHCMEMKND_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD2A330)
#define DPLHCMEMKND_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD2A380)
#define DPLHCMEMKND_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD2A160)
#define DPLHCMEMKND_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD29DC0)
#define DPLHCMEMKND_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD29F90)
#define DPLHCMEMKND_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD2A1F0)
#define DPLHCMEMKND_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD29B10)

inline static constexpr unsigned int DPLHCMEMKND_TypeDefinitionIndex = 11660;

	class DPLHCMEMKND : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DPLHCMEMKND")->GetStaticField(0x4B2C0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DPLHCMEMKND")->GetStaticField(0x4B2C8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractInfoRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractInfoRow*>**)UnitySDK::FromName("", "DPLHCMEMKND")->GetStaticField(0x4B2D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DPLHCMEMKND")->GetStaticField(0x113C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DPLHCMEMKND")->GetStaticField(0x113C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPLHCMEMKND_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractInfoRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractInfoRow*>*(*)())((::PBYTE)hIl2Cpp + DPLHCMEMKND_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DPLHCMEMKND_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractInfoRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractInfoRow*>(*)())((::PBYTE)hIl2Cpp + DPLHCMEMKND_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityHipplenInteractInfoRow* LMBKNCAIDLC(::RPG::GameCore::HipplenInteractType a1)
		{
			return ((::RPG::GameCore::ActivityHipplenInteractInfoRow*(*)(::RPG::GameCore::HipplenInteractType))((::PBYTE)hIl2Cpp + DPLHCMEMKND_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DPLHCMEMKND_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPLHCMEMKND_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPLHCMEMKND_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DPLHCMEMKND_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DPLHCMEMKND_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DPLHCMEMKND_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityHipplenInteractInfoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenInteractInfoRow*))((::PBYTE)hIl2Cpp + DPLHCMEMKND_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
