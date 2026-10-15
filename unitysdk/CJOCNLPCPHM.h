#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitMazebuffPlusConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CJOCNLPCPHM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DBEE280)
#define CJOCNLPCPHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBEE850)
#define CJOCNLPCPHM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DBEE3F0)
#define CJOCNLPCPHM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DBEDCF0)
#define CJOCNLPCPHM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DBEDF80)
#define CJOCNLPCPHM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DBEE490)
#define CJOCNLPCPHM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DBEE4E0)
#define CJOCNLPCPHM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DBEE2C0)
#define CJOCNLPCPHM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DBEDF20)
#define CJOCNLPCPHM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DBEE0F0)
#define CJOCNLPCPHM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DBEE350)
#define CJOCNLPCPHM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DBEDC70)

inline static constexpr unsigned int CJOCNLPCPHM_TypeDefinitionIndex = 13673;

	class CJOCNLPCPHM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitMazebuffPlusConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitMazebuffPlusConfigRow*>**)UnitySDK::FromName("", "CJOCNLPCPHM")->GetStaticField(0x3D640);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CJOCNLPCPHM")->GetStaticField(0x3D648);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CJOCNLPCPHM")->GetStaticField(0x3D650);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CJOCNLPCPHM")->GetStaticField(0xC4D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CJOCNLPCPHM")->GetStaticField(0xC4D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJOCNLPCPHM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitMazebuffPlusConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitMazebuffPlusConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CJOCNLPCPHM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CJOCNLPCPHM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitMazebuffPlusConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitMazebuffPlusConfigRow*>(*)())((::PBYTE)hIl2Cpp + CJOCNLPCPHM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTraitMazebuffPlusConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightTraitMazebuffPlusConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CJOCNLPCPHM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CJOCNLPCPHM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJOCNLPCPHM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJOCNLPCPHM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CJOCNLPCPHM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CJOCNLPCPHM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CJOCNLPCPHM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTraitMazebuffPlusConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTraitMazebuffPlusConfigRow*))((::PBYTE)hIl2Cpp + CJOCNLPCPHM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
