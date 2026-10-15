#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CutscenePropRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FJLLHDGILLM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDFB820)
#define FJLLHDGILLM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDFBDF0)
#define FJLLHDGILLM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDFB990)
#define FJLLHDGILLM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDFB270)
#define FJLLHDGILLM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDFB500)
#define FJLLHDGILLM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDFBA30)
#define FJLLHDGILLM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDFBA80)
#define FJLLHDGILLM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDFB860)
#define FJLLHDGILLM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDFB4A0)
#define FJLLHDGILLM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDFB670)
#define FJLLHDGILLM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDFB8F0)
#define FJLLHDGILLM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDFB1F0)

inline static constexpr unsigned int FJLLHDGILLM_TypeDefinitionIndex = 13106;

	class FJLLHDGILLM : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FJLLHDGILLM")->GetStaticField(0x13FB0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutscenePropRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutscenePropRow*>**)UnitySDK::FromName("", "FJLLHDGILLM")->GetStaticField(0x13FB8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FJLLHDGILLM")->GetStaticField(0x13FC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FJLLHDGILLM")->GetStaticField(0x4C70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FJLLHDGILLM")->GetStaticField(0x4C71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJLLHDGILLM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutscenePropRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutscenePropRow*>*(*)())((::PBYTE)hIl2Cpp + FJLLHDGILLM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FJLLHDGILLM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutscenePropRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CutscenePropRow*>(*)())((::PBYTE)hIl2Cpp + FJLLHDGILLM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::CutscenePropRow* LMBKNCAIDLC(::System::String* a1)
		{
			return ((::RPG::GameCore::CutscenePropRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + FJLLHDGILLM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FJLLHDGILLM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJLLHDGILLM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJLLHDGILLM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FJLLHDGILLM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FJLLHDGILLM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FJLLHDGILLM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::CutscenePropRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CutscenePropRow*))((::PBYTE)hIl2Cpp + FJLLHDGILLM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
