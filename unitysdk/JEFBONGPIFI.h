#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class MOMHPBDOAJM;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JEFBONGPIFI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D01CBD0)
#define JEFBONGPIFI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D01D4E0)
#define JEFBONGPIFI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D01CCB0)
#define JEFBONGPIFI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF513B0)
#define JEFBONGPIFI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D01D1E0)
#define JEFBONGPIFI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D01CD50)
#define JEFBONGPIFI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D01CDA0)
#define JEFBONGPIFI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CFD6D90)
#define JEFBONGPIFI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D01D180)
#define JEFBONGPIFI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D01D310)
#define JEFBONGPIFI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D01CC10)
#define JEFBONGPIFI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D01D100)

inline static constexpr unsigned int JEFBONGPIFI_TypeDefinitionIndex = 15397;

	class JEFBONGPIFI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MOMHPBDOAJM*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MOMHPBDOAJM*>**)UnitySDK::FromName("", "JEFBONGPIFI")->GetStaticField(0x2ACD0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JEFBONGPIFI")->GetStaticField(0x2ACD8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JEFBONGPIFI")->GetStaticField(0x2ACE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JEFBONGPIFI")->GetStaticField(0x8710);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JEFBONGPIFI")->GetStaticField(0x8711);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEFBONGPIFI_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JEFBONGPIFI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEFBONGPIFI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEFBONGPIFI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JEFBONGPIFI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JEFBONGPIFI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JEFBONGPIFI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::MOMHPBDOAJM* a1)
		{
			return ((::System::Void(*)(::MOMHPBDOAJM*))((::PBYTE)hIl2Cpp + JEFBONGPIFI_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MOMHPBDOAJM*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MOMHPBDOAJM*>*(*)())((::PBYTE)hIl2Cpp + JEFBONGPIFI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JEFBONGPIFI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MOMHPBDOAJM*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MOMHPBDOAJM*>(*)())((::PBYTE)hIl2Cpp + JEFBONGPIFI_FPHGMAMDFHE_OFFSET))();
		}

		static ::MOMHPBDOAJM* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::MOMHPBDOAJM*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JEFBONGPIFI_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

	};
