#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GMAccountItemConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CBNEGAKPIJI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DA06540)
#define CBNEGAKPIJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA06B10)
#define CBNEGAKPIJI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DA066B0)
#define CBNEGAKPIJI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DA05FB0)
#define CBNEGAKPIJI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DA06240)
#define CBNEGAKPIJI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DA06750)
#define CBNEGAKPIJI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DA067A0)
#define CBNEGAKPIJI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DA06580)
#define CBNEGAKPIJI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DA061E0)
#define CBNEGAKPIJI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DA063B0)
#define CBNEGAKPIJI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DA06610)
#define CBNEGAKPIJI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DA05F30)

inline static constexpr unsigned int CBNEGAKPIJI_TypeDefinitionIndex = 13345;

	class CBNEGAKPIJI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CBNEGAKPIJI")->GetStaticField(0x3B500);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CBNEGAKPIJI")->GetStaticField(0x3B508);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountItemConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountItemConfigRow*>**)UnitySDK::FromName("", "CBNEGAKPIJI")->GetStaticField(0x3B510);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CBNEGAKPIJI")->GetStaticField(0xC9F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CBNEGAKPIJI")->GetStaticField(0xC9F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBNEGAKPIJI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountItemConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountItemConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CBNEGAKPIJI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CBNEGAKPIJI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountItemConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountItemConfigRow*>(*)())((::PBYTE)hIl2Cpp + CBNEGAKPIJI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GMAccountItemConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GMAccountItemConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CBNEGAKPIJI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CBNEGAKPIJI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBNEGAKPIJI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBNEGAKPIJI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CBNEGAKPIJI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CBNEGAKPIJI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CBNEGAKPIJI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GMAccountItemConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GMAccountItemConfigRow*))((::PBYTE)hIl2Cpp + CBNEGAKPIJI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
