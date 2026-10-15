#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class B51RacingLiveryRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AGPJLBLHCCD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCC19B0)
#define AGPJLBLHCCD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCC1F30)
#define AGPJLBLHCCD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCC1B20)
#define AGPJLBLHCCD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCC1460)
#define AGPJLBLHCCD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCC16F0)
#define AGPJLBLHCCD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCC1BC0)
#define AGPJLBLHCCD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCC1C10)
#define AGPJLBLHCCD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCC19F0)
#define AGPJLBLHCCD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCC1690)
#define AGPJLBLHCCD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCC1860)
#define AGPJLBLHCCD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCC1A80)
#define AGPJLBLHCCD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCC13E0)

inline static constexpr unsigned int AGPJLBLHCCD_TypeDefinitionIndex = 10953;

	class AGPJLBLHCCD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingLiveryRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingLiveryRow*>**)UnitySDK::FromName("", "AGPJLBLHCCD")->GetStaticField(0x38790);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AGPJLBLHCCD")->GetStaticField(0x38798);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AGPJLBLHCCD")->GetStaticField(0x387A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AGPJLBLHCCD")->GetStaticField(0xC0D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AGPJLBLHCCD")->GetStaticField(0xC0D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGPJLBLHCCD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingLiveryRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingLiveryRow*>*(*)())((::PBYTE)hIl2Cpp + AGPJLBLHCCD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AGPJLBLHCCD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingLiveryRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingLiveryRow*>(*)())((::PBYTE)hIl2Cpp + AGPJLBLHCCD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::B51RacingLiveryRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::B51RacingLiveryRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AGPJLBLHCCD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AGPJLBLHCCD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGPJLBLHCCD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGPJLBLHCCD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AGPJLBLHCCD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AGPJLBLHCCD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AGPJLBLHCCD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::B51RacingLiveryRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::B51RacingLiveryRow*))((::PBYTE)hIl2Cpp + AGPJLBLHCCD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
