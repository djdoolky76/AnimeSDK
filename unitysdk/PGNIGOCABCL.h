#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournHexDisplayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PGNIGOCABCL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2E3B50)
#define PGNIGOCABCL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2E40D0)
#define PGNIGOCABCL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2E3CC0)
#define PGNIGOCABCL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2E3600)
#define PGNIGOCABCL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2E3890)
#define PGNIGOCABCL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2E3D60)
#define PGNIGOCABCL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2E3DB0)
#define PGNIGOCABCL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2E3B90)
#define PGNIGOCABCL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2E3830)
#define PGNIGOCABCL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2E3A00)
#define PGNIGOCABCL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2E3C20)
#define PGNIGOCABCL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2E3580)

inline static constexpr unsigned int PGNIGOCABCL_TypeDefinitionIndex = 15028;

	class PGNIGOCABCL : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PGNIGOCABCL")->GetStaticField(0x3FBF0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PGNIGOCABCL")->GetStaticField(0x3FBF8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexDisplayRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexDisplayRow*>**)UnitySDK::FromName("", "PGNIGOCABCL")->GetStaticField(0x3FC00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PGNIGOCABCL")->GetStaticField(0xD9B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PGNIGOCABCL")->GetStaticField(0xD9B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGNIGOCABCL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexDisplayRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + PGNIGOCABCL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PGNIGOCABCL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexDisplayRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexDisplayRow*>(*)())((::PBYTE)hIl2Cpp + PGNIGOCABCL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournHexDisplayRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournHexDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PGNIGOCABCL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PGNIGOCABCL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGNIGOCABCL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGNIGOCABCL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PGNIGOCABCL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PGNIGOCABCL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PGNIGOCABCL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournHexDisplayRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournHexDisplayRow*))((::PBYTE)hIl2Cpp + PGNIGOCABCL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
