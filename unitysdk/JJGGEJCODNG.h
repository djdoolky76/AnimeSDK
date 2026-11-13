#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityReCollectionItemRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JJGGEJCODNG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E5B3AB0)
#define JJGGEJCODNG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B4030)
#define JJGGEJCODNG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E5B3C20)
#define JJGGEJCODNG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E5B35A0)
#define JJGGEJCODNG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E5B3830)
#define JJGGEJCODNG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E5B3CC0)
#define JJGGEJCODNG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E5B3D10)
#define JJGGEJCODNG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E5B3AF0)
#define JJGGEJCODNG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E5B37D0)
#define JJGGEJCODNG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E5B3960)
#define JJGGEJCODNG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E5B3B80)
#define JJGGEJCODNG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E5B3520)

inline static constexpr unsigned int JJGGEJCODNG_TypeDefinitionIndex = 12388;

	class JJGGEJCODNG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityReCollectionItemRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityReCollectionItemRow*>**)UnitySDK::FromName("", "JJGGEJCODNG")->GetStaticField(0x36D10);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JJGGEJCODNG")->GetStaticField(0x36D18);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JJGGEJCODNG")->GetStaticField(0x36D20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JJGGEJCODNG")->GetStaticField(0xABF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JJGGEJCODNG")->GetStaticField(0xABF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJGGEJCODNG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityReCollectionItemRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityReCollectionItemRow*>*(*)())((::PBYTE)hIl2Cpp + JJGGEJCODNG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JJGGEJCODNG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityReCollectionItemRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityReCollectionItemRow*>(*)())((::PBYTE)hIl2Cpp + JJGGEJCODNG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityReCollectionItemRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityReCollectionItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JJGGEJCODNG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JJGGEJCODNG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJGGEJCODNG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJGGEJCODNG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JJGGEJCODNG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JJGGEJCODNG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JJGGEJCODNG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityReCollectionItemRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityReCollectionItemRow*))((::PBYTE)hIl2Cpp + JJGGEJCODNG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
