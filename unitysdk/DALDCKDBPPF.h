#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class LLGMEBOEBPP;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DALDCKDBPPF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC9DB80)
#define DALDCKDBPPF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC9E150)
#define DALDCKDBPPF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC9DCF0)
#define DALDCKDBPPF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC9D5F0)
#define DALDCKDBPPF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC9D880)
#define DALDCKDBPPF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC9DD90)
#define DALDCKDBPPF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC9DDE0)
#define DALDCKDBPPF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC9DBC0)
#define DALDCKDBPPF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC9D820)
#define DALDCKDBPPF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC9D9F0)
#define DALDCKDBPPF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC9DC50)
#define DALDCKDBPPF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC9D570)

inline static constexpr unsigned int DALDCKDBPPF_TypeDefinitionIndex = 11991;

	class DALDCKDBPPF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DALDCKDBPPF")->GetStaticField(0x40BE0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DALDCKDBPPF")->GetStaticField(0x40BE8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LLGMEBOEBPP*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LLGMEBOEBPP*>**)UnitySDK::FromName("", "DALDCKDBPPF")->GetStaticField(0x40BF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DALDCKDBPPF")->GetStaticField(0xF6B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DALDCKDBPPF")->GetStaticField(0xF6B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DALDCKDBPPF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LLGMEBOEBPP*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LLGMEBOEBPP*>*(*)())((::PBYTE)hIl2Cpp + DALDCKDBPPF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DALDCKDBPPF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LLGMEBOEBPP*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LLGMEBOEBPP*>(*)())((::PBYTE)hIl2Cpp + DALDCKDBPPF_FPHGMAMDFHE_OFFSET))();
		}

		static ::LLGMEBOEBPP* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::LLGMEBOEBPP*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DALDCKDBPPF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DALDCKDBPPF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DALDCKDBPPF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DALDCKDBPPF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DALDCKDBPPF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DALDCKDBPPF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DALDCKDBPPF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::LLGMEBOEBPP* a1)
		{
			return ((::System::Void(*)(::LLGMEBOEBPP*))((::PBYTE)hIl2Cpp + DALDCKDBPPF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
