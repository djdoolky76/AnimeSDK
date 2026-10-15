#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazePuzzleOrigamiFDRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPBIHNJCMCJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD556F0)
#define DPBIHNJCMCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD55CD0)
#define DPBIHNJCMCJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD55860)
#define DPBIHNJCMCJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD55120)
#define DPBIHNJCMCJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD553B0)
#define DPBIHNJCMCJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD55900)
#define DPBIHNJCMCJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD55950)
#define DPBIHNJCMCJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD55730)
#define DPBIHNJCMCJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD55350)
#define DPBIHNJCMCJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD554E0)
#define DPBIHNJCMCJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD557C0)
#define DPBIHNJCMCJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD550A0)

inline static constexpr unsigned int DPBIHNJCMCJ_TypeDefinitionIndex = 14079;

	class DPBIHNJCMCJ : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DPBIHNJCMCJ")->GetStaticField(0x52880);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DPBIHNJCMCJ")->GetStaticField(0x52888);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleOrigamiFDRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleOrigamiFDRow*>**)UnitySDK::FromName("", "DPBIHNJCMCJ")->GetStaticField(0x52890);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DPBIHNJCMCJ")->GetStaticField(0x124F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DPBIHNJCMCJ")->GetStaticField(0x124F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPBIHNJCMCJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleOrigamiFDRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleOrigamiFDRow*>*(*)())((::PBYTE)hIl2Cpp + DPBIHNJCMCJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DPBIHNJCMCJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleOrigamiFDRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleOrigamiFDRow*>(*)())((::PBYTE)hIl2Cpp + DPBIHNJCMCJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MazePuzzleOrigamiFDRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::GameCore::MazePuzzleOrigamiFDRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DPBIHNJCMCJ_LMBKNCAIDLC_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DPBIHNJCMCJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPBIHNJCMCJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPBIHNJCMCJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DPBIHNJCMCJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DPBIHNJCMCJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DPBIHNJCMCJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MazePuzzleOrigamiFDRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazePuzzleOrigamiFDRow*))((::PBYTE)hIl2Cpp + DPBIHNJCMCJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
