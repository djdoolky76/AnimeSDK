#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ScheduleDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPBICHNMHGA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E99B6F0)
#define DPBICHNMHGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E99C240)
#define DPBICHNMHGA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E99BA90)
#define DPBICHNMHGA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E99B730)
#define DPBICHNMHGA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E99BF80)
#define DPBICHNMHGA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E99BB30)
#define DPBICHNMHGA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E99BB80)
#define DPBICHNMHGA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E99B960)
#define DPBICHNMHGA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E99BF20)
#define DPBICHNMHGA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E99C0F0)
#define DPBICHNMHGA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E99B9F0)
#define DPBICHNMHGA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E99BEA0)

inline static constexpr unsigned int DPBICHNMHGA_TypeDefinitionIndex = 15245;

	class DPBICHNMHGA : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DPBICHNMHGA")->GetStaticField(0x41570);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DPBICHNMHGA")->GetStaticField(0x41578);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ScheduleDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ScheduleDataRow*>**)UnitySDK::FromName("", "DPBICHNMHGA")->GetStaticField(0x41580);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DPBICHNMHGA")->GetStaticField(0xD190);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DPBICHNMHGA")->GetStaticField(0xD191);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPBICHNMHGA_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DPBICHNMHGA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPBICHNMHGA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPBICHNMHGA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DPBICHNMHGA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DPBICHNMHGA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DPBICHNMHGA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ScheduleDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ScheduleDataRow*))((::PBYTE)hIl2Cpp + DPBICHNMHGA_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ScheduleDataRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ScheduleDataRow*>*(*)())((::PBYTE)hIl2Cpp + DPBICHNMHGA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DPBICHNMHGA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ScheduleDataRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ScheduleDataRow*>(*)())((::PBYTE)hIl2Cpp + DPBICHNMHGA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ScheduleDataRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ScheduleDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DPBICHNMHGA_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
