#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSeasonTraitRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define DJOCKCIFPGI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD03A20)
#define DJOCKCIFPGI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD03FA0)
#define DJOCKCIFPGI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD03B90)
#define DJOCKCIFPGI_ENCPFJNBFCF_OFFSET UNITYSDK_OFFSET(0x1CD037C0)
#define DJOCKCIFPGI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD03270)
#define DJOCKCIFPGI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD03500)
#define DJOCKCIFPGI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD03C30)
#define DJOCKCIFPGI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD03C80)
#define DJOCKCIFPGI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD03A60)
#define DJOCKCIFPGI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD034A0)
#define DJOCKCIFPGI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD03670)
#define DJOCKCIFPGI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD03AF0)
#define DJOCKCIFPGI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD031F0)

inline static constexpr unsigned int DJOCKCIFPGI_TypeDefinitionIndex = 13582;

	class DJOCKCIFPGI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTraitRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTraitRow*>**)UnitySDK::FromName("", "DJOCKCIFPGI")->GetStaticField(0x47EC0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DJOCKCIFPGI")->GetStaticField(0x47EC8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DJOCKCIFPGI")->GetStaticField(0x47ED0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DJOCKCIFPGI")->GetStaticField(0x10C70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DJOCKCIFPGI")->GetStaticField(0x10C71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJOCKCIFPGI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTraitRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTraitRow*>*(*)())((::PBYTE)hIl2Cpp + DJOCKCIFPGI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DJOCKCIFPGI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTraitRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTraitRow*>(*)())((::PBYTE)hIl2Cpp + DJOCKCIFPGI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightSeasonTraitRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightSeasonTraitRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DJOCKCIFPGI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IList_1<::RPG::GameCore::GridFightSeasonTraitRow*>* ENCPFJNBFCF(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::IList_1<::RPG::GameCore::GridFightSeasonTraitRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DJOCKCIFPGI_ENCPFJNBFCF_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DJOCKCIFPGI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJOCKCIFPGI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJOCKCIFPGI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DJOCKCIFPGI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DJOCKCIFPGI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DJOCKCIFPGI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightSeasonTraitRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSeasonTraitRow*))((::PBYTE)hIl2Cpp + DJOCKCIFPGI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
