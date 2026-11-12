#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirLockActionConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KMEGNIMKEAE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E2A6100)
#define KMEGNIMKEAE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A66D0)
#define KMEGNIMKEAE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E2A6270)
#define KMEGNIMKEAE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E2A5B70)
#define KMEGNIMKEAE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E2A5E00)
#define KMEGNIMKEAE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E2A6310)
#define KMEGNIMKEAE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E2A6360)
#define KMEGNIMKEAE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E2A6140)
#define KMEGNIMKEAE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E2A5DA0)
#define KMEGNIMKEAE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E2A5F70)
#define KMEGNIMKEAE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E2A61D0)
#define KMEGNIMKEAE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E2A5AF0)

inline static constexpr unsigned int KMEGNIMKEAE_TypeDefinitionIndex = 12232;

	class KMEGNIMKEAE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirLockActionConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirLockActionConfigRow*>**)UnitySDK::FromName("", "KMEGNIMKEAE")->GetStaticField(0x30220);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KMEGNIMKEAE")->GetStaticField(0x30228);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KMEGNIMKEAE")->GetStaticField(0x30230);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KMEGNIMKEAE")->GetStaticField(0xA280);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KMEGNIMKEAE")->GetStaticField(0xA281);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMEGNIMKEAE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirLockActionConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirLockActionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + KMEGNIMKEAE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KMEGNIMKEAE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirLockActionConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirLockActionConfigRow*>(*)())((::PBYTE)hIl2Cpp + KMEGNIMKEAE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PixAirLockActionConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PixAirLockActionConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KMEGNIMKEAE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KMEGNIMKEAE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMEGNIMKEAE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMEGNIMKEAE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KMEGNIMKEAE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KMEGNIMKEAE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KMEGNIMKEAE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PixAirLockActionConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PixAirLockActionConfigRow*))((::PBYTE)hIl2Cpp + KMEGNIMKEAE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
