#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GameModeFuncEntranceRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EAGIJFMKKAF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD5D350)
#define EAGIJFMKKAF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD5D8D0)
#define EAGIJFMKKAF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD5D4C0)
#define EAGIJFMKKAF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD5CE00)
#define EAGIJFMKKAF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD5D090)
#define EAGIJFMKKAF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD5D560)
#define EAGIJFMKKAF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD5D5B0)
#define EAGIJFMKKAF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD5D390)
#define EAGIJFMKKAF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD5D030)
#define EAGIJFMKKAF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD5D200)
#define EAGIJFMKKAF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD5D420)
#define EAGIJFMKKAF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD5CD80)

inline static constexpr unsigned int EAGIJFMKKAF_TypeDefinitionIndex = 13313;

	class EAGIJFMKKAF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeFuncEntranceRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeFuncEntranceRow*>**)UnitySDK::FromName("", "EAGIJFMKKAF")->GetStaticField(0x52E60);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EAGIJFMKKAF")->GetStaticField(0x52E68);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "EAGIJFMKKAF")->GetStaticField(0x52E70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EAGIJFMKKAF")->GetStaticField(0x12640);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EAGIJFMKKAF")->GetStaticField(0x12641);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAGIJFMKKAF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeFuncEntranceRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeFuncEntranceRow*>*(*)())((::PBYTE)hIl2Cpp + EAGIJFMKKAF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EAGIJFMKKAF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeFuncEntranceRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeFuncEntranceRow*>(*)())((::PBYTE)hIl2Cpp + EAGIJFMKKAF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GameModeFuncEntranceRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameModeFuncEntranceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EAGIJFMKKAF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EAGIJFMKKAF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAGIJFMKKAF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAGIJFMKKAF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EAGIJFMKKAF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EAGIJFMKKAF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EAGIJFMKKAF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GameModeFuncEntranceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameModeFuncEntranceRow*))((::PBYTE)hIl2Cpp + EAGIJFMKKAF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
