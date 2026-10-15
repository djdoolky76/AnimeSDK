#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/TutorialPlatformType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class MDPJLLMJGEC;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LPPJIGMBMGA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D12E620)
#define LPPJIGMBMGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D12F280)
#define LPPJIGMBMGA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D12E9C0)
#define LPPJIGMBMGA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D12E660)
#define LPPJIGMBMGA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D12EF30)
#define LPPJIGMBMGA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D12EA60)
#define LPPJIGMBMGA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D12EAB0)
#define LPPJIGMBMGA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D12E890)
#define LPPJIGMBMGA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D12EED0)
#define LPPJIGMBMGA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D12F0A0)
#define LPPJIGMBMGA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D12E920)
#define LPPJIGMBMGA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D12EE50)

inline static constexpr unsigned int LPPJIGMBMGA_TypeDefinitionIndex = 15399;

	class LPPJIGMBMGA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LPPJIGMBMGA")->GetStaticField(0x46D70);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MDPJLLMJGEC*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MDPJLLMJGEC*>**)UnitySDK::FromName("", "LPPJIGMBMGA")->GetStaticField(0x46D78);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "LPPJIGMBMGA")->GetStaticField(0x46D80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LPPJIGMBMGA")->GetStaticField(0x10E30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LPPJIGMBMGA")->GetStaticField(0x10E31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPPJIGMBMGA_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LPPJIGMBMGA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPPJIGMBMGA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPPJIGMBMGA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LPPJIGMBMGA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LPPJIGMBMGA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LPPJIGMBMGA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::MDPJLLMJGEC* a1)
		{
			return ((::System::Void(*)(::MDPJLLMJGEC*))((::PBYTE)hIl2Cpp + LPPJIGMBMGA_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MDPJLLMJGEC*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MDPJLLMJGEC*>*(*)())((::PBYTE)hIl2Cpp + LPPJIGMBMGA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LPPJIGMBMGA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MDPJLLMJGEC*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MDPJLLMJGEC*>(*)())((::PBYTE)hIl2Cpp + LPPJIGMBMGA_FPHGMAMDFHE_OFFSET))();
		}

		static ::MDPJLLMJGEC* LMBKNCAIDLC(::System::UInt32 a1, ::RPG::GameCore::TutorialPlatformType a2)
		{
			return ((::MDPJLLMJGEC*(*)(::System::UInt32, ::RPG::GameCore::TutorialPlatformType))((::PBYTE)hIl2Cpp + LPPJIGMBMGA_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

	};
