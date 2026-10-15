#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class AOBNEDJMIKC;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OEHNEOPHHHH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D260560)
#define OEHNEOPHHHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D260B30)
#define OEHNEOPHHHH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2606D0)
#define OEHNEOPHHHH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D25FFD0)
#define OEHNEOPHHHH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D260260)
#define OEHNEOPHHHH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D260770)
#define OEHNEOPHHHH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2607C0)
#define OEHNEOPHHHH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2605A0)
#define OEHNEOPHHHH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D260200)
#define OEHNEOPHHHH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2603D0)
#define OEHNEOPHHHH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D260630)
#define OEHNEOPHHHH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D25FF50)

inline static constexpr unsigned int OEHNEOPHHHH_TypeDefinitionIndex = 12486;

	class OEHNEOPHHHH : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OEHNEOPHHHH")->GetStaticField(0x33490);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OEHNEOPHHHH")->GetStaticField(0x33498);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AOBNEDJMIKC*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AOBNEDJMIKC*>**)UnitySDK::FromName("", "OEHNEOPHHHH")->GetStaticField(0x334A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OEHNEOPHHHH")->GetStaticField(0xAC90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OEHNEOPHHHH")->GetStaticField(0xAC91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEHNEOPHHHH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AOBNEDJMIKC*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AOBNEDJMIKC*>*(*)())((::PBYTE)hIl2Cpp + OEHNEOPHHHH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OEHNEOPHHHH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::AOBNEDJMIKC*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::AOBNEDJMIKC*>(*)())((::PBYTE)hIl2Cpp + OEHNEOPHHHH_FPHGMAMDFHE_OFFSET))();
		}

		static ::AOBNEDJMIKC* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::AOBNEDJMIKC*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OEHNEOPHHHH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OEHNEOPHHHH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEHNEOPHHHH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEHNEOPHHHH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OEHNEOPHHHH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OEHNEOPHHHH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OEHNEOPHHHH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::AOBNEDJMIKC* a1)
		{
			return ((::System::Void(*)(::AOBNEDJMIKC*))((::PBYTE)hIl2Cpp + OEHNEOPHHHH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
