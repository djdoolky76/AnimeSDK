#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournGambleGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PPGOEPIGPIB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E7BBE20)
#define PPGOEPIGPIB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7BC3F0)
#define PPGOEPIGPIB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E7BBF90)
#define PPGOEPIGPIB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E7BB890)
#define PPGOEPIGPIB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E7BBB20)
#define PPGOEPIGPIB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E7BC030)
#define PPGOEPIGPIB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E7BC080)
#define PPGOEPIGPIB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E7BBE60)
#define PPGOEPIGPIB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E7BBAC0)
#define PPGOEPIGPIB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E7BBC90)
#define PPGOEPIGPIB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E7BBEF0)
#define PPGOEPIGPIB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E7BB810)

inline static constexpr unsigned int PPGOEPIGPIB_TypeDefinitionIndex = 15198;

	class PPGOEPIGPIB : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PPGOEPIGPIB")->GetStaticField(0x43470);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PPGOEPIGPIB")->GetStaticField(0x43478);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleGroupRow*>**)UnitySDK::FromName("", "PPGOEPIGPIB")->GetStaticField(0x43480);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PPGOEPIGPIB")->GetStaticField(0xD7C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PPGOEPIGPIB")->GetStaticField(0xD7C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPGOEPIGPIB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleGroupRow*>*(*)())((::PBYTE)hIl2Cpp + PPGOEPIGPIB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PPGOEPIGPIB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleGroupRow*>(*)())((::PBYTE)hIl2Cpp + PPGOEPIGPIB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournGambleGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournGambleGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PPGOEPIGPIB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PPGOEPIGPIB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPGOEPIGPIB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPGOEPIGPIB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PPGOEPIGPIB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PPGOEPIGPIB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PPGOEPIGPIB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournGambleGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournGambleGroupRow*))((::PBYTE)hIl2Cpp + PPGOEPIGPIB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
