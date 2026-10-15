#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class IOHJBPFFGMM;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GPMOMJEJPAE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE79080)
#define GPMOMJEJPAE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE79650)
#define GPMOMJEJPAE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE791F0)
#define GPMOMJEJPAE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE78AF0)
#define GPMOMJEJPAE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE78D80)
#define GPMOMJEJPAE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE79290)
#define GPMOMJEJPAE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE792E0)
#define GPMOMJEJPAE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE790C0)
#define GPMOMJEJPAE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE78D20)
#define GPMOMJEJPAE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE78EF0)
#define GPMOMJEJPAE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE79150)
#define GPMOMJEJPAE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE78A70)

inline static constexpr unsigned int GPMOMJEJPAE_TypeDefinitionIndex = 11536;

	class GPMOMJEJPAE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IOHJBPFFGMM*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IOHJBPFFGMM*>**)UnitySDK::FromName("", "GPMOMJEJPAE")->GetStaticField(0x1AC70);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GPMOMJEJPAE")->GetStaticField(0x1AC78);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GPMOMJEJPAE")->GetStaticField(0x1AC80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GPMOMJEJPAE")->GetStaticField(0x60B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GPMOMJEJPAE")->GetStaticField(0x60B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPMOMJEJPAE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IOHJBPFFGMM*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IOHJBPFFGMM*>*(*)())((::PBYTE)hIl2Cpp + GPMOMJEJPAE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GPMOMJEJPAE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::IOHJBPFFGMM*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::IOHJBPFFGMM*>(*)())((::PBYTE)hIl2Cpp + GPMOMJEJPAE_FPHGMAMDFHE_OFFSET))();
		}

		static ::IOHJBPFFGMM* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::IOHJBPFFGMM*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GPMOMJEJPAE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GPMOMJEJPAE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPMOMJEJPAE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPMOMJEJPAE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GPMOMJEJPAE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GPMOMJEJPAE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GPMOMJEJPAE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::IOHJBPFFGMM* a1)
		{
			return ((::System::Void(*)(::IOHJBPFFGMM*))((::PBYTE)hIl2Cpp + GPMOMJEJPAE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
