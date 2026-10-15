#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemDisplaySortNewRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AEBGJLFPIPF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CC80730)
#define AEBGJLFPIPF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC80CB0)
#define AEBGJLFPIPF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CC808A0)
#define AEBGJLFPIPF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CC801E0)
#define AEBGJLFPIPF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CC80470)
#define AEBGJLFPIPF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CC80940)
#define AEBGJLFPIPF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CC80990)
#define AEBGJLFPIPF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CC80770)
#define AEBGJLFPIPF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CC80410)
#define AEBGJLFPIPF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CC805A0)
#define AEBGJLFPIPF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CC80800)
#define AEBGJLFPIPF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CC80160)

inline static constexpr unsigned int AEBGJLFPIPF_TypeDefinitionIndex = 13889;

	class AEBGJLFPIPF : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AEBGJLFPIPF")->GetStaticField(0x3DFC0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemDisplaySortNewRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemDisplaySortNewRow*>**)UnitySDK::FromName("", "AEBGJLFPIPF")->GetStaticField(0x3DFC8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AEBGJLFPIPF")->GetStaticField(0x3DFD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AEBGJLFPIPF")->GetStaticField(0xEA10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AEBGJLFPIPF")->GetStaticField(0xEA11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEBGJLFPIPF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemDisplaySortNewRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemDisplaySortNewRow*>*(*)())((::PBYTE)hIl2Cpp + AEBGJLFPIPF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AEBGJLFPIPF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemDisplaySortNewRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemDisplaySortNewRow*>(*)())((::PBYTE)hIl2Cpp + AEBGJLFPIPF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ItemDisplaySortNewRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ItemDisplaySortNewRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AEBGJLFPIPF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AEBGJLFPIPF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEBGJLFPIPF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEBGJLFPIPF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AEBGJLFPIPF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AEBGJLFPIPF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AEBGJLFPIPF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ItemDisplaySortNewRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemDisplaySortNewRow*))((::PBYTE)hIl2Cpp + AEBGJLFPIPF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
