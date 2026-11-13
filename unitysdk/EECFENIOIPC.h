#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class BPMMCDJNBDB;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EECFENIOIPC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1F0FD0F0)
#define EECFENIOIPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0FD6C0)
#define EECFENIOIPC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1F0FD260)
#define EECFENIOIPC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1F0FCB60)
#define EECFENIOIPC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1F0FCDF0)
#define EECFENIOIPC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1F0FD300)
#define EECFENIOIPC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1F0FD350)
#define EECFENIOIPC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1F0FD130)
#define EECFENIOIPC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1F0FCD90)
#define EECFENIOIPC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1F0FCF60)
#define EECFENIOIPC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1F0FD1C0)
#define EECFENIOIPC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1F0FCAE0)

inline static constexpr unsigned int EECFENIOIPC_TypeDefinitionIndex = 14111;

	class EECFENIOIPC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EECFENIOIPC")->GetStaticField(0x469B0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BPMMCDJNBDB*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BPMMCDJNBDB*>**)UnitySDK::FromName("", "EECFENIOIPC")->GetStaticField(0x469B8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EECFENIOIPC")->GetStaticField(0x469C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EECFENIOIPC")->GetStaticField(0xDC20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EECFENIOIPC")->GetStaticField(0xDC21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EECFENIOIPC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BPMMCDJNBDB*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BPMMCDJNBDB*>*(*)())((::PBYTE)hIl2Cpp + EECFENIOIPC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EECFENIOIPC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::BPMMCDJNBDB*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::BPMMCDJNBDB*>(*)())((::PBYTE)hIl2Cpp + EECFENIOIPC_FPHGMAMDFHE_OFFSET))();
		}

		static ::BPMMCDJNBDB* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::BPMMCDJNBDB*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EECFENIOIPC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EECFENIOIPC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EECFENIOIPC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EECFENIOIPC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EECFENIOIPC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EECFENIOIPC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EECFENIOIPC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::BPMMCDJNBDB* a1)
		{
			return ((::System::Void(*)(::BPMMCDJNBDB*))((::PBYTE)hIl2Cpp + EECFENIOIPC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
