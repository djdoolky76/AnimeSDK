#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirEffectRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MKEFPFBOFBF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E3BBBC0)
#define MKEFPFBOFBF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3BC190)
#define MKEFPFBOFBF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E3BBD30)
#define MKEFPFBOFBF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E3BB630)
#define MKEFPFBOFBF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E3BB8C0)
#define MKEFPFBOFBF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E3BBDD0)
#define MKEFPFBOFBF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E3BBE20)
#define MKEFPFBOFBF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E3BBC00)
#define MKEFPFBOFBF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E3BB860)
#define MKEFPFBOFBF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E3BBA30)
#define MKEFPFBOFBF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E3BBC90)
#define MKEFPFBOFBF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E3BB5B0)

inline static constexpr unsigned int MKEFPFBOFBF_TypeDefinitionIndex = 12227;

	class MKEFPFBOFBF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MKEFPFBOFBF")->GetStaticField(0x40320);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MKEFPFBOFBF")->GetStaticField(0x40328);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEffectRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEffectRow*>**)UnitySDK::FromName("", "MKEFPFBOFBF")->GetStaticField(0x40330);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MKEFPFBOFBF")->GetStaticField(0xDC60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MKEFPFBOFBF")->GetStaticField(0xDC61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKEFPFBOFBF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEffectRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEffectRow*>*(*)())((::PBYTE)hIl2Cpp + MKEFPFBOFBF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MKEFPFBOFBF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEffectRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirEffectRow*>(*)())((::PBYTE)hIl2Cpp + MKEFPFBOFBF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PixAirEffectRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PixAirEffectRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MKEFPFBOFBF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MKEFPFBOFBF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKEFPFBOFBF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKEFPFBOFBF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MKEFPFBOFBF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MKEFPFBOFBF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MKEFPFBOFBF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PixAirEffectRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PixAirEffectRow*))((::PBYTE)hIl2Cpp + MKEFPFBOFBF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
