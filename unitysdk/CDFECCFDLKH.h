#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyShipRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CDFECCFDLKH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9E2AF0)
#define CDFECCFDLKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9E3070)
#define CDFECCFDLKH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9E2C60)
#define CDFECCFDLKH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9E25E0)
#define CDFECCFDLKH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9E2870)
#define CDFECCFDLKH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9E2D00)
#define CDFECCFDLKH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9E2D50)
#define CDFECCFDLKH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9E2B30)
#define CDFECCFDLKH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9E2810)
#define CDFECCFDLKH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9E29A0)
#define CDFECCFDLKH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9E2BC0)
#define CDFECCFDLKH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9E2560)

inline static constexpr unsigned int CDFECCFDLKH_TypeDefinitionIndex = 12617;

	class CDFECCFDLKH : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CDFECCFDLKH")->GetStaticField(0x38FD0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyShipRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyShipRow*>**)UnitySDK::FromName("", "CDFECCFDLKH")->GetStaticField(0x38FD8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CDFECCFDLKH")->GetStaticField(0x38FE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CDFECCFDLKH")->GetStaticField(0xB890);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CDFECCFDLKH")->GetStaticField(0xB891);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDFECCFDLKH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyShipRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyShipRow*>*(*)())((::PBYTE)hIl2Cpp + CDFECCFDLKH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CDFECCFDLKH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyShipRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyShipRow*>(*)())((::PBYTE)hIl2Cpp + CDFECCFDLKH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AlleyShipRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AlleyShipRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CDFECCFDLKH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CDFECCFDLKH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDFECCFDLKH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDFECCFDLKH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CDFECCFDLKH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CDFECCFDLKH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CDFECCFDLKH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AlleyShipRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleyShipRow*))((::PBYTE)hIl2Cpp + CDFECCFDLKH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
