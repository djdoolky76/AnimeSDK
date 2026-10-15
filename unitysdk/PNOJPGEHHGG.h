#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChestMonsterRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNOJPGEHHGG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2E6ED0)
#define PNOJPGEHHGG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2E7450)
#define PNOJPGEHHGG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2E7040)
#define PNOJPGEHHGG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2E6980)
#define PNOJPGEHHGG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2E6C10)
#define PNOJPGEHHGG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2E70E0)
#define PNOJPGEHHGG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2E7130)
#define PNOJPGEHHGG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2E6F10)
#define PNOJPGEHHGG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2E6BB0)
#define PNOJPGEHHGG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2E6D40)
#define PNOJPGEHHGG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2E6FA0)
#define PNOJPGEHHGG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2E6900)

inline static constexpr unsigned int PNOJPGEHHGG_TypeDefinitionIndex = 14388;

	class PNOJPGEHHGG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PNOJPGEHHGG")->GetStaticField(0x52420);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChestMonsterRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChestMonsterRow*>**)UnitySDK::FromName("", "PNOJPGEHHGG")->GetStaticField(0x52428);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PNOJPGEHHGG")->GetStaticField(0x52430);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PNOJPGEHHGG")->GetStaticField(0x127E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PNOJPGEHHGG")->GetStaticField(0x127E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNOJPGEHHGG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChestMonsterRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChestMonsterRow*>*(*)())((::PBYTE)hIl2Cpp + PNOJPGEHHGG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PNOJPGEHHGG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChestMonsterRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChestMonsterRow*>(*)())((::PBYTE)hIl2Cpp + PNOJPGEHHGG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChestMonsterRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChestMonsterRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PNOJPGEHHGG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PNOJPGEHHGG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNOJPGEHHGG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNOJPGEHHGG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PNOJPGEHHGG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNOJPGEHHGG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PNOJPGEHHGG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChestMonsterRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChestMonsterRow*))((::PBYTE)hIl2Cpp + PNOJPGEHHGG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
