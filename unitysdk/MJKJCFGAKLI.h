#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerTagCombinationRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MJKJCFGAKLI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1B5CD0)
#define MJKJCFGAKLI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1B62A0)
#define MJKJCFGAKLI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1B5E40)
#define MJKJCFGAKLI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1B5740)
#define MJKJCFGAKLI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1B59D0)
#define MJKJCFGAKLI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1B5EE0)
#define MJKJCFGAKLI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1B5F30)
#define MJKJCFGAKLI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1B5D10)
#define MJKJCFGAKLI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1B5970)
#define MJKJCFGAKLI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1B5B40)
#define MJKJCFGAKLI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1B5DA0)
#define MJKJCFGAKLI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1B56C0)

inline static constexpr unsigned int MJKJCFGAKLI_TypeDefinitionIndex = 13153;

	class MJKJCFGAKLI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerTagCombinationRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerTagCombinationRow*>**)UnitySDK::FromName("", "MJKJCFGAKLI")->GetStaticField(0x4D800);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MJKJCFGAKLI")->GetStaticField(0x4D808);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MJKJCFGAKLI")->GetStaticField(0x4D810);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MJKJCFGAKLI")->GetStaticField(0x11D00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MJKJCFGAKLI")->GetStaticField(0x11D01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJKJCFGAKLI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerTagCombinationRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerTagCombinationRow*>*(*)())((::PBYTE)hIl2Cpp + MJKJCFGAKLI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MJKJCFGAKLI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerTagCombinationRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerTagCombinationRow*>(*)())((::PBYTE)hIl2Cpp + MJKJCFGAKLI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerTagCombinationRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerTagCombinationRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MJKJCFGAKLI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MJKJCFGAKLI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJKJCFGAKLI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJKJCFGAKLI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MJKJCFGAKLI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MJKJCFGAKLI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MJKJCFGAKLI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DrinkMakerTagCombinationRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerTagCombinationRow*))((::PBYTE)hIl2Cpp + MJKJCFGAKLI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
