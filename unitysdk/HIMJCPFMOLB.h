#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerDecorationRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HIMJCPFMOLB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEB1730)
#define HIMJCPFMOLB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEB1CB0)
#define HIMJCPFMOLB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEB18A0)
#define HIMJCPFMOLB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEB1220)
#define HIMJCPFMOLB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEB14B0)
#define HIMJCPFMOLB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEB1940)
#define HIMJCPFMOLB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEB1990)
#define HIMJCPFMOLB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEB1770)
#define HIMJCPFMOLB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEB1450)
#define HIMJCPFMOLB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEB15E0)
#define HIMJCPFMOLB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEB1800)
#define HIMJCPFMOLB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEB11A0)

inline static constexpr unsigned int HIMJCPFMOLB_TypeDefinitionIndex = 13175;

	class HIMJCPFMOLB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerDecorationRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerDecorationRow*>**)UnitySDK::FromName("", "HIMJCPFMOLB")->GetStaticField(0x1E2A0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HIMJCPFMOLB")->GetStaticField(0x1E2A8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HIMJCPFMOLB")->GetStaticField(0x1E2B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HIMJCPFMOLB")->GetStaticField(0x6D70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HIMJCPFMOLB")->GetStaticField(0x6D71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIMJCPFMOLB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerDecorationRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerDecorationRow*>*(*)())((::PBYTE)hIl2Cpp + HIMJCPFMOLB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HIMJCPFMOLB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerDecorationRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerDecorationRow*>(*)())((::PBYTE)hIl2Cpp + HIMJCPFMOLB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerDecorationRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerDecorationRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HIMJCPFMOLB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HIMJCPFMOLB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIMJCPFMOLB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIMJCPFMOLB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HIMJCPFMOLB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HIMJCPFMOLB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HIMJCPFMOLB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DrinkMakerDecorationRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerDecorationRow*))((::PBYTE)hIl2Cpp + HIMJCPFMOLB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
