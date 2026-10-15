#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityQuestTabGroupUIRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HFJLLNOALAK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEA1E30)
#define HFJLLNOALAK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEA2400)
#define HFJLLNOALAK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEA1FA0)
#define HFJLLNOALAK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEA18A0)
#define HFJLLNOALAK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEA1B30)
#define HFJLLNOALAK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEA2040)
#define HFJLLNOALAK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEA2090)
#define HFJLLNOALAK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEA1E70)
#define HFJLLNOALAK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEA1AD0)
#define HFJLLNOALAK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEA1CA0)
#define HFJLLNOALAK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEA1F00)
#define HFJLLNOALAK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEA1820)

inline static constexpr unsigned int HFJLLNOALAK_TypeDefinitionIndex = 12310;

	class HFJLLNOALAK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestTabGroupUIRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestTabGroupUIRow*>**)UnitySDK::FromName("", "HFJLLNOALAK")->GetStaticField(0x1D3D0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HFJLLNOALAK")->GetStaticField(0x1D3D8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HFJLLNOALAK")->GetStaticField(0x1D3E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HFJLLNOALAK")->GetStaticField(0x6AA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HFJLLNOALAK")->GetStaticField(0x6AA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFJLLNOALAK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestTabGroupUIRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestTabGroupUIRow*>*(*)())((::PBYTE)hIl2Cpp + HFJLLNOALAK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HFJLLNOALAK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestTabGroupUIRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityQuestTabGroupUIRow*>(*)())((::PBYTE)hIl2Cpp + HFJLLNOALAK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityQuestTabGroupUIRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityQuestTabGroupUIRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HFJLLNOALAK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HFJLLNOALAK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFJLLNOALAK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFJLLNOALAK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HFJLLNOALAK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HFJLLNOALAK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HFJLLNOALAK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityQuestTabGroupUIRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityQuestTabGroupUIRow*))((::PBYTE)hIl2Cpp + HFJLLNOALAK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
