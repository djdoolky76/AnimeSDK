#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GMAccountConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LFJDNLGGDCE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E2E1160)
#define LFJDNLGGDCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2E1730)
#define LFJDNLGGDCE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E2E12D0)
#define LFJDNLGGDCE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E2E0BD0)
#define LFJDNLGGDCE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E2E0E60)
#define LFJDNLGGDCE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E2E1370)
#define LFJDNLGGDCE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E2E13C0)
#define LFJDNLGGDCE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E2E11A0)
#define LFJDNLGGDCE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E2E0E00)
#define LFJDNLGGDCE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E2E0FD0)
#define LFJDNLGGDCE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E2E1230)
#define LFJDNLGGDCE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E2E0B50)

inline static constexpr unsigned int LFJDNLGGDCE_TypeDefinitionIndex = 13411;

	class LFJDNLGGDCE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LFJDNLGGDCE")->GetStaticField(0x323D0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountConfigRow*>**)UnitySDK::FromName("", "LFJDNLGGDCE")->GetStaticField(0x323D8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LFJDNLGGDCE")->GetStaticField(0x323E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LFJDNLGGDCE")->GetStaticField(0xAA50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LFJDNLGGDCE")->GetStaticField(0xAA51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFJDNLGGDCE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountConfigRow*>*(*)())((::PBYTE)hIl2Cpp + LFJDNLGGDCE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LFJDNLGGDCE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountConfigRow*>(*)())((::PBYTE)hIl2Cpp + LFJDNLGGDCE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GMAccountConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GMAccountConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LFJDNLGGDCE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LFJDNLGGDCE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFJDNLGGDCE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFJDNLGGDCE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LFJDNLGGDCE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LFJDNLGGDCE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LFJDNLGGDCE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GMAccountConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GMAccountConfigRow*))((::PBYTE)hIl2Cpp + LFJDNLGGDCE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
