#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightDivisionConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AOOLNJNJEJF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCEB730)
#define AOOLNJNJEJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCEBCB0)
#define AOOLNJNJEJF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCEB8A0)
#define AOOLNJNJEJF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCEB220)
#define AOOLNJNJEJF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCEB4B0)
#define AOOLNJNJEJF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCEB940)
#define AOOLNJNJEJF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCEB990)
#define AOOLNJNJEJF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCEB770)
#define AOOLNJNJEJF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCEB450)
#define AOOLNJNJEJF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCEB5E0)
#define AOOLNJNJEJF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCEB800)
#define AOOLNJNJEJF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCEB1A0)

	class AOOLNJNJEJF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionConfigRow*>**)UnitySDK::FromName("", "AOOLNJNJEJF")->GetStaticField(0x3C810);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "AOOLNJNJEJF")->GetStaticField(0x3C818);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AOOLNJNJEJF")->GetStaticField(0x3C820);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AOOLNJNJEJF")->GetStaticField(0xCF20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AOOLNJNJEJF")->GetStaticField(0xCF21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOOLNJNJEJF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + AOOLNJNJEJF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AOOLNJNJEJF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionConfigRow*>(*)())((::PBYTE)hIl2Cpp + AOOLNJNJEJF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightDivisionConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightDivisionConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AOOLNJNJEJF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AOOLNJNJEJF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOOLNJNJEJF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOOLNJNJEJF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AOOLNJNJEJF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AOOLNJNJEJF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AOOLNJNJEJF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightDivisionConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightDivisionConfigRow*))((::PBYTE)hIl2Cpp + AOOLNJNJEJF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
