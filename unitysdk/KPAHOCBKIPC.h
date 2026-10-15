#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class HAELNJMDBMN;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPAHOCBKIPC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0C60F0)
#define KPAHOCBKIPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0C66C0)
#define KPAHOCBKIPC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0C6260)
#define KPAHOCBKIPC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0C5B60)
#define KPAHOCBKIPC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0C5DF0)
#define KPAHOCBKIPC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0C6300)
#define KPAHOCBKIPC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0C6350)
#define KPAHOCBKIPC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0C6130)
#define KPAHOCBKIPC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0C5D90)
#define KPAHOCBKIPC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0C5F60)
#define KPAHOCBKIPC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0C61C0)
#define KPAHOCBKIPC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0C5AE0)

	class KPAHOCBKIPC : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KPAHOCBKIPC")->GetStaticField(0x39DA0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HAELNJMDBMN*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HAELNJMDBMN*>**)UnitySDK::FromName("", "KPAHOCBKIPC")->GetStaticField(0x39DA8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KPAHOCBKIPC")->GetStaticField(0x39DB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KPAHOCBKIPC")->GetStaticField(0xC540);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KPAHOCBKIPC")->GetStaticField(0xC541);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPAHOCBKIPC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HAELNJMDBMN*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HAELNJMDBMN*>*(*)())((::PBYTE)hIl2Cpp + KPAHOCBKIPC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPAHOCBKIPC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HAELNJMDBMN*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HAELNJMDBMN*>(*)())((::PBYTE)hIl2Cpp + KPAHOCBKIPC_FPHGMAMDFHE_OFFSET))();
		}

		static ::HAELNJMDBMN* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::HAELNJMDBMN*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KPAHOCBKIPC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPAHOCBKIPC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPAHOCBKIPC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPAHOCBKIPC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KPAHOCBKIPC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KPAHOCBKIPC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KPAHOCBKIPC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::HAELNJMDBMN* a1)
		{
			return ((::System::Void(*)(::HAELNJMDBMN*))((::PBYTE)hIl2Cpp + KPAHOCBKIPC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
