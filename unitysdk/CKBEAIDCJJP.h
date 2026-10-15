#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DrinkMakerCupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CKBEAIDCJJP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DBEFEF0)
#define CKBEAIDCJJP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBF0470)
#define CKBEAIDCJJP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DBF0060)
#define CKBEAIDCJJP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DBEF9E0)
#define CKBEAIDCJJP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DBEFC70)
#define CKBEAIDCJJP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DBF0100)
#define CKBEAIDCJJP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DBF0150)
#define CKBEAIDCJJP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DBEFF30)
#define CKBEAIDCJJP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DBEFC10)
#define CKBEAIDCJJP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DBEFDA0)
#define CKBEAIDCJJP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DBEFFC0)
#define CKBEAIDCJJP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DBEF960)

inline static constexpr unsigned int CKBEAIDCJJP_TypeDefinitionIndex = 13167;

	class CKBEAIDCJJP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCupRow*>**)UnitySDK::FromName("", "CKBEAIDCJJP")->GetStaticField(0x3D740);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CKBEAIDCJJP")->GetStaticField(0x3D748);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CKBEAIDCJJP")->GetStaticField(0x3D750);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CKBEAIDCJJP")->GetStaticField(0xE730);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CKBEAIDCJJP")->GetStaticField(0xE731);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKBEAIDCJJP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCupRow*>*(*)())((::PBYTE)hIl2Cpp + CKBEAIDCJJP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CKBEAIDCJJP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerCupRow*>(*)())((::PBYTE)hIl2Cpp + CKBEAIDCJJP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerCupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerCupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CKBEAIDCJJP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CKBEAIDCJJP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKBEAIDCJJP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKBEAIDCJJP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CKBEAIDCJJP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CKBEAIDCJJP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CKBEAIDCJJP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DrinkMakerCupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerCupRow*))((::PBYTE)hIl2Cpp + CKBEAIDCJJP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
