#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightChimeraShopPoolConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BFDGAMOGIAO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1F1835B0)
#define BFDGAMOGIAO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F183C50)
#define BFDGAMOGIAO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1F1837A0)
#define BFDGAMOGIAO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1F182EB0)
#define BFDGAMOGIAO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1F183210)
#define BFDGAMOGIAO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1F183870)
#define BFDGAMOGIAO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1F1838E0)
#define BFDGAMOGIAO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1F183610)
#define BFDGAMOGIAO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1F183190)
#define BFDGAMOGIAO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1F1833C0)
#define BFDGAMOGIAO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1F1836D0)
#define BFDGAMOGIAO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1F182DA0)

inline static constexpr unsigned int BFDGAMOGIAO_TypeDefinitionIndex = 13859;

	class BFDGAMOGIAO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BFDGAMOGIAO")->GetStaticField(0x476D0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BFDGAMOGIAO")->GetStaticField(0x476D8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightChimeraShopPoolConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightChimeraShopPoolConfigRow*>**)UnitySDK::FromName("", "BFDGAMOGIAO")->GetStaticField(0x476E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BFDGAMOGIAO")->GetStaticField(0xDE50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BFDGAMOGIAO")->GetStaticField(0xDE51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFDGAMOGIAO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightChimeraShopPoolConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightChimeraShopPoolConfigRow*>*(*)())((::PBYTE)hIl2Cpp + BFDGAMOGIAO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BFDGAMOGIAO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightChimeraShopPoolConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightChimeraShopPoolConfigRow*>(*)())((::PBYTE)hIl2Cpp + BFDGAMOGIAO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightChimeraShopPoolConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightChimeraShopPoolConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BFDGAMOGIAO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BFDGAMOGIAO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFDGAMOGIAO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFDGAMOGIAO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BFDGAMOGIAO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BFDGAMOGIAO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BFDGAMOGIAO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightChimeraShopPoolConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightChimeraShopPoolConfigRow*))((::PBYTE)hIl2Cpp + BFDGAMOGIAO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
