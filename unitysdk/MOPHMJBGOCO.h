#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirNodeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOPHMJBGOCO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1DD230)
#define MOPHMJBGOCO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1DD7B0)
#define MOPHMJBGOCO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1DD3A0)
#define MOPHMJBGOCO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1DCD20)
#define MOPHMJBGOCO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1DCFB0)
#define MOPHMJBGOCO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1DD440)
#define MOPHMJBGOCO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1DD490)
#define MOPHMJBGOCO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1DD270)
#define MOPHMJBGOCO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1DCF50)
#define MOPHMJBGOCO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1DD0E0)
#define MOPHMJBGOCO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1DD300)
#define MOPHMJBGOCO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1DCCA0)

inline static constexpr unsigned int MOPHMJBGOCO_TypeDefinitionIndex = 12132;

	class MOPHMJBGOCO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirNodeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirNodeRow*>**)UnitySDK::FromName("", "MOPHMJBGOCO")->GetStaticField(0x2AAC0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MOPHMJBGOCO")->GetStaticField(0x2AAC8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MOPHMJBGOCO")->GetStaticField(0x2AAD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MOPHMJBGOCO")->GetStaticField(0x8610);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MOPHMJBGOCO")->GetStaticField(0x8611);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOPHMJBGOCO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirNodeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirNodeRow*>*(*)())((::PBYTE)hIl2Cpp + MOPHMJBGOCO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOPHMJBGOCO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirNodeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirNodeRow*>(*)())((::PBYTE)hIl2Cpp + MOPHMJBGOCO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PixAirNodeRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PixAirNodeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MOPHMJBGOCO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOPHMJBGOCO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOPHMJBGOCO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOPHMJBGOCO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MOPHMJBGOCO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOPHMJBGOCO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MOPHMJBGOCO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PixAirNodeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PixAirNodeRow*))((::PBYTE)hIl2Cpp + MOPHMJBGOCO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
