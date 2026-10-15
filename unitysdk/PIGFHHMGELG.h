#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StoryPropRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PIGFHHMGELG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2EE8D0)
#define PIGFHHMGELG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2EF440)
#define PIGFHHMGELG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2EEC70)
#define PIGFHHMGELG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2EE910)
#define PIGFHHMGELG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2EF160)
#define PIGFHHMGELG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2EED10)
#define PIGFHHMGELG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2EED60)
#define PIGFHHMGELG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2EEB40)
#define PIGFHHMGELG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2EF100)
#define PIGFHHMGELG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2EF2D0)
#define PIGFHHMGELG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2EEBD0)
#define PIGFHHMGELG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2EF080)

inline static constexpr unsigned int PIGFHHMGELG_TypeDefinitionIndex = 15186;

	class PIGFHHMGELG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PIGFHHMGELG")->GetStaticField(0x44080);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryPropRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryPropRow*>**)UnitySDK::FromName("", "PIGFHHMGELG")->GetStaticField(0x44088);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PIGFHHMGELG")->GetStaticField(0x44090);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PIGFHHMGELG")->GetStaticField(0x10420);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PIGFHHMGELG")->GetStaticField(0x10421);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIGFHHMGELG_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PIGFHHMGELG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIGFHHMGELG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIGFHHMGELG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PIGFHHMGELG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PIGFHHMGELG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PIGFHHMGELG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::StoryPropRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StoryPropRow*))((::PBYTE)hIl2Cpp + PIGFHHMGELG_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryPropRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryPropRow*>*(*)())((::PBYTE)hIl2Cpp + PIGFHHMGELG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PIGFHHMGELG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryPropRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryPropRow*>(*)())((::PBYTE)hIl2Cpp + PIGFHHMGELG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::StoryPropRow* LMBKNCAIDLC(::System::String* a1)
		{
			return ((::RPG::GameCore::StoryPropRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + PIGFHHMGELG_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
