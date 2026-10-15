#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class HBDEJIIFIFG;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AAMCBKACHDM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CC6B280)
#define AAMCBKACHDM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC6B850)
#define AAMCBKACHDM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CC6B3F0)
#define AAMCBKACHDM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CC6ACF0)
#define AAMCBKACHDM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CC6AF80)
#define AAMCBKACHDM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CC6B490)
#define AAMCBKACHDM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CC6B4E0)
#define AAMCBKACHDM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CC6B2C0)
#define AAMCBKACHDM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CC6AF20)
#define AAMCBKACHDM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CC6B0F0)
#define AAMCBKACHDM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CC6B350)
#define AAMCBKACHDM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CC6AC70)

inline static constexpr unsigned int AAMCBKACHDM_TypeDefinitionIndex = 13925;

	class AAMCBKACHDM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HBDEJIIFIFG*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HBDEJIIFIFG*>**)UnitySDK::FromName("", "AAMCBKACHDM")->GetStaticField(0x3CFC0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AAMCBKACHDM")->GetStaticField(0x3CFC8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AAMCBKACHDM")->GetStaticField(0x3CFD0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AAMCBKACHDM")->GetStaticField(0xC330);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AAMCBKACHDM")->GetStaticField(0xC331);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAMCBKACHDM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HBDEJIIFIFG*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HBDEJIIFIFG*>*(*)())((::PBYTE)hIl2Cpp + AAMCBKACHDM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AAMCBKACHDM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HBDEJIIFIFG*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HBDEJIIFIFG*>(*)())((::PBYTE)hIl2Cpp + AAMCBKACHDM_FPHGMAMDFHE_OFFSET))();
		}

		static ::HBDEJIIFIFG* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::HBDEJIIFIFG*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AAMCBKACHDM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AAMCBKACHDM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAMCBKACHDM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAMCBKACHDM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AAMCBKACHDM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AAMCBKACHDM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AAMCBKACHDM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::HBDEJIIFIFG* a1)
		{
			return ((::System::Void(*)(::HBDEJIIFIFG*))((::PBYTE)hIl2Cpp + AAMCBKACHDM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
