#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeOpponentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IJGFBLEHAAH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEEA220)
#define IJGFBLEHAAH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEEA7A0)
#define IJGFBLEHAAH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEEA390)
#define IJGFBLEHAAH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEE9CD0)
#define IJGFBLEHAAH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEE9F60)
#define IJGFBLEHAAH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEEA430)
#define IJGFBLEHAAH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEEA480)
#define IJGFBLEHAAH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEEA260)
#define IJGFBLEHAAH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEE9F00)
#define IJGFBLEHAAH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEEA0D0)
#define IJGFBLEHAAH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEEA2F0)
#define IJGFBLEHAAH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEE9C50)

inline static constexpr unsigned int IJGFBLEHAAH_TypeDefinitionIndex = 11900;

	class IJGFBLEHAAH : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IJGFBLEHAAH")->GetStaticField(0x231A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeOpponentRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeOpponentRow*>**)UnitySDK::FromName("", "IJGFBLEHAAH")->GetStaticField(0x231A8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IJGFBLEHAAH")->GetStaticField(0x231B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IJGFBLEHAAH")->GetStaticField(0x79B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IJGFBLEHAAH")->GetStaticField(0x79B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJGFBLEHAAH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeOpponentRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeOpponentRow*>*(*)())((::PBYTE)hIl2Cpp + IJGFBLEHAAH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IJGFBLEHAAH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeOpponentRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeOpponentRow*>(*)())((::PBYTE)hIl2Cpp + IJGFBLEHAAH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeOpponentRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MatchThreeOpponentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IJGFBLEHAAH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IJGFBLEHAAH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJGFBLEHAAH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJGFBLEHAAH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IJGFBLEHAAH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IJGFBLEHAAH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IJGFBLEHAAH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MatchThreeOpponentRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeOpponentRow*))((::PBYTE)hIl2Cpp + IJGFBLEHAAH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
