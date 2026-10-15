#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyCellMoveConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EEDCFLNFDON_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD74430)
#define EEDCFLNFDON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD74A30)
#define EEDCFLNFDON_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD745A0)
#define EEDCFLNFDON_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD73E60)
#define EEDCFLNFDON_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD740F0)
#define EEDCFLNFDON_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD74640)
#define EEDCFLNFDON_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD74690)
#define EEDCFLNFDON_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD74470)
#define EEDCFLNFDON_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD74090)
#define EEDCFLNFDON_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD74260)
#define EEDCFLNFDON_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD74500)
#define EEDCFLNFDON_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD73DE0)

inline static constexpr unsigned int EEDCFLNFDON_TypeDefinitionIndex = 12090;

	class EEDCFLNFDON : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyCellMoveConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyCellMoveConfigRow*>**)UnitySDK::FromName("", "EEDCFLNFDON")->GetStaticField(0x53A50);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EEDCFLNFDON")->GetStaticField(0x53A58);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EEDCFLNFDON")->GetStaticField(0x53A60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EEDCFLNFDON")->GetStaticField(0x128E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EEDCFLNFDON")->GetStaticField(0x128E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEDCFLNFDON_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyCellMoveConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyCellMoveConfigRow*>*(*)())((::PBYTE)hIl2Cpp + EEDCFLNFDON_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EEDCFLNFDON_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyCellMoveConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyCellMoveConfigRow*>(*)())((::PBYTE)hIl2Cpp + EEDCFLNFDON_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyCellMoveConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MonopolyCellMoveConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EEDCFLNFDON_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EEDCFLNFDON_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEDCFLNFDON_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEDCFLNFDON_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EEDCFLNFDON_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EEDCFLNFDON_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EEDCFLNFDON_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MonopolyCellMoveConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyCellMoveConfigRow*))((::PBYTE)hIl2Cpp + EEDCFLNFDON_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
