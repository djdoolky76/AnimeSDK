#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class HNGODOCOCCF;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FKPNLCIPCLI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE01E40)
#define FKPNLCIPCLI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE023C0)
#define FKPNLCIPCLI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE01FB0)
#define FKPNLCIPCLI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE018F0)
#define FKPNLCIPCLI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE01B80)
#define FKPNLCIPCLI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE02050)
#define FKPNLCIPCLI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE020A0)
#define FKPNLCIPCLI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE01E80)
#define FKPNLCIPCLI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE01B20)
#define FKPNLCIPCLI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE01CB0)
#define FKPNLCIPCLI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE01F10)
#define FKPNLCIPCLI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE01870)

inline static constexpr unsigned int FKPNLCIPCLI_TypeDefinitionIndex = 12972;

	class FKPNLCIPCLI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HNGODOCOCCF*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HNGODOCOCCF*>**)UnitySDK::FromName("", "FKPNLCIPCLI")->GetStaticField(0x14630);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FKPNLCIPCLI")->GetStaticField(0x14638);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FKPNLCIPCLI")->GetStaticField(0x14640);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FKPNLCIPCLI")->GetStaticField(0x4DC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FKPNLCIPCLI")->GetStaticField(0x4DC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKPNLCIPCLI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HNGODOCOCCF*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HNGODOCOCCF*>*(*)())((::PBYTE)hIl2Cpp + FKPNLCIPCLI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FKPNLCIPCLI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HNGODOCOCCF*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HNGODOCOCCF*>(*)())((::PBYTE)hIl2Cpp + FKPNLCIPCLI_FPHGMAMDFHE_OFFSET))();
		}

		static ::HNGODOCOCCF* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::HNGODOCOCCF*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FKPNLCIPCLI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FKPNLCIPCLI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKPNLCIPCLI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKPNLCIPCLI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FKPNLCIPCLI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FKPNLCIPCLI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FKPNLCIPCLI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::HNGODOCOCCF* a1)
		{
			return ((::System::Void(*)(::HNGODOCOCCF*))((::PBYTE)hIl2Cpp + FKPNLCIPCLI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
