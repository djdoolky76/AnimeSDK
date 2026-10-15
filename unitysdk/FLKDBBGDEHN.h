#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class FLKDBBGDEHN_OLPHBCFKOGG;
namespace RPG::GameCore { class ClientLogConfigRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FLKDBBGDEHN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE053E0)
#define FLKDBBGDEHN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE05FA0)
#define FLKDBBGDEHN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE05550)
#define FLKDBBGDEHN_EKOKBCIGCMG_OFFSET UNITYSDK_OFFSET(0x1CE059F0)
#define FLKDBBGDEHN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE04E90)
#define FLKDBBGDEHN_FJJMCOPJILP_OFFSET UNITYSDK_OFFSET(0x1CE05A80)
#define FLKDBBGDEHN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE05120)
#define FLKDBBGDEHN_HFBAFEEPOLN_OFFSET UNITYSDK_OFFSET(0x1CE05960)
#define FLKDBBGDEHN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE055F0)
#define FLKDBBGDEHN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE05640)
#define FLKDBBGDEHN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE05420)
#define FLKDBBGDEHN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE050C0)
#define FLKDBBGDEHN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE05250)
#define FLKDBBGDEHN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE054B0)
#define FLKDBBGDEHN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE04E10)

inline static constexpr unsigned int FLKDBBGDEHN_TypeDefinitionIndex = 13232;

	class FLKDBBGDEHN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClientLogConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClientLogConfigRow*>**)UnitySDK::FromName("", "FLKDBBGDEHN")->GetStaticField(0x148E0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FLKDBBGDEHN")->GetStaticField(0x148E8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FLKDBBGDEHN")->GetStaticField(0x148F0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>** StaticGet_PNKIHCCINND()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>**)UnitySDK::FromName("", "FLKDBBGDEHN")->GetStaticField(0x148F8);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FLKDBBGDEHN")->GetStaticField(0x4E30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FLKDBBGDEHN")->GetStaticField(0x4E31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLKDBBGDEHN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClientLogConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClientLogConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FLKDBBGDEHN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLKDBBGDEHN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClientLogConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClientLogConfigRow*>(*)())((::PBYTE)hIl2Cpp + FLKDBBGDEHN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ClientLogConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ClientLogConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FLKDBBGDEHN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLKDBBGDEHN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLKDBBGDEHN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLKDBBGDEHN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FLKDBBGDEHN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FLKDBBGDEHN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FLKDBBGDEHN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ClientLogConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ClientLogConfigRow*))((::PBYTE)hIl2Cpp + FLKDBBGDEHN_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Void HFBAFEEPOLN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLKDBBGDEHN_HFBAFEEPOLN_OFFSET))();
		}

		static ::FLKDBBGDEHN_OLPHBCFKOGG* EKOKBCIGCMG(::System::UInt32 a1)
		{
			return ((::FLKDBBGDEHN_OLPHBCFKOGG*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FLKDBBGDEHN_EKOKBCIGCMG_OFFSET))(a1);
		}

		static ::System::Void FJJMCOPJILP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLKDBBGDEHN_FJJMCOPJILP_OFFSET))();
		}

	};
