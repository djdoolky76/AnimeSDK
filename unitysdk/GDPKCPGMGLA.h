#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSpecialGoodsConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GDPKCPGMGLA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE31C00)
#define GDPKCPGMGLA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE321D0)
#define GDPKCPGMGLA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE31D70)
#define GDPKCPGMGLA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE31670)
#define GDPKCPGMGLA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE31900)
#define GDPKCPGMGLA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE31E10)
#define GDPKCPGMGLA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE31E60)
#define GDPKCPGMGLA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE31C40)
#define GDPKCPGMGLA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE318A0)
#define GDPKCPGMGLA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE31A70)
#define GDPKCPGMGLA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE31CD0)
#define GDPKCPGMGLA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE315F0)

inline static constexpr unsigned int GDPKCPGMGLA_TypeDefinitionIndex = 13600;

	class GDPKCPGMGLA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GDPKCPGMGLA")->GetStaticField(0x16CA0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GDPKCPGMGLA")->GetStaticField(0x16CA8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpecialGoodsConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpecialGoodsConfigRow*>**)UnitySDK::FromName("", "GDPKCPGMGLA")->GetStaticField(0x16CB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GDPKCPGMGLA")->GetStaticField(0x55C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GDPKCPGMGLA")->GetStaticField(0x55C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDPKCPGMGLA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpecialGoodsConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpecialGoodsConfigRow*>*(*)())((::PBYTE)hIl2Cpp + GDPKCPGMGLA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GDPKCPGMGLA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpecialGoodsConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSpecialGoodsConfigRow*>(*)())((::PBYTE)hIl2Cpp + GDPKCPGMGLA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightSpecialGoodsConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightSpecialGoodsConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GDPKCPGMGLA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GDPKCPGMGLA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDPKCPGMGLA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDPKCPGMGLA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GDPKCPGMGLA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GDPKCPGMGLA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GDPKCPGMGLA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightSpecialGoodsConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSpecialGoodsConfigRow*))((::PBYTE)hIl2Cpp + GDPKCPGMGLA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
