#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class IENEKFOMAGO;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NCKMBHGDKNA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1C7790)
#define NCKMBHGDKNA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1C7D60)
#define NCKMBHGDKNA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1C7900)
#define NCKMBHGDKNA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1C7200)
#define NCKMBHGDKNA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1C7490)
#define NCKMBHGDKNA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1C79A0)
#define NCKMBHGDKNA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1C79F0)
#define NCKMBHGDKNA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1C77D0)
#define NCKMBHGDKNA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1C7430)
#define NCKMBHGDKNA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1C7600)
#define NCKMBHGDKNA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1C7860)
#define NCKMBHGDKNA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1C7180)

inline static constexpr unsigned int NCKMBHGDKNA_TypeDefinitionIndex = 13913;

	class NCKMBHGDKNA : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NCKMBHGDKNA")->GetStaticField(0x3ED10);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NCKMBHGDKNA")->GetStaticField(0x3ED18);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IENEKFOMAGO*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IENEKFOMAGO*>**)UnitySDK::FromName("", "NCKMBHGDKNA")->GetStaticField(0x3ED20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NCKMBHGDKNA")->GetStaticField(0xECF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NCKMBHGDKNA")->GetStaticField(0xECF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCKMBHGDKNA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IENEKFOMAGO*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IENEKFOMAGO*>*(*)())((::PBYTE)hIl2Cpp + NCKMBHGDKNA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NCKMBHGDKNA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::IENEKFOMAGO*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::IENEKFOMAGO*>(*)())((::PBYTE)hIl2Cpp + NCKMBHGDKNA_FPHGMAMDFHE_OFFSET))();
		}

		static ::IENEKFOMAGO* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::IENEKFOMAGO*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NCKMBHGDKNA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NCKMBHGDKNA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCKMBHGDKNA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCKMBHGDKNA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NCKMBHGDKNA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NCKMBHGDKNA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NCKMBHGDKNA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::IENEKFOMAGO* a1)
		{
			return ((::System::Void(*)(::IENEKFOMAGO*))((::PBYTE)hIl2Cpp + NCKMBHGDKNA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
