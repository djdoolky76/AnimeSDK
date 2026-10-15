#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveFinalActGiftRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KKJLJCBGGAI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D09EB50)
#define KKJLJCBGGAI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D09F120)
#define KKJLJCBGGAI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D09ECC0)
#define KKJLJCBGGAI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D09E5C0)
#define KKJLJCBGGAI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D09E850)
#define KKJLJCBGGAI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D09ED60)
#define KKJLJCBGGAI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D09EDB0)
#define KKJLJCBGGAI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D09EB90)
#define KKJLJCBGGAI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D09E7F0)
#define KKJLJCBGGAI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D09E9C0)
#define KKJLJCBGGAI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D09EC20)
#define KKJLJCBGGAI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D09E540)

inline static constexpr unsigned int KKJLJCBGGAI_TypeDefinitionIndex = 11693;

	class KKJLJCBGGAI : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KKJLJCBGGAI")->GetStaticField(0x35B20);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveFinalActGiftRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveFinalActGiftRow*>**)UnitySDK::FromName("", "KKJLJCBGGAI")->GetStaticField(0x35B28);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KKJLJCBGGAI")->GetStaticField(0x35B30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KKJLJCBGGAI")->GetStaticField(0xB540);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KKJLJCBGGAI")->GetStaticField(0xB541);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKJLJCBGGAI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveFinalActGiftRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveFinalActGiftRow*>*(*)())((::PBYTE)hIl2Cpp + KKJLJCBGGAI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KKJLJCBGGAI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveFinalActGiftRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveFinalActGiftRow*>(*)())((::PBYTE)hIl2Cpp + KKJLJCBGGAI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveFinalActGiftRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveFinalActGiftRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KKJLJCBGGAI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KKJLJCBGGAI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKJLJCBGGAI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKJLJCBGGAI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KKJLJCBGGAI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KKJLJCBGGAI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KKJLJCBGGAI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveFinalActGiftRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveFinalActGiftRow*))((::PBYTE)hIl2Cpp + KKJLJCBGGAI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
