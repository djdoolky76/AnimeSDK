#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/TeamLimitType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamLimitTypeEventRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HDMMHHEOHMF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE953C0)
#define HDMMHHEOHMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE95FA0)
#define HDMMHHEOHMF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE95760)
#define HDMMHHEOHMF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE95400)
#define HDMMHHEOHMF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE95CA0)
#define HDMMHHEOHMF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE95800)
#define HDMMHHEOHMF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE95850)
#define HDMMHHEOHMF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE95630)
#define HDMMHHEOHMF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE95C40)
#define HDMMHHEOHMF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE95E10)
#define HDMMHHEOHMF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE956C0)
#define HDMMHHEOHMF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE95BC0)

	class HDMMHHEOHMF : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HDMMHHEOHMF")->GetStaticField(0x1CBA0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitTypeEventRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitTypeEventRow*>**)UnitySDK::FromName("", "HDMMHHEOHMF")->GetStaticField(0x1CBA8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HDMMHHEOHMF")->GetStaticField(0x1CBB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HDMMHHEOHMF")->GetStaticField(0x67E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HDMMHHEOHMF")->GetStaticField(0x67E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDMMHHEOHMF_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HDMMHHEOHMF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDMMHHEOHMF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDMMHHEOHMF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HDMMHHEOHMF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HDMMHHEOHMF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HDMMHHEOHMF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TeamLimitTypeEventRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TeamLimitTypeEventRow*))((::PBYTE)hIl2Cpp + HDMMHHEOHMF_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitTypeEventRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitTypeEventRow*>*(*)())((::PBYTE)hIl2Cpp + HDMMHHEOHMF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HDMMHHEOHMF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitTypeEventRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitTypeEventRow*>(*)())((::PBYTE)hIl2Cpp + HDMMHHEOHMF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TeamLimitTypeEventRow* LMBKNCAIDLC(::RPG::GameCore::TeamLimitType a1)
		{
			return ((::RPG::GameCore::TeamLimitTypeEventRow*(*)(::RPG::GameCore::TeamLimitType))((::PBYTE)hIl2Cpp + HDMMHHEOHMF_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
