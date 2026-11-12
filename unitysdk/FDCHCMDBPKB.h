#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueHandBookEventRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FDCHCMDBPKB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DFB1900)
#define FDCHCMDBPKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFB1E80)
#define FDCHCMDBPKB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DFB1A70)
#define FDCHCMDBPKB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DFB13B0)
#define FDCHCMDBPKB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DFB1640)
#define FDCHCMDBPKB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DFB1B10)
#define FDCHCMDBPKB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DFB1B60)
#define FDCHCMDBPKB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DFB1940)
#define FDCHCMDBPKB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DFB15E0)
#define FDCHCMDBPKB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DFB1770)
#define FDCHCMDBPKB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DFB19D0)
#define FDCHCMDBPKB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DFB1330)

inline static constexpr unsigned int FDCHCMDBPKB_TypeDefinitionIndex = 14988;

	class FDCHCMDBPKB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FDCHCMDBPKB")->GetStaticField(0x40F40);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandBookEventRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandBookEventRow*>**)UnitySDK::FromName("", "FDCHCMDBPKB")->GetStaticField(0x40F48);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FDCHCMDBPKB")->GetStaticField(0x40F50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FDCHCMDBPKB")->GetStaticField(0xDE30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FDCHCMDBPKB")->GetStaticField(0xDE31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDCHCMDBPKB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandBookEventRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandBookEventRow*>*(*)())((::PBYTE)hIl2Cpp + FDCHCMDBPKB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FDCHCMDBPKB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandBookEventRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandBookEventRow*>(*)())((::PBYTE)hIl2Cpp + FDCHCMDBPKB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueHandBookEventRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueHandBookEventRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FDCHCMDBPKB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FDCHCMDBPKB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDCHCMDBPKB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDCHCMDBPKB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FDCHCMDBPKB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FDCHCMDBPKB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FDCHCMDBPKB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueHandBookEventRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueHandBookEventRow*))((::PBYTE)hIl2Cpp + FDCHCMDBPKB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
