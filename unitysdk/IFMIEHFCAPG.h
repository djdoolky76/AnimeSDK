#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class EODHEKNHOLC;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IFMIEHFCAPG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E6C2570)
#define IFMIEHFCAPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C2B40)
#define IFMIEHFCAPG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E6C26E0)
#define IFMIEHFCAPG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E6C1FE0)
#define IFMIEHFCAPG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E6C2270)
#define IFMIEHFCAPG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E6C2780)
#define IFMIEHFCAPG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E6C27D0)
#define IFMIEHFCAPG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E6C25B0)
#define IFMIEHFCAPG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E6C2210)
#define IFMIEHFCAPG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E6C23E0)
#define IFMIEHFCAPG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E6C2640)
#define IFMIEHFCAPG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E6C1F60)

inline static constexpr unsigned int IFMIEHFCAPG_TypeDefinitionIndex = 14092;

	class IFMIEHFCAPG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IFMIEHFCAPG")->GetStaticField(0x1ED90);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EODHEKNHOLC*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EODHEKNHOLC*>**)UnitySDK::FromName("", "IFMIEHFCAPG")->GetStaticField(0x1ED98);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IFMIEHFCAPG")->GetStaticField(0x1EDA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IFMIEHFCAPG")->GetStaticField(0x68C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IFMIEHFCAPG")->GetStaticField(0x68C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFMIEHFCAPG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EODHEKNHOLC*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EODHEKNHOLC*>*(*)())((::PBYTE)hIl2Cpp + IFMIEHFCAPG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IFMIEHFCAPG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::EODHEKNHOLC*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::EODHEKNHOLC*>(*)())((::PBYTE)hIl2Cpp + IFMIEHFCAPG_FPHGMAMDFHE_OFFSET))();
		}

		static ::EODHEKNHOLC* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::EODHEKNHOLC*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IFMIEHFCAPG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IFMIEHFCAPG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFMIEHFCAPG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFMIEHFCAPG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IFMIEHFCAPG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFMIEHFCAPG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IFMIEHFCAPG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::EODHEKNHOLC* a1)
		{
			return ((::System::Void(*)(::EODHEKNHOLC*))((::PBYTE)hIl2Cpp + IFMIEHFCAPG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
