#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPhanionUniqueTraitConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ABJCGNPCFBI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E00F880)
#define ABJCGNPCFBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E00FE80)
#define ABJCGNPCFBI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E00F9F0)
#define ABJCGNPCFBI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E00F2B0)
#define ABJCGNPCFBI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E00F540)
#define ABJCGNPCFBI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E00FA90)
#define ABJCGNPCFBI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E00FAE0)
#define ABJCGNPCFBI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E00F8C0)
#define ABJCGNPCFBI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E00F4E0)
#define ABJCGNPCFBI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E00F6B0)
#define ABJCGNPCFBI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E00F950)
#define ABJCGNPCFBI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E00F230)

inline static constexpr unsigned int ABJCGNPCFBI_TypeDefinitionIndex = 13846;

	class ABJCGNPCFBI : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ABJCGNPCFBI")->GetStaticField(0x32AA0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPhanionUniqueTraitConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPhanionUniqueTraitConfigRow*>**)UnitySDK::FromName("", "ABJCGNPCFBI")->GetStaticField(0x32AA8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ABJCGNPCFBI")->GetStaticField(0x32AB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ABJCGNPCFBI")->GetStaticField(0x9CF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ABJCGNPCFBI")->GetStaticField(0x9CF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABJCGNPCFBI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPhanionUniqueTraitConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPhanionUniqueTraitConfigRow*>*(*)())((::PBYTE)hIl2Cpp + ABJCGNPCFBI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ABJCGNPCFBI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPhanionUniqueTraitConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPhanionUniqueTraitConfigRow*>(*)())((::PBYTE)hIl2Cpp + ABJCGNPCFBI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightPhanionUniqueTraitConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightPhanionUniqueTraitConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ABJCGNPCFBI_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ABJCGNPCFBI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABJCGNPCFBI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABJCGNPCFBI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ABJCGNPCFBI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABJCGNPCFBI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ABJCGNPCFBI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightPhanionUniqueTraitConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightPhanionUniqueTraitConfigRow*))((::PBYTE)hIl2Cpp + ABJCGNPCFBI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
