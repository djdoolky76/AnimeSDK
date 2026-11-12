#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StroyLineTrialAvatarDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AKNNDLGJHDK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DE7EE70)
#define AKNNDLGJHDK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE7FA50)
#define AKNNDLGJHDK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DE7F210)
#define AKNNDLGJHDK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DE7EEB0)
#define AKNNDLGJHDK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DE7F750)
#define AKNNDLGJHDK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DE7F2B0)
#define AKNNDLGJHDK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DE7F300)
#define AKNNDLGJHDK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DE7F0E0)
#define AKNNDLGJHDK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DE7F6F0)
#define AKNNDLGJHDK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DE7F8C0)
#define AKNNDLGJHDK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DE7F170)
#define AKNNDLGJHDK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DE7F670)

inline static constexpr unsigned int AKNNDLGJHDK_TypeDefinitionIndex = 15360;

	class AKNNDLGJHDK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StroyLineTrialAvatarDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StroyLineTrialAvatarDataRow*>**)UnitySDK::FromName("", "AKNNDLGJHDK")->GetStaticField(0x2FFB0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AKNNDLGJHDK")->GetStaticField(0x2FFB8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AKNNDLGJHDK")->GetStaticField(0x2FFC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AKNNDLGJHDK")->GetStaticField(0xA1E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AKNNDLGJHDK")->GetStaticField(0xA1E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKNNDLGJHDK_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AKNNDLGJHDK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKNNDLGJHDK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKNNDLGJHDK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AKNNDLGJHDK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AKNNDLGJHDK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AKNNDLGJHDK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::StroyLineTrialAvatarDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StroyLineTrialAvatarDataRow*))((::PBYTE)hIl2Cpp + AKNNDLGJHDK_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StroyLineTrialAvatarDataRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StroyLineTrialAvatarDataRow*>*(*)())((::PBYTE)hIl2Cpp + AKNNDLGJHDK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AKNNDLGJHDK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StroyLineTrialAvatarDataRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StroyLineTrialAvatarDataRow*>(*)())((::PBYTE)hIl2Cpp + AKNNDLGJHDK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::StroyLineTrialAvatarDataRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StroyLineTrialAvatarDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AKNNDLGJHDK_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
