#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class JHLDKLLADIH;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HCKLBHALGGP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE5E410)
#define HCKLBHALGGP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE5E9E0)
#define HCKLBHALGGP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE5E580)
#define HCKLBHALGGP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE5DE80)
#define HCKLBHALGGP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE5E110)
#define HCKLBHALGGP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE5E620)
#define HCKLBHALGGP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE5E670)
#define HCKLBHALGGP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE5E450)
#define HCKLBHALGGP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE5E0B0)
#define HCKLBHALGGP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE5E280)
#define HCKLBHALGGP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE5E4E0)
#define HCKLBHALGGP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE5DE00)

inline static constexpr unsigned int HCKLBHALGGP_TypeDefinitionIndex = 11531;

	class HCKLBHALGGP : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HCKLBHALGGP")->GetStaticField(0x19080);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JHLDKLLADIH*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JHLDKLLADIH*>**)UnitySDK::FromName("", "HCKLBHALGGP")->GetStaticField(0x19088);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HCKLBHALGGP")->GetStaticField(0x19090);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HCKLBHALGGP")->GetStaticField(0x5660);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HCKLBHALGGP")->GetStaticField(0x5661);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCKLBHALGGP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JHLDKLLADIH*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JHLDKLLADIH*>*(*)())((::PBYTE)hIl2Cpp + HCKLBHALGGP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCKLBHALGGP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JHLDKLLADIH*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JHLDKLLADIH*>(*)())((::PBYTE)hIl2Cpp + HCKLBHALGGP_FPHGMAMDFHE_OFFSET))();
		}

		static ::JHLDKLLADIH* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::JHLDKLLADIH*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HCKLBHALGGP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HCKLBHALGGP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCKLBHALGGP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCKLBHALGGP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HCKLBHALGGP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HCKLBHALGGP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HCKLBHALGGP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::JHLDKLLADIH* a1)
		{
			return ((::System::Void(*)(::JHLDKLLADIH*))((::PBYTE)hIl2Cpp + HCKLBHALGGP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
