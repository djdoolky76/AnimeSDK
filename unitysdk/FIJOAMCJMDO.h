#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class EMGLNOILCAJ;
class FCOEMCEDLNL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FIJOAMCJMDO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDF74E0)
#define FIJOAMCJMDO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDF7AA0)
#define FIJOAMCJMDO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDF7650)
#define FIJOAMCJMDO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDF6F40)
#define FIJOAMCJMDO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDF71D0)
#define FIJOAMCJMDO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDF76F0)
#define FIJOAMCJMDO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDF7740)
#define FIJOAMCJMDO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDF7520)
#define FIJOAMCJMDO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDF7170)
#define FIJOAMCJMDO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDF7340)
#define FIJOAMCJMDO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDF75B0)
#define FIJOAMCJMDO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDF6EC0)

inline static constexpr unsigned int FIJOAMCJMDO_TypeDefinitionIndex = 14418;

	class FIJOAMCJMDO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EMGLNOILCAJ*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EMGLNOILCAJ*>**)UnitySDK::FromName("", "FIJOAMCJMDO")->GetStaticField(0x139A0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FIJOAMCJMDO")->GetStaticField(0x139A8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "FIJOAMCJMDO")->GetStaticField(0x139B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FIJOAMCJMDO")->GetStaticField(0x4470);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FIJOAMCJMDO")->GetStaticField(0x4471);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIJOAMCJMDO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EMGLNOILCAJ*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EMGLNOILCAJ*>*(*)())((::PBYTE)hIl2Cpp + FIJOAMCJMDO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FIJOAMCJMDO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::EMGLNOILCAJ*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::EMGLNOILCAJ*>(*)())((::PBYTE)hIl2Cpp + FIJOAMCJMDO_FPHGMAMDFHE_OFFSET))();
		}

		static ::EMGLNOILCAJ* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::EMGLNOILCAJ*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FIJOAMCJMDO_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FIJOAMCJMDO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIJOAMCJMDO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIJOAMCJMDO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FIJOAMCJMDO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FIJOAMCJMDO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FIJOAMCJMDO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::EMGLNOILCAJ* a1)
		{
			return ((::System::Void(*)(::EMGLNOILCAJ*))((::PBYTE)hIl2Cpp + FIJOAMCJMDO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
