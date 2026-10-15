#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class JEBNNNBMNJF;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DEGFPIEIBAL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCE27E0)
#define DEGFPIEIBAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCE2DA0)
#define DEGFPIEIBAL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCE2950)
#define DEGFPIEIBAL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCE2240)
#define DEGFPIEIBAL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCE24D0)
#define DEGFPIEIBAL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCE29F0)
#define DEGFPIEIBAL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCE2A40)
#define DEGFPIEIBAL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCE2820)
#define DEGFPIEIBAL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCE2470)
#define DEGFPIEIBAL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCE2640)
#define DEGFPIEIBAL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCE28B0)
#define DEGFPIEIBAL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCE21C0)

inline static constexpr unsigned int DEGFPIEIBAL_TypeDefinitionIndex = 15058;

	class DEGFPIEIBAL : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DEGFPIEIBAL")->GetStaticField(0x44CC0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JEBNNNBMNJF*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JEBNNNBMNJF*>**)UnitySDK::FromName("", "DEGFPIEIBAL")->GetStaticField(0x44CC8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DEGFPIEIBAL")->GetStaticField(0x44CD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DEGFPIEIBAL")->GetStaticField(0x10400);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DEGFPIEIBAL")->GetStaticField(0x10401);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEGFPIEIBAL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JEBNNNBMNJF*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JEBNNNBMNJF*>*(*)())((::PBYTE)hIl2Cpp + DEGFPIEIBAL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DEGFPIEIBAL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JEBNNNBMNJF*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JEBNNNBMNJF*>(*)())((::PBYTE)hIl2Cpp + DEGFPIEIBAL_FPHGMAMDFHE_OFFSET))();
		}

		static ::JEBNNNBMNJF* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::JEBNNNBMNJF*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DEGFPIEIBAL_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DEGFPIEIBAL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEGFPIEIBAL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEGFPIEIBAL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DEGFPIEIBAL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DEGFPIEIBAL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DEGFPIEIBAL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::JEBNNNBMNJF* a1)
		{
			return ((::System::Void(*)(::JEBNNNBMNJF*))((::PBYTE)hIl2Cpp + DEGFPIEIBAL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
