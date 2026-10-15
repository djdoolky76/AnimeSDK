#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/PunkLordMonsterRare.h"
#include "unitysdk/RPG/GameCore/PunkLordScoreFinishType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PunkLordScoreTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EMHHLKBFFBA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD79DC0)
#define EMHHLKBFFBA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD7A3C0)
#define EMHHLKBFFBA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD79F30)
#define EMHHLKBFFBA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD797E0)
#define EMHHLKBFFBA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD79A70)
#define EMHHLKBFFBA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD79FD0)
#define EMHHLKBFFBA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD7A020)
#define EMHHLKBFFBA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD79E00)
#define EMHHLKBFFBA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD79A10)
#define EMHHLKBFFBA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD79BE0)
#define EMHHLKBFFBA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD79E90)
#define EMHHLKBFFBA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD79760)

inline static constexpr unsigned int EMHHLKBFFBA_TypeDefinitionIndex = 12300;

	class EMHHLKBFFBA : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EMHHLKBFFBA")->GetStaticField(0xB080);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordScoreTypeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordScoreTypeRow*>**)UnitySDK::FromName("", "EMHHLKBFFBA")->GetStaticField(0xB088);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EMHHLKBFFBA")->GetStaticField(0xB090);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EMHHLKBFFBA")->GetStaticField(0x25C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EMHHLKBFFBA")->GetStaticField(0x25C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMHHLKBFFBA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordScoreTypeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordScoreTypeRow*>*(*)())((::PBYTE)hIl2Cpp + EMHHLKBFFBA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EMHHLKBFFBA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordScoreTypeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordScoreTypeRow*>(*)())((::PBYTE)hIl2Cpp + EMHHLKBFFBA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PunkLordScoreTypeRow* LMBKNCAIDLC(::RPG::GameCore::PunkLordScoreFinishType a1, ::RPG::GameCore::PunkLordMonsterRare a2)
		{
			return ((::RPG::GameCore::PunkLordScoreTypeRow*(*)(::RPG::GameCore::PunkLordScoreFinishType, ::RPG::GameCore::PunkLordMonsterRare))((::PBYTE)hIl2Cpp + EMHHLKBFFBA_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EMHHLKBFFBA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMHHLKBFFBA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMHHLKBFFBA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EMHHLKBFFBA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EMHHLKBFFBA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EMHHLKBFFBA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PunkLordScoreTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PunkLordScoreTypeRow*))((::PBYTE)hIl2Cpp + EMHHLKBFFBA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
