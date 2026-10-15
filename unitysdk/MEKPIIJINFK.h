#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class NDONMNFEIOE;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MEKPIIJINFK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D124830)
#define MEKPIIJINFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D125340)
#define MEKPIIJINFK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D124BD0)
#define MEKPIIJINFK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D124870)
#define MEKPIIJINFK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1250C0)
#define MEKPIIJINFK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D124C70)
#define MEKPIIJINFK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D124CC0)
#define MEKPIIJINFK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D124AA0)
#define MEKPIIJINFK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D125060)
#define MEKPIIJINFK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1251F0)
#define MEKPIIJINFK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D124B30)
#define MEKPIIJINFK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D124FE0)

inline static constexpr unsigned int MEKPIIJINFK_TypeDefinitionIndex = 15114;

	class MEKPIIJINFK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MEKPIIJINFK")->GetStaticField(0x42DA0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MEKPIIJINFK")->GetStaticField(0x42DA8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NDONMNFEIOE*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NDONMNFEIOE*>**)UnitySDK::FromName("", "MEKPIIJINFK")->GetStaticField(0x42DB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MEKPIIJINFK")->GetStaticField(0xFE10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MEKPIIJINFK")->GetStaticField(0xFE11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEKPIIJINFK_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MEKPIIJINFK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEKPIIJINFK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEKPIIJINFK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MEKPIIJINFK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MEKPIIJINFK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MEKPIIJINFK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::NDONMNFEIOE* a1)
		{
			return ((::System::Void(*)(::NDONMNFEIOE*))((::PBYTE)hIl2Cpp + MEKPIIJINFK_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NDONMNFEIOE*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NDONMNFEIOE*>*(*)())((::PBYTE)hIl2Cpp + MEKPIIJINFK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MEKPIIJINFK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NDONMNFEIOE*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NDONMNFEIOE*>(*)())((::PBYTE)hIl2Cpp + MEKPIIJINFK_FPHGMAMDFHE_OFFSET))();
		}

		static ::NDONMNFEIOE* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::NDONMNFEIOE*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MEKPIIJINFK_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
