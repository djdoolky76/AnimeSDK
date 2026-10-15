#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class NGBKGFHBAMF;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KCDCELKNEBD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0659A0)
#define KCDCELKNEBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D065F70)
#define KCDCELKNEBD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D065B10)
#define KCDCELKNEBD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D065410)
#define KCDCELKNEBD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0656A0)
#define KCDCELKNEBD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D065BB0)
#define KCDCELKNEBD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D065C00)
#define KCDCELKNEBD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0659E0)
#define KCDCELKNEBD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D065640)
#define KCDCELKNEBD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D065810)
#define KCDCELKNEBD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D065A70)
#define KCDCELKNEBD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D065390)

inline static constexpr unsigned int KCDCELKNEBD_TypeDefinitionIndex = 11999;

	class KCDCELKNEBD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NGBKGFHBAMF*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NGBKGFHBAMF*>**)UnitySDK::FromName("", "KCDCELKNEBD")->GetStaticField(0x31AE0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KCDCELKNEBD")->GetStaticField(0x31AE8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KCDCELKNEBD")->GetStaticField(0x31AF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KCDCELKNEBD")->GetStaticField(0xA760);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KCDCELKNEBD")->GetStaticField(0xA761);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCDCELKNEBD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NGBKGFHBAMF*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NGBKGFHBAMF*>*(*)())((::PBYTE)hIl2Cpp + KCDCELKNEBD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KCDCELKNEBD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NGBKGFHBAMF*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NGBKGFHBAMF*>(*)())((::PBYTE)hIl2Cpp + KCDCELKNEBD_FPHGMAMDFHE_OFFSET))();
		}

		static ::NGBKGFHBAMF* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::NGBKGFHBAMF*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KCDCELKNEBD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KCDCELKNEBD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCDCELKNEBD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCDCELKNEBD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KCDCELKNEBD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KCDCELKNEBD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KCDCELKNEBD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::NGBKGFHBAMF* a1)
		{
			return ((::System::Void(*)(::NGBKGFHBAMF*))((::PBYTE)hIl2Cpp + KCDCELKNEBD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
