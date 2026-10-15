#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class AFBDIFAHNIL;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OHBMBFDBPID_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D248B70)
#define OHBMBFDBPID_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2496C0)
#define OHBMBFDBPID_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D248F10)
#define OHBMBFDBPID_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D248BB0)
#define OHBMBFDBPID_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D249400)
#define OHBMBFDBPID_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D248FB0)
#define OHBMBFDBPID_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D249000)
#define OHBMBFDBPID_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D248DE0)
#define OHBMBFDBPID_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2493A0)
#define OHBMBFDBPID_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D249530)
#define OHBMBFDBPID_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D248E70)
#define OHBMBFDBPID_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D249320)

inline static constexpr unsigned int OHBMBFDBPID_TypeDefinitionIndex = 15398;

	class OHBMBFDBPID : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OHBMBFDBPID")->GetStaticField(0x46240);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AFBDIFAHNIL*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AFBDIFAHNIL*>**)UnitySDK::FromName("", "OHBMBFDBPID")->GetStaticField(0x46248);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OHBMBFDBPID")->GetStaticField(0x46250);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OHBMBFDBPID")->GetStaticField(0x107D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OHBMBFDBPID")->GetStaticField(0x107D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHBMBFDBPID_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OHBMBFDBPID_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHBMBFDBPID_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHBMBFDBPID_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OHBMBFDBPID_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OHBMBFDBPID_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OHBMBFDBPID_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::AFBDIFAHNIL* a1)
		{
			return ((::System::Void(*)(::AFBDIFAHNIL*))((::PBYTE)hIl2Cpp + OHBMBFDBPID_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AFBDIFAHNIL*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AFBDIFAHNIL*>*(*)())((::PBYTE)hIl2Cpp + OHBMBFDBPID_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OHBMBFDBPID_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::AFBDIFAHNIL*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::AFBDIFAHNIL*>(*)())((::PBYTE)hIl2Cpp + OHBMBFDBPID_FPHGMAMDFHE_OFFSET))();
		}

		static ::AFBDIFAHNIL* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::AFBDIFAHNIL*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OHBMBFDBPID_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
