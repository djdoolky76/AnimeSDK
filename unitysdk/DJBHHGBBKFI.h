#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class B51RacingPartRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DJBHHGBBKFI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCFC140)
#define DJBHHGBBKFI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCFC6C0)
#define DJBHHGBBKFI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCFC2B0)
#define DJBHHGBBKFI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCFBBF0)
#define DJBHHGBBKFI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCFBE80)
#define DJBHHGBBKFI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCFC350)
#define DJBHHGBBKFI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCFC3A0)
#define DJBHHGBBKFI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCFC180)
#define DJBHHGBBKFI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCFBE20)
#define DJBHHGBBKFI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCFBFF0)
#define DJBHHGBBKFI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCFC210)
#define DJBHHGBBKFI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCFBB70)

inline static constexpr unsigned int DJBHHGBBKFI_TypeDefinitionIndex = 10965;

	class DJBHHGBBKFI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DJBHHGBBKFI")->GetStaticField(0x47690);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DJBHHGBBKFI")->GetStaticField(0x47698);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingPartRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingPartRow*>**)UnitySDK::FromName("", "DJBHHGBBKFI")->GetStaticField(0x476A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DJBHHGBBKFI")->GetStaticField(0x10AE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DJBHHGBBKFI")->GetStaticField(0x10AE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJBHHGBBKFI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingPartRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingPartRow*>*(*)())((::PBYTE)hIl2Cpp + DJBHHGBBKFI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DJBHHGBBKFI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingPartRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingPartRow*>(*)())((::PBYTE)hIl2Cpp + DJBHHGBBKFI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::B51RacingPartRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::B51RacingPartRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DJBHHGBBKFI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DJBHHGBBKFI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJBHHGBBKFI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJBHHGBBKFI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DJBHHGBBKFI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DJBHHGBBKFI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DJBHHGBBKFI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::B51RacingPartRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::B51RacingPartRow*))((::PBYTE)hIl2Cpp + DJBHHGBBKFI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
