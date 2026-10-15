#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueArcadeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DFIOFNAOPIC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCEBF70)
#define DFIOFNAOPIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCEC540)
#define DFIOFNAOPIC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCEC0E0)
#define DFIOFNAOPIC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCEB9E0)
#define DFIOFNAOPIC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCEBC70)
#define DFIOFNAOPIC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCEC180)
#define DFIOFNAOPIC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCEC1D0)
#define DFIOFNAOPIC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCEBFB0)
#define DFIOFNAOPIC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCEBC10)
#define DFIOFNAOPIC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCEBDE0)
#define DFIOFNAOPIC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCEC040)
#define DFIOFNAOPIC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCEB960)

inline static constexpr unsigned int DFIOFNAOPIC_TypeDefinitionIndex = 14675;

	class DFIOFNAOPIC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueArcadeConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueArcadeConfigRow*>**)UnitySDK::FromName("", "DFIOFNAOPIC")->GetStaticField(0x45360);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DFIOFNAOPIC")->GetStaticField(0x45368);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DFIOFNAOPIC")->GetStaticField(0x45370);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DFIOFNAOPIC")->GetStaticField(0x10550);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DFIOFNAOPIC")->GetStaticField(0x10551);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFIOFNAOPIC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueArcadeConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueArcadeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + DFIOFNAOPIC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DFIOFNAOPIC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueArcadeConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueArcadeConfigRow*>(*)())((::PBYTE)hIl2Cpp + DFIOFNAOPIC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueArcadeConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueArcadeConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DFIOFNAOPIC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DFIOFNAOPIC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFIOFNAOPIC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFIOFNAOPIC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DFIOFNAOPIC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DFIOFNAOPIC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DFIOFNAOPIC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueArcadeConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueArcadeConfigRow*))((::PBYTE)hIl2Cpp + DFIOFNAOPIC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
