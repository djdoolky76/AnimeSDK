#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveWorldTagRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MHHDMMLOCGA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D17DF50)
#define MHHDMMLOCGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D17E4D0)
#define MHHDMMLOCGA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D17E0C0)
#define MHHDMMLOCGA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D17DA00)
#define MHHDMMLOCGA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D17DC90)
#define MHHDMMLOCGA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D17E160)
#define MHHDMMLOCGA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D17E1B0)
#define MHHDMMLOCGA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D17DF90)
#define MHHDMMLOCGA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D17DC30)
#define MHHDMMLOCGA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D17DE00)
#define MHHDMMLOCGA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D17E020)
#define MHHDMMLOCGA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D17D980)

inline static constexpr unsigned int MHHDMMLOCGA_TypeDefinitionIndex = 11775;

	class MHHDMMLOCGA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MHHDMMLOCGA")->GetStaticField(0x46600);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MHHDMMLOCGA")->GetStaticField(0x46608);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveWorldTagRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveWorldTagRow*>**)UnitySDK::FromName("", "MHHDMMLOCGA")->GetStaticField(0x46610);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MHHDMMLOCGA")->GetStaticField(0x10880);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MHHDMMLOCGA")->GetStaticField(0x10881);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHHDMMLOCGA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveWorldTagRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveWorldTagRow*>*(*)())((::PBYTE)hIl2Cpp + MHHDMMLOCGA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MHHDMMLOCGA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveWorldTagRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveWorldTagRow*>(*)())((::PBYTE)hIl2Cpp + MHHDMMLOCGA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveWorldTagRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveWorldTagRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MHHDMMLOCGA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MHHDMMLOCGA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHHDMMLOCGA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHHDMMLOCGA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MHHDMMLOCGA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MHHDMMLOCGA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MHHDMMLOCGA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveWorldTagRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveWorldTagRow*))((::PBYTE)hIl2Cpp + MHHDMMLOCGA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
