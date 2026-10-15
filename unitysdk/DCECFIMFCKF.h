#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleSealLevelConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DCECFIMFCKF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCA8C90)
#define DCECFIMFCKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCA9290)
#define DCECFIMFCKF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCA8E00)
#define DCECFIMFCKF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCA86C0)
#define DCECFIMFCKF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCA8950)
#define DCECFIMFCKF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCA8EA0)
#define DCECFIMFCKF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCA8EF0)
#define DCECFIMFCKF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCA8CD0)
#define DCECFIMFCKF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCA88F0)
#define DCECFIMFCKF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCA8AC0)
#define DCECFIMFCKF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCA8D60)
#define DCECFIMFCKF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCA8640)

inline static constexpr unsigned int DCECFIMFCKF_TypeDefinitionIndex = 11852;

	class DCECFIMFCKF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DCECFIMFCKF")->GetStaticField(0x41440);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DCECFIMFCKF")->GetStaticField(0x41448);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealLevelConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealLevelConfigRow*>**)UnitySDK::FromName("", "DCECFIMFCKF")->GetStaticField(0x41450);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DCECFIMFCKF")->GetStaticField(0xF890);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DCECFIMFCKF")->GetStaticField(0xF891);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCECFIMFCKF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealLevelConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealLevelConfigRow*>*(*)())((::PBYTE)hIl2Cpp + DCECFIMFCKF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DCECFIMFCKF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealLevelConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealLevelConfigRow*>(*)())((::PBYTE)hIl2Cpp + DCECFIMFCKF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MarbleSealLevelConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MarbleSealLevelConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DCECFIMFCKF_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DCECFIMFCKF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCECFIMFCKF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCECFIMFCKF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DCECFIMFCKF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DCECFIMFCKF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DCECFIMFCKF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MarbleSealLevelConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MarbleSealLevelConfigRow*))((::PBYTE)hIl2Cpp + DCECFIMFCKF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
