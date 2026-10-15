#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveEquipDiscardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GIGEBLJALGL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE218E0)
#define GIGEBLJALGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE21EB0)
#define GIGEBLJALGL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE21A50)
#define GIGEBLJALGL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE21350)
#define GIGEBLJALGL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE215E0)
#define GIGEBLJALGL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE21AF0)
#define GIGEBLJALGL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE21B40)
#define GIGEBLJALGL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE21920)
#define GIGEBLJALGL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE21580)
#define GIGEBLJALGL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE21750)
#define GIGEBLJALGL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE219B0)
#define GIGEBLJALGL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE212D0)

inline static constexpr unsigned int GIGEBLJALGL_TypeDefinitionIndex = 11751;

	class GIGEBLJALGL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipDiscardRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipDiscardRow*>**)UnitySDK::FromName("", "GIGEBLJALGL")->GetStaticField(0x15B20);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GIGEBLJALGL")->GetStaticField(0x15B28);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GIGEBLJALGL")->GetStaticField(0x15B30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GIGEBLJALGL")->GetStaticField(0x4A10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GIGEBLJALGL")->GetStaticField(0x4A11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIGEBLJALGL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipDiscardRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipDiscardRow*>*(*)())((::PBYTE)hIl2Cpp + GIGEBLJALGL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GIGEBLJALGL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipDiscardRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipDiscardRow*>(*)())((::PBYTE)hIl2Cpp + GIGEBLJALGL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveEquipDiscardRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveEquipDiscardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GIGEBLJALGL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GIGEBLJALGL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIGEBLJALGL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIGEBLJALGL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GIGEBLJALGL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GIGEBLJALGL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GIGEBLJALGL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveEquipDiscardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveEquipDiscardRow*))((::PBYTE)hIl2Cpp + GIGEBLJALGL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
