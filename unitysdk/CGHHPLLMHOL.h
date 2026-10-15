#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GlobalScheduleDataRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CGHHPLLMHOL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC0C600)
#define CGHHPLLMHOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC0D150)
#define CGHHPLLMHOL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC0C9A0)
#define CGHHPLLMHOL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC0C640)
#define CGHHPLLMHOL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC0CE90)
#define CGHHPLLMHOL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC0CA40)
#define CGHHPLLMHOL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC0CA90)
#define CGHHPLLMHOL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC0C870)
#define CGHHPLLMHOL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC0CE30)
#define CGHHPLLMHOL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC0D000)
#define CGHHPLLMHOL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC0C900)
#define CGHHPLLMHOL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC0CDB0)

inline static constexpr unsigned int CGHHPLLMHOL_TypeDefinitionIndex = 15090;

	class CGHHPLLMHOL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CGHHPLLMHOL")->GetStaticField(0x42CF0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GlobalScheduleDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GlobalScheduleDataRow*>**)UnitySDK::FromName("", "CGHHPLLMHOL")->GetStaticField(0x42CF8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "CGHHPLLMHOL")->GetStaticField(0x42D00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CGHHPLLMHOL")->GetStaticField(0x10100);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CGHHPLLMHOL")->GetStaticField(0x10101);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGHHPLLMHOL_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CGHHPLLMHOL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGHHPLLMHOL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGHHPLLMHOL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CGHHPLLMHOL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CGHHPLLMHOL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CGHHPLLMHOL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GlobalScheduleDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GlobalScheduleDataRow*))((::PBYTE)hIl2Cpp + CGHHPLLMHOL_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GlobalScheduleDataRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GlobalScheduleDataRow*>*(*)())((::PBYTE)hIl2Cpp + CGHHPLLMHOL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CGHHPLLMHOL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GlobalScheduleDataRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GlobalScheduleDataRow*>(*)())((::PBYTE)hIl2Cpp + CGHHPLLMHOL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GlobalScheduleDataRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GlobalScheduleDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CGHHPLLMHOL_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
