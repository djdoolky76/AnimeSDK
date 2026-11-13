#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MessageItemTextOverrideRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MMFGIJGPAKI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E875830)
#define MMFGIJGPAKI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E875DB0)
#define MMFGIJGPAKI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E8759A0)
#define MMFGIJGPAKI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E875320)
#define MMFGIJGPAKI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E8755B0)
#define MMFGIJGPAKI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E875A40)
#define MMFGIJGPAKI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E875A90)
#define MMFGIJGPAKI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E875870)
#define MMFGIJGPAKI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E875550)
#define MMFGIJGPAKI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E8756E0)
#define MMFGIJGPAKI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E875900)
#define MMFGIJGPAKI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E8752A0)

inline static constexpr unsigned int MMFGIJGPAKI_TypeDefinitionIndex = 14641;

	class MMFGIJGPAKI : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MMFGIJGPAKI")->GetStaticField(0x4B7D0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageItemTextOverrideRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageItemTextOverrideRow*>**)UnitySDK::FromName("", "MMFGIJGPAKI")->GetStaticField(0x4B7D8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MMFGIJGPAKI")->GetStaticField(0x4B7E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MMFGIJGPAKI")->GetStaticField(0xE6B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MMFGIJGPAKI")->GetStaticField(0xE6B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMFGIJGPAKI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageItemTextOverrideRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageItemTextOverrideRow*>*(*)())((::PBYTE)hIl2Cpp + MMFGIJGPAKI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MMFGIJGPAKI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageItemTextOverrideRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageItemTextOverrideRow*>(*)())((::PBYTE)hIl2Cpp + MMFGIJGPAKI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MessageItemTextOverrideRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MessageItemTextOverrideRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MMFGIJGPAKI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MMFGIJGPAKI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMFGIJGPAKI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMFGIJGPAKI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MMFGIJGPAKI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MMFGIJGPAKI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MMFGIJGPAKI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MessageItemTextOverrideRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MessageItemTextOverrideRow*))((::PBYTE)hIl2Cpp + MMFGIJGPAKI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
