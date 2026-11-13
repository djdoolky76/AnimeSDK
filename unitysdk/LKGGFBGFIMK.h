#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesAwardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LKGGFBGFIMK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E4010D0)
#define LKGGFBGFIMK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4016A0)
#define LKGGFBGFIMK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E401240)
#define LKGGFBGFIMK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E400B40)
#define LKGGFBGFIMK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E400DD0)
#define LKGGFBGFIMK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E4012E0)
#define LKGGFBGFIMK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E401330)
#define LKGGFBGFIMK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E401110)
#define LKGGFBGFIMK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E400D70)
#define LKGGFBGFIMK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E400F40)
#define LKGGFBGFIMK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E4011A0)
#define LKGGFBGFIMK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E400AC0)

inline static constexpr unsigned int LKGGFBGFIMK_TypeDefinitionIndex = 11123;

	class LKGGFBGFIMK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LKGGFBGFIMK")->GetStaticField(0x3B820);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LKGGFBGFIMK")->GetStaticField(0x3B828);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesAwardRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesAwardRow*>**)UnitySDK::FromName("", "LKGGFBGFIMK")->GetStaticField(0x3B830);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LKGGFBGFIMK")->GetStaticField(0xBD80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LKGGFBGFIMK")->GetStaticField(0xBD81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKGGFBGFIMK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesAwardRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesAwardRow*>*(*)())((::PBYTE)hIl2Cpp + LKGGFBGFIMK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LKGGFBGFIMK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesAwardRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingFesAwardRow*>(*)())((::PBYTE)hIl2Cpp + LKGGFBGFIMK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChenLingFesAwardRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChenLingFesAwardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LKGGFBGFIMK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LKGGFBGFIMK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKGGFBGFIMK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKGGFBGFIMK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LKGGFBGFIMK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LKGGFBGFIMK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LKGGFBGFIMK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChenLingFesAwardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChenLingFesAwardRow*))((::PBYTE)hIl2Cpp + LKGGFBGFIMK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
