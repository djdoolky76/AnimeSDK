#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FunNumMultiplierRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FMGEODOHHOD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDDCC40)
#define FMGEODOHHOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDDD2A0)
#define FMGEODOHHOD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDDCDB0)
#define FMGEODOHHOD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDDC6F0)
#define FMGEODOHHOD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDDC980)
#define FMGEODOHHOD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDDCE50)
#define FMGEODOHHOD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDDCEA0)
#define FMGEODOHHOD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDDCC80)
#define FMGEODOHHOD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDDC920)
#define FMGEODOHHOD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDDCAF0)
#define FMGEODOHHOD_NPEIBLCMKNL_OFFSET UNITYSDK_OFFSET(0x1CDDD1C0)
#define FMGEODOHHOD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDDCD10)
#define FMGEODOHHOD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDDC670)

inline static constexpr unsigned int FMGEODOHHOD_TypeDefinitionIndex = 13218;

	class FMGEODOHHOD : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FMGEODOHHOD")->GetStaticField(0x12E10);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunNumMultiplierRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunNumMultiplierRow*>**)UnitySDK::FromName("", "FMGEODOHHOD")->GetStaticField(0x12E18);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FMGEODOHHOD")->GetStaticField(0x12E20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FMGEODOHHOD")->GetStaticField(0x3DB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FMGEODOHHOD")->GetStaticField(0x3DB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMGEODOHHOD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunNumMultiplierRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunNumMultiplierRow*>*(*)())((::PBYTE)hIl2Cpp + FMGEODOHHOD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FMGEODOHHOD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunNumMultiplierRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunNumMultiplierRow*>(*)())((::PBYTE)hIl2Cpp + FMGEODOHHOD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::FunNumMultiplierRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FunNumMultiplierRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FMGEODOHHOD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FMGEODOHHOD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMGEODOHHOD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMGEODOHHOD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FMGEODOHHOD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FMGEODOHHOD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FMGEODOHHOD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::FunNumMultiplierRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FunNumMultiplierRow*))((::PBYTE)hIl2Cpp + FMGEODOHHOD_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::UInt32 NPEIBLCMKNL()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + FMGEODOHHOD_NPEIBLCMKNL_OFFSET))();
		}

	};
