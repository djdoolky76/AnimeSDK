#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightCampConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AOCIBNFPHDL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCBACF0)
#define AOCIBNFPHDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCBB2C0)
#define AOCIBNFPHDL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCBAE60)
#define AOCIBNFPHDL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCBA760)
#define AOCIBNFPHDL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCBA9F0)
#define AOCIBNFPHDL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCBAF00)
#define AOCIBNFPHDL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCBAF50)
#define AOCIBNFPHDL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCBAD30)
#define AOCIBNFPHDL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCBA990)
#define AOCIBNFPHDL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCBAB60)
#define AOCIBNFPHDL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCBADC0)
#define AOCIBNFPHDL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCBA6E0)

inline static constexpr unsigned int AOCIBNFPHDL_TypeDefinitionIndex = 13628;

	class AOCIBNFPHDL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCampConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCampConfigRow*>**)UnitySDK::FromName("", "AOCIBNFPHDL")->GetStaticField(0x429D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AOCIBNFPHDL")->GetStaticField(0x429D8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AOCIBNFPHDL")->GetStaticField(0x429E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AOCIBNFPHDL")->GetStaticField(0xFD20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AOCIBNFPHDL")->GetStaticField(0xFD21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOCIBNFPHDL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCampConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCampConfigRow*>*(*)())((::PBYTE)hIl2Cpp + AOCIBNFPHDL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AOCIBNFPHDL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCampConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCampConfigRow*>(*)())((::PBYTE)hIl2Cpp + AOCIBNFPHDL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightCampConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightCampConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AOCIBNFPHDL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AOCIBNFPHDL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOCIBNFPHDL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOCIBNFPHDL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AOCIBNFPHDL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AOCIBNFPHDL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AOCIBNFPHDL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightCampConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightCampConfigRow*))((::PBYTE)hIl2Cpp + AOCIBNFPHDL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
