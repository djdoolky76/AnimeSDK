#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMonsterEliteDropItemRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GEHAIMDJNOL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E010760)
#define GEHAIMDJNOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E010CE0)
#define GEHAIMDJNOL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E0108D0)
#define GEHAIMDJNOL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E010210)
#define GEHAIMDJNOL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E0104A0)
#define GEHAIMDJNOL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E010970)
#define GEHAIMDJNOL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E0109C0)
#define GEHAIMDJNOL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E0107A0)
#define GEHAIMDJNOL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E010440)
#define GEHAIMDJNOL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E010610)
#define GEHAIMDJNOL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E010830)
#define GEHAIMDJNOL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E010190)

inline static constexpr unsigned int GEHAIMDJNOL_TypeDefinitionIndex = 14850;

	class GEHAIMDJNOL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterEliteDropItemRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterEliteDropItemRow*>**)UnitySDK::FromName("", "GEHAIMDJNOL")->GetStaticField(0xE720);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GEHAIMDJNOL")->GetStaticField(0xE728);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GEHAIMDJNOL")->GetStaticField(0xE730);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GEHAIMDJNOL")->GetStaticField(0x3000);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GEHAIMDJNOL")->GetStaticField(0x3001);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEHAIMDJNOL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterEliteDropItemRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterEliteDropItemRow*>*(*)())((::PBYTE)hIl2Cpp + GEHAIMDJNOL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GEHAIMDJNOL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterEliteDropItemRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterEliteDropItemRow*>(*)())((::PBYTE)hIl2Cpp + GEHAIMDJNOL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueMonsterEliteDropItemRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueMonsterEliteDropItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GEHAIMDJNOL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GEHAIMDJNOL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEHAIMDJNOL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEHAIMDJNOL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GEHAIMDJNOL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GEHAIMDJNOL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GEHAIMDJNOL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueMonsterEliteDropItemRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMonsterEliteDropItemRow*))((::PBYTE)hIl2Cpp + GEHAIMDJNOL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
