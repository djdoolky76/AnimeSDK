#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceEmojiRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MPNHODLCFDA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1E2100)
#define MPNHODLCFDA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1E2680)
#define MPNHODLCFDA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1E2270)
#define MPNHODLCFDA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1E1BB0)
#define MPNHODLCFDA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1E1E40)
#define MPNHODLCFDA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1E2310)
#define MPNHODLCFDA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1E2360)
#define MPNHODLCFDA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1E2140)
#define MPNHODLCFDA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1E1DE0)
#define MPNHODLCFDA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1E1F70)
#define MPNHODLCFDA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1E21D0)
#define MPNHODLCFDA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1E1B30)

inline static constexpr unsigned int MPNHODLCFDA_TypeDefinitionIndex = 11006;

	class MPNHODLCFDA : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MPNHODLCFDA")->GetStaticField(0x2BF00);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceEmojiRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceEmojiRow*>**)UnitySDK::FromName("", "MPNHODLCFDA")->GetStaticField(0x2BF08);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MPNHODLCFDA")->GetStaticField(0x2BF10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MPNHODLCFDA")->GetStaticField(0x89B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MPNHODLCFDA")->GetStaticField(0x89B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPNHODLCFDA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceEmojiRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceEmojiRow*>*(*)())((::PBYTE)hIl2Cpp + MPNHODLCFDA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MPNHODLCFDA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceEmojiRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceEmojiRow*>(*)())((::PBYTE)hIl2Cpp + MPNHODLCFDA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::CakeRaceEmojiRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceEmojiRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MPNHODLCFDA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MPNHODLCFDA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPNHODLCFDA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPNHODLCFDA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MPNHODLCFDA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MPNHODLCFDA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MPNHODLCFDA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::CakeRaceEmojiRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CakeRaceEmojiRow*))((::PBYTE)hIl2Cpp + MPNHODLCFDA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
