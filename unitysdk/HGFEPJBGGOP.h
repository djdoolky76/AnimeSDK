#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveGachaAvatarTextRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HGFEPJBGGOP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE77420)
#define HGFEPJBGGOP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE779F0)
#define HGFEPJBGGOP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE77590)
#define HGFEPJBGGOP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE76E90)
#define HGFEPJBGGOP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE77120)
#define HGFEPJBGGOP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE77630)
#define HGFEPJBGGOP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE77680)
#define HGFEPJBGGOP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE77460)
#define HGFEPJBGGOP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE770C0)
#define HGFEPJBGGOP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE77290)
#define HGFEPJBGGOP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE774F0)
#define HGFEPJBGGOP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE76E10)

inline static constexpr unsigned int HGFEPJBGGOP_TypeDefinitionIndex = 11777;

	class HGFEPJBGGOP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGachaAvatarTextRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGachaAvatarTextRow*>**)UnitySDK::FromName("", "HGFEPJBGGOP")->GetStaticField(0x1B5A0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HGFEPJBGGOP")->GetStaticField(0x1B5A8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HGFEPJBGGOP")->GetStaticField(0x1B5B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HGFEPJBGGOP")->GetStaticField(0x5EC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HGFEPJBGGOP")->GetStaticField(0x5EC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGFEPJBGGOP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGachaAvatarTextRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGachaAvatarTextRow*>*(*)())((::PBYTE)hIl2Cpp + HGFEPJBGGOP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HGFEPJBGGOP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGachaAvatarTextRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveGachaAvatarTextRow*>(*)())((::PBYTE)hIl2Cpp + HGFEPJBGGOP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveGachaAvatarTextRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveGachaAvatarTextRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HGFEPJBGGOP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HGFEPJBGGOP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGFEPJBGGOP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGFEPJBGGOP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HGFEPJBGGOP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HGFEPJBGGOP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HGFEPJBGGOP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveGachaAvatarTextRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveGachaAvatarTextRow*))((::PBYTE)hIl2Cpp + HGFEPJBGGOP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
