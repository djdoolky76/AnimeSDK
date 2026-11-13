#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class PKJPPAEPLOM;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OHHOJANIOEP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E624AA0)
#define OHHOJANIOEP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E625070)
#define OHHOJANIOEP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E624C10)
#define OHHOJANIOEP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E624510)
#define OHHOJANIOEP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E6247A0)
#define OHHOJANIOEP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E624CB0)
#define OHHOJANIOEP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E624D00)
#define OHHOJANIOEP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E624AE0)
#define OHHOJANIOEP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E624740)
#define OHHOJANIOEP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E624910)
#define OHHOJANIOEP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E624B70)
#define OHHOJANIOEP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E624490)

inline static constexpr unsigned int OHHOJANIOEP_TypeDefinitionIndex = 11542;

	class OHHOJANIOEP : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OHHOJANIOEP")->GetStaticField(0x56E40);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PKJPPAEPLOM*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PKJPPAEPLOM*>**)UnitySDK::FromName("", "OHHOJANIOEP")->GetStaticField(0x56E48);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OHHOJANIOEP")->GetStaticField(0x56E50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OHHOJANIOEP")->GetStaticField(0x128B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OHHOJANIOEP")->GetStaticField(0x128B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHHOJANIOEP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PKJPPAEPLOM*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::PKJPPAEPLOM*>*(*)())((::PBYTE)hIl2Cpp + OHHOJANIOEP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OHHOJANIOEP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::PKJPPAEPLOM*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::PKJPPAEPLOM*>(*)())((::PBYTE)hIl2Cpp + OHHOJANIOEP_FPHGMAMDFHE_OFFSET))();
		}

		static ::PKJPPAEPLOM* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::PKJPPAEPLOM*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OHHOJANIOEP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OHHOJANIOEP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHHOJANIOEP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHHOJANIOEP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OHHOJANIOEP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OHHOJANIOEP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OHHOJANIOEP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::PKJPPAEPLOM* a1)
		{
			return ((::System::Void(*)(::PKJPPAEPLOM*))((::PBYTE)hIl2Cpp + OHHOJANIOEP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
