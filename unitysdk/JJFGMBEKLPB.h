#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MessageSectionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JJFGMBEKLPB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D00B7B0)
#define JJFGMBEKLPB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D00C330)
#define JJFGMBEKLPB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D00B920)
#define JJFGMBEKLPB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D00B260)
#define JJFGMBEKLPB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D00B4F0)
#define JJFGMBEKLPB_HFBAFEEPOLN_OFFSET UNITYSDK_OFFSET(0x1D00C2E0)
#define JJFGMBEKLPB_HIHCFCDFMPF_OFFSET UNITYSDK_OFFSET(0x1D00BDF0)
#define JJFGMBEKLPB_HOMKMPEOCDN_OFFSET UNITYSDK_OFFSET(0x1D00BD30)
#define JJFGMBEKLPB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D00B9C0)
#define JJFGMBEKLPB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D00BA10)
#define JJFGMBEKLPB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D00B7F0)
#define JJFGMBEKLPB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D00B490)
#define JJFGMBEKLPB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D00B660)
#define JJFGMBEKLPB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D00B880)
#define JJFGMBEKLPB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D00B1E0)

inline static constexpr unsigned int JJFGMBEKLPB_TypeDefinitionIndex = 14462;

	class JJFGMBEKLPB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_GENKJNIOGCG()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("", "JJFGMBEKLPB")->GetStaticField(0x2EFC0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JJFGMBEKLPB")->GetStaticField(0x2EFC8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JJFGMBEKLPB")->GetStaticField(0x2EFD0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageSectionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageSectionRow*>**)UnitySDK::FromName("", "JJFGMBEKLPB")->GetStaticField(0x2EFD8);
		}

		static ::System::Boolean* StaticGet_LINNHMPNCJG()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JJFGMBEKLPB")->GetStaticField(0x9AD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JJFGMBEKLPB")->GetStaticField(0x9AD1);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JJFGMBEKLPB")->GetStaticField(0x9AD2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJFGMBEKLPB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageSectionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageSectionRow*>*(*)())((::PBYTE)hIl2Cpp + JJFGMBEKLPB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JJFGMBEKLPB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageSectionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MessageSectionRow*>(*)())((::PBYTE)hIl2Cpp + JJFGMBEKLPB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MessageSectionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MessageSectionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JJFGMBEKLPB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JJFGMBEKLPB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJFGMBEKLPB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJFGMBEKLPB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JJFGMBEKLPB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JJFGMBEKLPB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JJFGMBEKLPB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MessageSectionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MessageSectionRow*))((::PBYTE)hIl2Cpp + JJFGMBEKLPB_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Boolean HOMKMPEOCDN(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JJFGMBEKLPB_HOMKMPEOCDN_OFFSET))(a1);
		}

		static ::System::Void HIHCFCDFMPF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJFGMBEKLPB_HIHCFCDFMPF_OFFSET))();
		}

		static ::System::Void HFBAFEEPOLN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJFGMBEKLPB_HFBAFEEPOLN_OFFSET))();
		}

	};
