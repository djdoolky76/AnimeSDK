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

#define DPLHCMEMKND_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E99FD80)
#define DPLHCMEMKND_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A0350)
#define DPLHCMEMKND_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E99FEF0)
#define DPLHCMEMKND_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E99F7F0)
#define DPLHCMEMKND_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E99FA80)
#define DPLHCMEMKND_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E99FF90)
#define DPLHCMEMKND_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E99FFE0)
#define DPLHCMEMKND_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E99FDC0)
#define DPLHCMEMKND_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E99FA20)
#define DPLHCMEMKND_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E99FBF0)
#define DPLHCMEMKND_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E99FE50)
#define DPLHCMEMKND_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E99F770)

inline static constexpr unsigned int DPLHCMEMKND_TypeDefinitionIndex = 11711;

	class DPLHCMEMKND : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DPLHCMEMKND")->GetStaticField(0x41840);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractInfoRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractInfoRow*>**)UnitySDK::FromName("", "DPLHCMEMKND")->GetStaticField(0x41848);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DPLHCMEMKND")->GetStaticField(0x41850);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DPLHCMEMKND")->GetStaticField(0xD200);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DPLHCMEMKND")->GetStaticField(0xD201);
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
