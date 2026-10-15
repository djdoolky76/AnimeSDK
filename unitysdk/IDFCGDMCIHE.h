#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSeasonItemConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IDFCGDMCIHE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEE55E0)
#define IDFCGDMCIHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEE5BE0)
#define IDFCGDMCIHE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEE5750)
#define IDFCGDMCIHE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEE5010)
#define IDFCGDMCIHE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEE52A0)
#define IDFCGDMCIHE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEE57F0)
#define IDFCGDMCIHE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEE5840)
#define IDFCGDMCIHE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEE5620)
#define IDFCGDMCIHE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEE5240)
#define IDFCGDMCIHE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEE5410)
#define IDFCGDMCIHE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEE56B0)
#define IDFCGDMCIHE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEE4F90)

	class IDFCGDMCIHE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IDFCGDMCIHE")->GetStaticField(0x20FF0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonItemConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonItemConfigRow*>**)UnitySDK::FromName("", "IDFCGDMCIHE")->GetStaticField(0x20FF8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "IDFCGDMCIHE")->GetStaticField(0x21000);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IDFCGDMCIHE")->GetStaticField(0x7770);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IDFCGDMCIHE")->GetStaticField(0x7771);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDFCGDMCIHE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonItemConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonItemConfigRow*>*(*)())((::PBYTE)hIl2Cpp + IDFCGDMCIHE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IDFCGDMCIHE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonItemConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonItemConfigRow*>(*)())((::PBYTE)hIl2Cpp + IDFCGDMCIHE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightSeasonItemConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightSeasonItemConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IDFCGDMCIHE_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IDFCGDMCIHE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDFCGDMCIHE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDFCGDMCIHE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IDFCGDMCIHE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IDFCGDMCIHE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IDFCGDMCIHE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightSeasonItemConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSeasonItemConfigRow*))((::PBYTE)hIl2Cpp + IDFCGDMCIHE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
