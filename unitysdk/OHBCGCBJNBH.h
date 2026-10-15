#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveMessageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OHBCGCBJNBH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D276070)
#define OHBCGCBJNBH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D276640)
#define OHBCGCBJNBH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2761E0)
#define OHBCGCBJNBH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D275AE0)
#define OHBCGCBJNBH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D275D70)
#define OHBCGCBJNBH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D276280)
#define OHBCGCBJNBH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2762D0)
#define OHBCGCBJNBH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2760B0)
#define OHBCGCBJNBH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D275D10)
#define OHBCGCBJNBH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D275EE0)
#define OHBCGCBJNBH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D276140)
#define OHBCGCBJNBH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D275A60)

inline static constexpr unsigned int OHBCGCBJNBH_TypeDefinitionIndex = 11789;

	class OHBCGCBJNBH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveMessageRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveMessageRow*>**)UnitySDK::FromName("", "OHBCGCBJNBH")->GetStaticField(0x356C0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OHBCGCBJNBH")->GetStaticField(0x356C8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OHBCGCBJNBH")->GetStaticField(0x356D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OHBCGCBJNBH")->GetStaticField(0xB3E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OHBCGCBJNBH")->GetStaticField(0xB3E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHBCGCBJNBH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveMessageRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveMessageRow*>*(*)())((::PBYTE)hIl2Cpp + OHBCGCBJNBH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OHBCGCBJNBH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveMessageRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveMessageRow*>(*)())((::PBYTE)hIl2Cpp + OHBCGCBJNBH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveMessageRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveMessageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OHBCGCBJNBH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OHBCGCBJNBH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHBCGCBJNBH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHBCGCBJNBH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OHBCGCBJNBH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OHBCGCBJNBH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OHBCGCBJNBH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveMessageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveMessageRow*))((::PBYTE)hIl2Cpp + OHBCGCBJNBH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
