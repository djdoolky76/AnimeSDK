#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class MPPNKLGIOMG;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ICPAKALBPMI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E6B0F60)
#define ICPAKALBPMI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B1560)
#define ICPAKALBPMI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E6B10D0)
#define ICPAKALBPMI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E6B0990)
#define ICPAKALBPMI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E6B0C20)
#define ICPAKALBPMI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E6B1170)
#define ICPAKALBPMI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E6B11C0)
#define ICPAKALBPMI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E6B0FA0)
#define ICPAKALBPMI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E6B0BC0)
#define ICPAKALBPMI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E6B0D90)
#define ICPAKALBPMI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E6B1030)
#define ICPAKALBPMI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E6B0910)

inline static constexpr unsigned int ICPAKALBPMI_TypeDefinitionIndex = 13599;

	class ICPAKALBPMI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MPPNKLGIOMG*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MPPNKLGIOMG*>**)UnitySDK::FromName("", "ICPAKALBPMI")->GetStaticField(0x1D960);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ICPAKALBPMI")->GetStaticField(0x1D968);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ICPAKALBPMI")->GetStaticField(0x1D970);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ICPAKALBPMI")->GetStaticField(0x6570);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ICPAKALBPMI")->GetStaticField(0x6571);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICPAKALBPMI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MPPNKLGIOMG*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MPPNKLGIOMG*>*(*)())((::PBYTE)hIl2Cpp + ICPAKALBPMI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ICPAKALBPMI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MPPNKLGIOMG*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MPPNKLGIOMG*>(*)())((::PBYTE)hIl2Cpp + ICPAKALBPMI_FPHGMAMDFHE_OFFSET))();
		}

		static ::MPPNKLGIOMG* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::MPPNKLGIOMG*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ICPAKALBPMI_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ICPAKALBPMI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICPAKALBPMI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICPAKALBPMI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ICPAKALBPMI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ICPAKALBPMI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ICPAKALBPMI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::MPPNKLGIOMG* a1)
		{
			return ((::System::Void(*)(::MPPNKLGIOMG*))((::PBYTE)hIl2Cpp + ICPAKALBPMI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
