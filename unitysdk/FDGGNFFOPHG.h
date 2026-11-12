#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class ACINPKMDFEM;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FDGGNFFOPHG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DFB3620)
#define FDGGNFFOPHG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFB3BF0)
#define FDGGNFFOPHG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DFB3790)
#define FDGGNFFOPHG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DFB3090)
#define FDGGNFFOPHG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DFB3320)
#define FDGGNFFOPHG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DFB3830)
#define FDGGNFFOPHG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DFB3880)
#define FDGGNFFOPHG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DFB3660)
#define FDGGNFFOPHG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DFB32C0)
#define FDGGNFFOPHG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DFB3490)
#define FDGGNFFOPHG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DFB36F0)
#define FDGGNFFOPHG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DFB3010)

inline static constexpr unsigned int FDGGNFFOPHG_TypeDefinitionIndex = 12544;

	class FDGGNFFOPHG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FDGGNFFOPHG")->GetStaticField(0x41230);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FDGGNFFOPHG")->GetStaticField(0x41238);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ACINPKMDFEM*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ACINPKMDFEM*>**)UnitySDK::FromName("", "FDGGNFFOPHG")->GetStaticField(0x41240);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FDGGNFFOPHG")->GetStaticField(0xDE90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FDGGNFFOPHG")->GetStaticField(0xDE91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDGGNFFOPHG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ACINPKMDFEM*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ACINPKMDFEM*>*(*)())((::PBYTE)hIl2Cpp + FDGGNFFOPHG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FDGGNFFOPHG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::ACINPKMDFEM*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::ACINPKMDFEM*>(*)())((::PBYTE)hIl2Cpp + FDGGNFFOPHG_FPHGMAMDFHE_OFFSET))();
		}

		static ::ACINPKMDFEM* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::ACINPKMDFEM*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FDGGNFFOPHG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FDGGNFFOPHG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDGGNFFOPHG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDGGNFFOPHG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FDGGNFFOPHG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FDGGNFFOPHG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FDGGNFFOPHG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::ACINPKMDFEM* a1)
		{
			return ((::System::Void(*)(::ACINPKMDFEM*))((::PBYTE)hIl2Cpp + FDGGNFFOPHG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
