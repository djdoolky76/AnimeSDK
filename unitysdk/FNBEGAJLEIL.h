#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GridFightGamePlayResType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightGamePlayResConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FNBEGAJLEIL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DFE6190)
#define FNBEGAJLEIL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFE6760)
#define FNBEGAJLEIL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DFE6300)
#define FNBEGAJLEIL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DFE5C00)
#define FNBEGAJLEIL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DFE5E90)
#define FNBEGAJLEIL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DFE63A0)
#define FNBEGAJLEIL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DFE63F0)
#define FNBEGAJLEIL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DFE61D0)
#define FNBEGAJLEIL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DFE5E30)
#define FNBEGAJLEIL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DFE6000)
#define FNBEGAJLEIL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DFE6260)
#define FNBEGAJLEIL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DFE5B80)

inline static constexpr unsigned int FNBEGAJLEIL_TypeDefinitionIndex = 13534;

	class FNBEGAJLEIL : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FNBEGAJLEIL")->GetStaticField(0xAAE0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightGamePlayResConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightGamePlayResConfigRow*>**)UnitySDK::FromName("", "FNBEGAJLEIL")->GetStaticField(0xAAE8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FNBEGAJLEIL")->GetStaticField(0xAAF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FNBEGAJLEIL")->GetStaticField(0x11E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FNBEGAJLEIL")->GetStaticField(0x11E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNBEGAJLEIL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightGamePlayResConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightGamePlayResConfigRow*>*(*)())((::PBYTE)hIl2Cpp + FNBEGAJLEIL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FNBEGAJLEIL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightGamePlayResConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightGamePlayResConfigRow*>(*)())((::PBYTE)hIl2Cpp + FNBEGAJLEIL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightGamePlayResConfigRow* LMBKNCAIDLC(::RPG::GameCore::GridFightGamePlayResType a1)
		{
			return ((::RPG::GameCore::GridFightGamePlayResConfigRow*(*)(::RPG::GameCore::GridFightGamePlayResType))((::PBYTE)hIl2Cpp + FNBEGAJLEIL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FNBEGAJLEIL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNBEGAJLEIL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNBEGAJLEIL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FNBEGAJLEIL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FNBEGAJLEIL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FNBEGAJLEIL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightGamePlayResConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightGamePlayResConfigRow*))((::PBYTE)hIl2Cpp + FNBEGAJLEIL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
