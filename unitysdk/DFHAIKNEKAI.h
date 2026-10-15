#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GridFightTraitBonusType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitBonusConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DFHAIKNEKAI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD17FE0)
#define DFHAIKNEKAI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD18C60)
#define DFHAIKNEKAI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD18150)
#define DFHAIKNEKAI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD179D0)
#define DFHAIKNEKAI_FEMMFBGGCKJ_OFFSET UNITYSDK_OFFSET(0x1CD18610)
#define DFHAIKNEKAI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD17C60)
#define DFHAIKNEKAI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD181F0)
#define DFHAIKNEKAI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD18240)
#define DFHAIKNEKAI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD18020)
#define DFHAIKNEKAI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD17C00)
#define DFHAIKNEKAI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD17DD0)
#define DFHAIKNEKAI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD180B0)
#define DFHAIKNEKAI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD17950)

inline static constexpr unsigned int DFHAIKNEKAI_TypeDefinitionIndex = 13681;

	class DFHAIKNEKAI : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DFHAIKNEKAI")->GetStaticField(0x4BFB0);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet_NMGKDLKIBIJ()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::Collections::Generic::List_1<::System::UInt32>*>**)UnitySDK::FromName("", "DFHAIKNEKAI")->GetStaticField(0x4BFB8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet_LKLFLPPKLKK()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)UnitySDK::FromName("", "DFHAIKNEKAI")->GetStaticField(0x4BFC0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusConfigRow*>**)UnitySDK::FromName("", "DFHAIKNEKAI")->GetStaticField(0x4BFC8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DFHAIKNEKAI")->GetStaticField(0x4BFD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DFHAIKNEKAI")->GetStaticField(0x118E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DFHAIKNEKAI")->GetStaticField(0x118E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFHAIKNEKAI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusConfigRow*>*(*)())((::PBYTE)hIl2Cpp + DFHAIKNEKAI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DFHAIKNEKAI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusConfigRow*>(*)())((::PBYTE)hIl2Cpp + DFHAIKNEKAI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTraitBonusConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GridFightTraitBonusType a3)
		{
			return ((::RPG::GameCore::GridFightTraitBonusConfigRow*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::GridFightTraitBonusType))((::PBYTE)hIl2Cpp + DFHAIKNEKAI_LMBKNCAIDLC_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DFHAIKNEKAI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFHAIKNEKAI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFHAIKNEKAI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DFHAIKNEKAI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DFHAIKNEKAI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DFHAIKNEKAI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTraitBonusConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTraitBonusConfigRow*))((::PBYTE)hIl2Cpp + DFHAIKNEKAI_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* FEMMFBGGCKJ(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DFHAIKNEKAI_FEMMFBGGCKJ_OFFSET))(a1, a2);
		}

	};
