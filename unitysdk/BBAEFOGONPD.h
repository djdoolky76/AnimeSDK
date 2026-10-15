#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCAeonCrossRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BBAEFOGONPD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCF2490)
#define BBAEFOGONPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCF2A90)
#define BBAEFOGONPD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCF2600)
#define BBAEFOGONPD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCF1EC0)
#define BBAEFOGONPD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCF2150)
#define BBAEFOGONPD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCF26A0)
#define BBAEFOGONPD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCF26F0)
#define BBAEFOGONPD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCF24D0)
#define BBAEFOGONPD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCF20F0)
#define BBAEFOGONPD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCF22C0)
#define BBAEFOGONPD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCF2560)
#define BBAEFOGONPD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCF1E40)

inline static constexpr unsigned int BBAEFOGONPD_TypeDefinitionIndex = 14740;

	class BBAEFOGONPD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BBAEFOGONPD")->GetStaticField(0x3CE00);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCrossRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCrossRow*>**)UnitySDK::FromName("", "BBAEFOGONPD")->GetStaticField(0x3CE08);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BBAEFOGONPD")->GetStaticField(0x3CE10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BBAEFOGONPD")->GetStaticField(0xD100);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BBAEFOGONPD")->GetStaticField(0xD101);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBAEFOGONPD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCrossRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCrossRow*>*(*)())((::PBYTE)hIl2Cpp + BBAEFOGONPD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BBAEFOGONPD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCrossRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCrossRow*>(*)())((::PBYTE)hIl2Cpp + BBAEFOGONPD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCAeonCrossRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::RogueDLCAeonCrossRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BBAEFOGONPD_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BBAEFOGONPD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBAEFOGONPD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBAEFOGONPD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BBAEFOGONPD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BBAEFOGONPD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BBAEFOGONPD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueDLCAeonCrossRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCAeonCrossRow*))((::PBYTE)hIl2Cpp + BBAEFOGONPD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
