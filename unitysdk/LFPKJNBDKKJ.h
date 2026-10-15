#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityRaidCollectionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LFPKJNBDKKJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0BD720)
#define LFPKJNBDKKJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0BDCA0)
#define LFPKJNBDKKJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0BD890)
#define LFPKJNBDKKJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0BD210)
#define LFPKJNBDKKJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0BD4A0)
#define LFPKJNBDKKJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0BD930)
#define LFPKJNBDKKJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0BD980)
#define LFPKJNBDKKJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0BD760)
#define LFPKJNBDKKJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0BD440)
#define LFPKJNBDKKJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0BD5D0)
#define LFPKJNBDKKJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0BD7F0)
#define LFPKJNBDKKJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0BD190)

inline static constexpr unsigned int LFPKJNBDKKJ_TypeDefinitionIndex = 12325;

	class LFPKJNBDKKJ : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LFPKJNBDKKJ")->GetStaticField(0x3AE80);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionRow*>**)UnitySDK::FromName("", "LFPKJNBDKKJ")->GetStaticField(0x3AE88);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LFPKJNBDKKJ")->GetStaticField(0x3AE90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LFPKJNBDKKJ")->GetStaticField(0xBE20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LFPKJNBDKKJ")->GetStaticField(0xBE21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFPKJNBDKKJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionRow*>*(*)())((::PBYTE)hIl2Cpp + LFPKJNBDKKJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LFPKJNBDKKJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidCollectionRow*>(*)())((::PBYTE)hIl2Cpp + LFPKJNBDKKJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityRaidCollectionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityRaidCollectionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LFPKJNBDKKJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LFPKJNBDKKJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFPKJNBDKKJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFPKJNBDKKJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LFPKJNBDKKJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LFPKJNBDKKJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LFPKJNBDKKJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityRaidCollectionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityRaidCollectionRow*))((::PBYTE)hIl2Cpp + LFPKJNBDKKJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
