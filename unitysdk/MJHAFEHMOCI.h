#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class MMBHKJKLPDA;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MJHAFEHMOCI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1B4CA0)
#define MJHAFEHMOCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1B5220)
#define MJHAFEHMOCI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1B4E10)
#define MJHAFEHMOCI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1B4750)
#define MJHAFEHMOCI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1B49E0)
#define MJHAFEHMOCI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1B4EB0)
#define MJHAFEHMOCI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1B4F00)
#define MJHAFEHMOCI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1B4CE0)
#define MJHAFEHMOCI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1B4980)
#define MJHAFEHMOCI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1B4B50)
#define MJHAFEHMOCI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1B4D70)
#define MJHAFEHMOCI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1B46D0)

inline static constexpr unsigned int MJHAFEHMOCI_TypeDefinitionIndex = 14945;

	class MJHAFEHMOCI : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MJHAFEHMOCI")->GetStaticField(0x4D770);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MMBHKJKLPDA*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MMBHKJKLPDA*>**)UnitySDK::FromName("", "MJHAFEHMOCI")->GetStaticField(0x4D778);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MJHAFEHMOCI")->GetStaticField(0x4D780);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MJHAFEHMOCI")->GetStaticField(0x11CE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MJHAFEHMOCI")->GetStaticField(0x11CE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJHAFEHMOCI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MMBHKJKLPDA*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MMBHKJKLPDA*>*(*)())((::PBYTE)hIl2Cpp + MJHAFEHMOCI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MJHAFEHMOCI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MMBHKJKLPDA*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MMBHKJKLPDA*>(*)())((::PBYTE)hIl2Cpp + MJHAFEHMOCI_FPHGMAMDFHE_OFFSET))();
		}

		static ::MMBHKJKLPDA* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::MMBHKJKLPDA*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MJHAFEHMOCI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MJHAFEHMOCI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJHAFEHMOCI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJHAFEHMOCI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MJHAFEHMOCI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MJHAFEHMOCI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MJHAFEHMOCI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::MMBHKJKLPDA* a1)
		{
			return ((::System::Void(*)(::MMBHKJKLPDA*))((::PBYTE)hIl2Cpp + MJHAFEHMOCI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
