#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightAffixConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GBPJODPFFJD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDFAC50)
#define GBPJODPFFJD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDFB220)
#define GBPJODPFFJD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDFADC0)
#define GBPJODPFFJD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDFA6C0)
#define GBPJODPFFJD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDFA950)
#define GBPJODPFFJD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDFAE60)
#define GBPJODPFFJD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDFAEB0)
#define GBPJODPFFJD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDFAC90)
#define GBPJODPFFJD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDFA8F0)
#define GBPJODPFFJD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDFAAC0)
#define GBPJODPFFJD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDFAD20)
#define GBPJODPFFJD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDFA640)

inline static constexpr unsigned int GBPJODPFFJD_TypeDefinitionIndex = 13399;

	class GBPJODPFFJD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAffixConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAffixConfigRow*>**)UnitySDK::FromName("", "GBPJODPFFJD")->GetStaticField(0x14820);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GBPJODPFFJD")->GetStaticField(0x14828);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GBPJODPFFJD")->GetStaticField(0x14830);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GBPJODPFFJD")->GetStaticField(0x4560);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GBPJODPFFJD")->GetStaticField(0x4561);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBPJODPFFJD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAffixConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAffixConfigRow*>*(*)())((::PBYTE)hIl2Cpp + GBPJODPFFJD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GBPJODPFFJD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAffixConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightAffixConfigRow*>(*)())((::PBYTE)hIl2Cpp + GBPJODPFFJD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightAffixConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightAffixConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GBPJODPFFJD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GBPJODPFFJD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBPJODPFFJD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBPJODPFFJD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GBPJODPFFJD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GBPJODPFFJD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GBPJODPFFJD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightAffixConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightAffixConfigRow*))((::PBYTE)hIl2Cpp + GBPJODPFFJD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
