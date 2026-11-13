#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class NCPCKIGOAFA;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAEGOAFLNBH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E88A390)
#define NAEGOAFLNBH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E88AA30)
#define NAEGOAFLNBH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E88A500)
#define NAEGOAFLNBH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E889E40)
#define NAEGOAFLNBH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E88A0D0)
#define NAEGOAFLNBH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E88A5A0)
#define NAEGOAFLNBH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E88A710)
#define NAEGOAFLNBH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E88A3D0)
#define NAEGOAFLNBH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E88A070)
#define NAEGOAFLNBH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E88A240)
#define NAEGOAFLNBH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E88A460)
#define NAEGOAFLNBH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E889DC0)

inline static constexpr unsigned int NAEGOAFLNBH_TypeDefinitionIndex = 14041;

	class NAEGOAFLNBH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NCPCKIGOAFA*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NCPCKIGOAFA*>**)UnitySDK::FromName("", "NAEGOAFLNBH")->GetStaticField(0x4CBA0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NAEGOAFLNBH")->GetStaticField(0x4CBA8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NAEGOAFLNBH")->GetStaticField(0x4CBB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NAEGOAFLNBH")->GetStaticField(0xEA50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NAEGOAFLNBH")->GetStaticField(0xEA51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAEGOAFLNBH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NCPCKIGOAFA*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NCPCKIGOAFA*>*(*)())((::PBYTE)hIl2Cpp + NAEGOAFLNBH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NAEGOAFLNBH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NCPCKIGOAFA*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NCPCKIGOAFA*>(*)())((::PBYTE)hIl2Cpp + NAEGOAFLNBH_FPHGMAMDFHE_OFFSET))();
		}

		static ::NCPCKIGOAFA* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::NCPCKIGOAFA*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NAEGOAFLNBH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NAEGOAFLNBH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAEGOAFLNBH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAEGOAFLNBH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NAEGOAFLNBH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAEGOAFLNBH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NAEGOAFLNBH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::NCPCKIGOAFA* a1)
		{
			return ((::System::Void(*)(::NCPCKIGOAFA*))((::PBYTE)hIl2Cpp + NAEGOAFLNBH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
