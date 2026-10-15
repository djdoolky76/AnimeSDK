#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityRaidOrderRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FFDHCMEOPJH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDE4ED0)
#define FFDHCMEOPJH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDE54A0)
#define FFDHCMEOPJH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDE5040)
#define FFDHCMEOPJH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDE4940)
#define FFDHCMEOPJH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDE4BD0)
#define FFDHCMEOPJH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDE50E0)
#define FFDHCMEOPJH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDE5130)
#define FFDHCMEOPJH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDE4F10)
#define FFDHCMEOPJH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDE4B70)
#define FFDHCMEOPJH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDE4D40)
#define FFDHCMEOPJH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDE4FA0)
#define FFDHCMEOPJH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDE48C0)

inline static constexpr unsigned int FFDHCMEOPJH_TypeDefinitionIndex = 12643;

	class FFDHCMEOPJH : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FFDHCMEOPJH")->GetStaticField(0x11020);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FFDHCMEOPJH")->GetStaticField(0x11028);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidOrderRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidOrderRow*>**)UnitySDK::FromName("", "FFDHCMEOPJH")->GetStaticField(0x11030);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FFDHCMEOPJH")->GetStaticField(0x3940);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FFDHCMEOPJH")->GetStaticField(0x3941);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFDHCMEOPJH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidOrderRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidOrderRow*>*(*)())((::PBYTE)hIl2Cpp + FFDHCMEOPJH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FFDHCMEOPJH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidOrderRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidOrderRow*>(*)())((::PBYTE)hIl2Cpp + FFDHCMEOPJH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityRaidOrderRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityRaidOrderRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FFDHCMEOPJH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FFDHCMEOPJH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFDHCMEOPJH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFDHCMEOPJH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FFDHCMEOPJH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FFDHCMEOPJH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FFDHCMEOPJH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityRaidOrderRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityRaidOrderRow*))((::PBYTE)hIl2Cpp + FFDHCMEOPJH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
