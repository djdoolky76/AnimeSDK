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

#define MPPCBGCKDKC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E3F8480)
#define MPPCBGCKDKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F8A00)
#define MPPCBGCKDKC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E3F85F0)
#define MPPCBGCKDKC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E3F7F70)
#define MPPCBGCKDKC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E3F8200)
#define MPPCBGCKDKC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E3F8690)
#define MPPCBGCKDKC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E3F86E0)
#define MPPCBGCKDKC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E3F84C0)
#define MPPCBGCKDKC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E3F81A0)
#define MPPCBGCKDKC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E3F8330)
#define MPPCBGCKDKC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E3F8550)
#define MPPCBGCKDKC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E3F7EF0)

inline static constexpr unsigned int MPPCBGCKDKC_TypeDefinitionIndex = 14910;

	class MPPCBGCKDKC : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MPPCBGCKDKC")->GetStaticField(0x45340);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MPPCBGCKDKC")->GetStaticField(0x45348);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCabinetRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCabinetRow*>**)UnitySDK::FromName("", "MPPCBGCKDKC")->GetStaticField(0x45350);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MPPCBGCKDKC")->GetStaticField(0xE9B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MPPCBGCKDKC")->GetStaticField(0xE9B1);
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
