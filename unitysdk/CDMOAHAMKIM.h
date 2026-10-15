#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TreasureDungeonBuffConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CDMOAHAMKIM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9E4580)
#define CDMOAHAMKIM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9E4B50)
#define CDMOAHAMKIM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9E46F0)
#define CDMOAHAMKIM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9E3FF0)
#define CDMOAHAMKIM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9E4280)
#define CDMOAHAMKIM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9E4790)
#define CDMOAHAMKIM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9E47E0)
#define CDMOAHAMKIM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9E45C0)
#define CDMOAHAMKIM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9E4220)
#define CDMOAHAMKIM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9E43F0)
#define CDMOAHAMKIM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9E4650)
#define CDMOAHAMKIM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9E3F70)

inline static constexpr unsigned int CDMOAHAMKIM_TypeDefinitionIndex = 12537;

	class CDMOAHAMKIM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonBuffConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonBuffConfigRow*>**)UnitySDK::FromName("", "CDMOAHAMKIM")->GetStaticField(0x39010);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CDMOAHAMKIM")->GetStaticField(0x39018);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CDMOAHAMKIM")->GetStaticField(0x39020);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CDMOAHAMKIM")->GetStaticField(0xB8B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CDMOAHAMKIM")->GetStaticField(0xB8B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDMOAHAMKIM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonBuffConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonBuffConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CDMOAHAMKIM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CDMOAHAMKIM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonBuffConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonBuffConfigRow*>(*)())((::PBYTE)hIl2Cpp + CDMOAHAMKIM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TreasureDungeonBuffConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TreasureDungeonBuffConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CDMOAHAMKIM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CDMOAHAMKIM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDMOAHAMKIM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDMOAHAMKIM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CDMOAHAMKIM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CDMOAHAMKIM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CDMOAHAMKIM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TreasureDungeonBuffConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TreasureDungeonBuffConfigRow*))((::PBYTE)hIl2Cpp + CDMOAHAMKIM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
