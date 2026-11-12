#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveGiftActionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KBNCIPIEJPI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E2531F0)
#define KBNCIPIEJPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2537C0)
#define KBNCIPIEJPI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E253360)
#define KBNCIPIEJPI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E252C60)
#define KBNCIPIEJPI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E252EF0)
#define KBNCIPIEJPI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E253400)
#define KBNCIPIEJPI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E253450)
#define KBNCIPIEJPI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E253230)
#define KBNCIPIEJPI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E252E90)
#define KBNCIPIEJPI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E253060)
#define KBNCIPIEJPI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E2532C0)
#define KBNCIPIEJPI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E252BE0)

inline static constexpr unsigned int KBNCIPIEJPI_TypeDefinitionIndex = 11862;

	class KBNCIPIEJPI : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KBNCIPIEJPI")->GetStaticField(0x2A400);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGiftActionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGiftActionRow*>**)UnitySDK::FromName("", "KBNCIPIEJPI")->GetStaticField(0x2A408);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KBNCIPIEJPI")->GetStaticField(0x2A410);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KBNCIPIEJPI")->GetStaticField(0x8860);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KBNCIPIEJPI")->GetStaticField(0x8861);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBNCIPIEJPI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGiftActionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGiftActionRow*>*(*)())((::PBYTE)hIl2Cpp + KBNCIPIEJPI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KBNCIPIEJPI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGiftActionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGiftActionRow*>(*)())((::PBYTE)hIl2Cpp + KBNCIPIEJPI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveGiftActionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveGiftActionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KBNCIPIEJPI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KBNCIPIEJPI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBNCIPIEJPI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBNCIPIEJPI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KBNCIPIEJPI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KBNCIPIEJPI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KBNCIPIEJPI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveGiftActionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveGiftActionRow*))((::PBYTE)hIl2Cpp + KBNCIPIEJPI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
