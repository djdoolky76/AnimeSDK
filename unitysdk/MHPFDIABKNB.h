#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleMatchTitleRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MHPFDIABKNB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1ADA00)
#define MHPFDIABKNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1ADFD0)
#define MHPFDIABKNB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1ADB70)
#define MHPFDIABKNB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1AD470)
#define MHPFDIABKNB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1AD700)
#define MHPFDIABKNB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1ADC10)
#define MHPFDIABKNB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1ADC60)
#define MHPFDIABKNB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1ADA40)
#define MHPFDIABKNB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1AD6A0)
#define MHPFDIABKNB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1AD870)
#define MHPFDIABKNB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1ADAD0)
#define MHPFDIABKNB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1AD3F0)

inline static constexpr unsigned int MHPFDIABKNB_TypeDefinitionIndex = 11879;

	class MHPFDIABKNB : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MHPFDIABKNB")->GetStaticField(0x4D1C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchTitleRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchTitleRow*>**)UnitySDK::FromName("", "MHPFDIABKNB")->GetStaticField(0x4D1C8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MHPFDIABKNB")->GetStaticField(0x4D1D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MHPFDIABKNB")->GetStaticField(0x11BA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MHPFDIABKNB")->GetStaticField(0x11BA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHPFDIABKNB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchTitleRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchTitleRow*>*(*)())((::PBYTE)hIl2Cpp + MHPFDIABKNB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MHPFDIABKNB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchTitleRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchTitleRow*>(*)())((::PBYTE)hIl2Cpp + MHPFDIABKNB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MarbleMatchTitleRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MarbleMatchTitleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MHPFDIABKNB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MHPFDIABKNB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHPFDIABKNB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHPFDIABKNB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MHPFDIABKNB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MHPFDIABKNB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MHPFDIABKNB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MarbleMatchTitleRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MarbleMatchTitleRow*))((::PBYTE)hIl2Cpp + MHPFDIABKNB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
