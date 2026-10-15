#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShareRewardConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAGFMDDKOBO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1E6910)
#define NAGFMDDKOBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1E74F0)
#define NAGFMDDKOBO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1E6CB0)
#define NAGFMDDKOBO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1E6950)
#define NAGFMDDKOBO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1E71F0)
#define NAGFMDDKOBO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1E6D50)
#define NAGFMDDKOBO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1E6DA0)
#define NAGFMDDKOBO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1E6B80)
#define NAGFMDDKOBO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1E7190)
#define NAGFMDDKOBO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1E7360)
#define NAGFMDDKOBO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1E6C10)
#define NAGFMDDKOBO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1E7110)

inline static constexpr unsigned int NAGFMDDKOBO_TypeDefinitionIndex = 15098;

	class NAGFMDDKOBO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareRewardConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareRewardConfigRow*>**)UnitySDK::FromName("", "NAGFMDDKOBO")->GetStaticField(0x2C120);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NAGFMDDKOBO")->GetStaticField(0x2C128);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NAGFMDDKOBO")->GetStaticField(0x2C130);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NAGFMDDKOBO")->GetStaticField(0x8A20);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NAGFMDDKOBO")->GetStaticField(0x8A21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAGFMDDKOBO_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NAGFMDDKOBO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAGFMDDKOBO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAGFMDDKOBO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NAGFMDDKOBO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NAGFMDDKOBO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NAGFMDDKOBO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ShareRewardConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ShareRewardConfigRow*))((::PBYTE)hIl2Cpp + NAGFMDDKOBO_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareRewardConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareRewardConfigRow*>*(*)())((::PBYTE)hIl2Cpp + NAGFMDDKOBO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NAGFMDDKOBO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareRewardConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ShareRewardConfigRow*>(*)())((::PBYTE)hIl2Cpp + NAGFMDDKOBO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ShareRewardConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ShareRewardConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NAGFMDDKOBO_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
