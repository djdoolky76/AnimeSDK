#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingEndingRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HIMEPAENGNF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E08ECE0)
#define HIMEPAENGNF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E08F260)
#define HIMEPAENGNF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E08EE50)
#define HIMEPAENGNF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E08E7D0)
#define HIMEPAENGNF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E08EA60)
#define HIMEPAENGNF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E08EEF0)
#define HIMEPAENGNF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E08EF40)
#define HIMEPAENGNF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E08ED20)
#define HIMEPAENGNF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E08EA00)
#define HIMEPAENGNF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E08EB90)
#define HIMEPAENGNF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E08EDB0)
#define HIMEPAENGNF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E08E750)

inline static constexpr unsigned int HIMEPAENGNF_TypeDefinitionIndex = 12498;

	class HIMEPAENGNF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEndingRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEndingRow*>**)UnitySDK::FromName("", "HIMEPAENGNF")->GetStaticField(0x15E40);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HIMEPAENGNF")->GetStaticField(0x15E48);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HIMEPAENGNF")->GetStaticField(0x15E50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HIMEPAENGNF")->GetStaticField(0x48C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HIMEPAENGNF")->GetStaticField(0x48C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIMEPAENGNF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEndingRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEndingRow*>*(*)())((::PBYTE)hIl2Cpp + HIMEPAENGNF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HIMEPAENGNF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEndingRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingEndingRow*>(*)())((::PBYTE)hIl2Cpp + HIMEPAENGNF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::SwordTrainingEndingRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SwordTrainingEndingRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HIMEPAENGNF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HIMEPAENGNF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIMEPAENGNF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIMEPAENGNF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HIMEPAENGNF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HIMEPAENGNF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HIMEPAENGNF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::SwordTrainingEndingRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SwordTrainingEndingRow*))((::PBYTE)hIl2Cpp + HIMEPAENGNF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
