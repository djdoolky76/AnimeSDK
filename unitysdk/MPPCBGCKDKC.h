#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCAeonCabinetRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MPPCBGCKDKC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E889400)
#define MPPCBGCKDKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E889980)
#define MPPCBGCKDKC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E889570)
#define MPPCBGCKDKC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E888EF0)
#define MPPCBGCKDKC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E889180)
#define MPPCBGCKDKC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E889610)
#define MPPCBGCKDKC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E889660)
#define MPPCBGCKDKC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E889440)
#define MPPCBGCKDKC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E889120)
#define MPPCBGCKDKC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E8892B0)
#define MPPCBGCKDKC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E8894D0)
#define MPPCBGCKDKC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E888E70)

inline static constexpr unsigned int MPPCBGCKDKC_TypeDefinitionIndex = 14910;

	class MPPCBGCKDKC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCabinetRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCabinetRow*>**)UnitySDK::FromName("", "MPPCBGCKDKC")->GetStaticField(0x4CB30);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MPPCBGCKDKC")->GetStaticField(0x4CB38);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MPPCBGCKDKC")->GetStaticField(0x4CB40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MPPCBGCKDKC")->GetStaticField(0xEA20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MPPCBGCKDKC")->GetStaticField(0xEA21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPPCBGCKDKC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCabinetRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCabinetRow*>*(*)())((::PBYTE)hIl2Cpp + MPPCBGCKDKC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MPPCBGCKDKC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCabinetRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCabinetRow*>(*)())((::PBYTE)hIl2Cpp + MPPCBGCKDKC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCAeonCabinetRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueDLCAeonCabinetRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MPPCBGCKDKC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MPPCBGCKDKC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPPCBGCKDKC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPPCBGCKDKC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MPPCBGCKDKC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MPPCBGCKDKC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MPPCBGCKDKC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueDLCAeonCabinetRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCAeonCabinetRow*))((::PBYTE)hIl2Cpp + MPPCBGCKDKC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
