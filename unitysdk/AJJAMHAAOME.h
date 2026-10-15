#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHotRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AJJAMHAAOME_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CC9FBD0)
#define AJJAMHAAOME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCA01A0)
#define AJJAMHAAOME_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CC9FD40)
#define AJJAMHAAOME_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CC9F640)
#define AJJAMHAAOME_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CC9F8D0)
#define AJJAMHAAOME_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CC9FDE0)
#define AJJAMHAAOME_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CC9FE30)
#define AJJAMHAAOME_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CC9FC10)
#define AJJAMHAAOME_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CC9F870)
#define AJJAMHAAOME_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CC9FA40)
#define AJJAMHAAOME_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CC9FCA0)
#define AJJAMHAAOME_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CC9F5C0)

inline static constexpr unsigned int AJJAMHAAOME_TypeDefinitionIndex = 11680;

	class AJJAMHAAOME : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AJJAMHAAOME")->GetStaticField(0x404B0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AJJAMHAAOME")->GetStaticField(0x404B8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHotRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHotRow*>**)UnitySDK::FromName("", "AJJAMHAAOME")->GetStaticField(0x404C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AJJAMHAAOME")->GetStaticField(0xF420);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AJJAMHAAOME")->GetStaticField(0xF421);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJJAMHAAOME_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHotRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHotRow*>*(*)())((::PBYTE)hIl2Cpp + AJJAMHAAOME_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AJJAMHAAOME_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHotRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHotRow*>(*)())((::PBYTE)hIl2Cpp + AJJAMHAAOME_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityHotRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityHotRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AJJAMHAAOME_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AJJAMHAAOME_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJJAMHAAOME_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJJAMHAAOME_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AJJAMHAAOME_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AJJAMHAAOME_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AJJAMHAAOME_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityHotRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityHotRow*))((::PBYTE)hIl2Cpp + AJJAMHAAOME_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
