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

#define FDGGNFFOPHG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDDBE10)
#define FDGGNFFOPHG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDDC3E0)
#define FDGGNFFOPHG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDDBF80)
#define FDGGNFFOPHG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDDB880)
#define FDGGNFFOPHG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDDBB10)
#define FDGGNFFOPHG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDDC020)
#define FDGGNFFOPHG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDDC070)
#define FDGGNFFOPHG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDDBE50)
#define FDGGNFFOPHG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDDBAB0)
#define FDGGNFFOPHG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDDBC80)
#define FDGGNFFOPHG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDDBEE0)
#define FDGGNFFOPHG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDDB800)

inline static constexpr unsigned int FDGGNFFOPHG_TypeDefinitionIndex = 12477;

	class FDGGNFFOPHG : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FDGGNFFOPHG")->GetStaticField(0x10730);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FDGGNFFOPHG")->GetStaticField(0x10738);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ACINPKMDFEM*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ACINPKMDFEM*>**)UnitySDK::FromName("", "FDGGNFFOPHG")->GetStaticField(0x10740);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FDGGNFFOPHG")->GetStaticField(0x37C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FDGGNFFOPHG")->GetStaticField(0x37C1);
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
