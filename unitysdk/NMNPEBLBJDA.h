#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournHandbookMiracleRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NMNPEBLBJDA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D20C3B0)
#define NMNPEBLBJDA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D20C930)
#define NMNPEBLBJDA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D20C520)
#define NMNPEBLBJDA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D20BE60)
#define NMNPEBLBJDA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D20C0F0)
#define NMNPEBLBJDA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D20C5C0)
#define NMNPEBLBJDA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D20C610)
#define NMNPEBLBJDA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D20C3F0)
#define NMNPEBLBJDA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D20C090)
#define NMNPEBLBJDA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D20C260)
#define NMNPEBLBJDA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D20C480)
#define NMNPEBLBJDA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D20BDE0)

inline static constexpr unsigned int NMNPEBLBJDA_TypeDefinitionIndex = 15032;

	class NMNPEBLBJDA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NMNPEBLBJDA")->GetStaticField(0x41DE0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NMNPEBLBJDA")->GetStaticField(0x41DE8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHandbookMiracleRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHandbookMiracleRow*>**)UnitySDK::FromName("", "NMNPEBLBJDA")->GetStaticField(0x41DF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NMNPEBLBJDA")->GetStaticField(0xFAC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NMNPEBLBJDA")->GetStaticField(0xFAC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMNPEBLBJDA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHandbookMiracleRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHandbookMiracleRow*>*(*)())((::PBYTE)hIl2Cpp + NMNPEBLBJDA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NMNPEBLBJDA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHandbookMiracleRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHandbookMiracleRow*>(*)())((::PBYTE)hIl2Cpp + NMNPEBLBJDA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournHandbookMiracleRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournHandbookMiracleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NMNPEBLBJDA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NMNPEBLBJDA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMNPEBLBJDA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMNPEBLBJDA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NMNPEBLBJDA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NMNPEBLBJDA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NMNPEBLBJDA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournHandbookMiracleRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournHandbookMiracleRow*))((::PBYTE)hIl2Cpp + NMNPEBLBJDA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
