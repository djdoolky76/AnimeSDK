#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingStoryLineRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CPMLDHEPBDH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCC1B10)
#define CPMLDHEPBDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCC2090)
#define CPMLDHEPBDH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCC1C80)
#define CPMLDHEPBDH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCC1600)
#define CPMLDHEPBDH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCC1890)
#define CPMLDHEPBDH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCC1D20)
#define CPMLDHEPBDH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCC1D70)
#define CPMLDHEPBDH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCC1B50)
#define CPMLDHEPBDH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCC1830)
#define CPMLDHEPBDH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCC19C0)
#define CPMLDHEPBDH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCC1BE0)
#define CPMLDHEPBDH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCC1580)

	class CPMLDHEPBDH : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CPMLDHEPBDH")->GetStaticField(0x460B0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CPMLDHEPBDH")->GetStaticField(0x460B8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineRow*>**)UnitySDK::FromName("", "CPMLDHEPBDH")->GetStaticField(0x460C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CPMLDHEPBDH")->GetStaticField(0x10BB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CPMLDHEPBDH")->GetStaticField(0x10BB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPMLDHEPBDH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineRow*>*(*)())((::PBYTE)hIl2Cpp + CPMLDHEPBDH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CPMLDHEPBDH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingStoryLineRow*>(*)())((::PBYTE)hIl2Cpp + CPMLDHEPBDH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SwordTrainingStoryLineRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SwordTrainingStoryLineRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CPMLDHEPBDH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CPMLDHEPBDH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPMLDHEPBDH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPMLDHEPBDH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CPMLDHEPBDH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CPMLDHEPBDH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CPMLDHEPBDH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SwordTrainingStoryLineRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SwordTrainingStoryLineRow*))((::PBYTE)hIl2Cpp + CPMLDHEPBDH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
