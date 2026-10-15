#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveFuncUnlockHintRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPLPCMLJOBJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0CD640)
#define KPLPCMLJOBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0CDC10)
#define KPLPCMLJOBJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0CD7B0)
#define KPLPCMLJOBJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0CD0B0)
#define KPLPCMLJOBJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0CD340)
#define KPLPCMLJOBJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0CD850)
#define KPLPCMLJOBJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0CD8A0)
#define KPLPCMLJOBJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0CD680)
#define KPLPCMLJOBJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0CD2E0)
#define KPLPCMLJOBJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0CD4B0)
#define KPLPCMLJOBJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0CD710)
#define KPLPCMLJOBJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0CD030)

inline static constexpr unsigned int KPLPCMLJOBJ_TypeDefinitionIndex = 11741;

	class KPLPCMLJOBJ : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KPLPCMLJOBJ")->GetStaticField(0x3A5F0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KPLPCMLJOBJ")->GetStaticField(0x3A5F8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveFuncUnlockHintRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveFuncUnlockHintRow*>**)UnitySDK::FromName("", "KPLPCMLJOBJ")->GetStaticField(0x3A600);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KPLPCMLJOBJ")->GetStaticField(0xC710);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KPLPCMLJOBJ")->GetStaticField(0xC711);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPLPCMLJOBJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveFuncUnlockHintRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveFuncUnlockHintRow*>*(*)())((::PBYTE)hIl2Cpp + KPLPCMLJOBJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPLPCMLJOBJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveFuncUnlockHintRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveFuncUnlockHintRow*>(*)())((::PBYTE)hIl2Cpp + KPLPCMLJOBJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveFuncUnlockHintRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveFuncUnlockHintRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KPLPCMLJOBJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPLPCMLJOBJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPLPCMLJOBJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPLPCMLJOBJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KPLPCMLJOBJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KPLPCMLJOBJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KPLPCMLJOBJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveFuncUnlockHintRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveFuncUnlockHintRow*))((::PBYTE)hIl2Cpp + KPLPCMLJOBJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
