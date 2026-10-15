#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MainMissionPackRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GIPMFGDNALN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE25C00)
#define GIPMFGDNALN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE26180)
#define GIPMFGDNALN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE25D70)
#define GIPMFGDNALN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE256B0)
#define GIPMFGDNALN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE25940)
#define GIPMFGDNALN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE25E10)
#define GIPMFGDNALN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE25E60)
#define GIPMFGDNALN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE25C40)
#define GIPMFGDNALN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE258E0)
#define GIPMFGDNALN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE25AB0)
#define GIPMFGDNALN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE25CD0)
#define GIPMFGDNALN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE25630)

inline static constexpr unsigned int GIPMFGDNALN_TypeDefinitionIndex = 14148;

	class GIPMFGDNALN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainMissionPackRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainMissionPackRow*>**)UnitySDK::FromName("", "GIPMFGDNALN")->GetStaticField(0x15E40);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GIPMFGDNALN")->GetStaticField(0x15E48);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GIPMFGDNALN")->GetStaticField(0x15E50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GIPMFGDNALN")->GetStaticField(0x4AB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GIPMFGDNALN")->GetStaticField(0x4AB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIPMFGDNALN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainMissionPackRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainMissionPackRow*>*(*)())((::PBYTE)hIl2Cpp + GIPMFGDNALN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GIPMFGDNALN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainMissionPackRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MainMissionPackRow*>(*)())((::PBYTE)hIl2Cpp + GIPMFGDNALN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MainMissionPackRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MainMissionPackRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GIPMFGDNALN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GIPMFGDNALN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIPMFGDNALN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIPMFGDNALN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GIPMFGDNALN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GIPMFGDNALN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GIPMFGDNALN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MainMissionPackRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MainMissionPackRow*))((::PBYTE)hIl2Cpp + GIPMFGDNALN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
