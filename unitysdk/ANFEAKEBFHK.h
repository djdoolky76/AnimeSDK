#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RndOptionsDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ANFEAKEBFHK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCE3100)
#define ANFEAKEBFHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCE36D0)
#define ANFEAKEBFHK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCE3270)
#define ANFEAKEBFHK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCE2B70)
#define ANFEAKEBFHK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCE2E00)
#define ANFEAKEBFHK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCE3310)
#define ANFEAKEBFHK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCE3360)
#define ANFEAKEBFHK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCE3140)
#define ANFEAKEBFHK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCE2DA0)
#define ANFEAKEBFHK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCE2F70)
#define ANFEAKEBFHK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCE31D0)
#define ANFEAKEBFHK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCE2AF0)

inline static constexpr unsigned int ANFEAKEBFHK_TypeDefinitionIndex = 14665;

	class ANFEAKEBFHK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionsDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionsDataRow*>**)UnitySDK::FromName("", "ANFEAKEBFHK")->GetStaticField(0x3C270);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ANFEAKEBFHK")->GetStaticField(0x3C278);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ANFEAKEBFHK")->GetStaticField(0x3C280);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ANFEAKEBFHK")->GetStaticField(0xCD90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ANFEAKEBFHK")->GetStaticField(0xCD91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANFEAKEBFHK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionsDataRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionsDataRow*>*(*)())((::PBYTE)hIl2Cpp + ANFEAKEBFHK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ANFEAKEBFHK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionsDataRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RndOptionsDataRow*>(*)())((::PBYTE)hIl2Cpp + ANFEAKEBFHK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RndOptionsDataRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RndOptionsDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ANFEAKEBFHK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ANFEAKEBFHK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANFEAKEBFHK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANFEAKEBFHK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ANFEAKEBFHK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ANFEAKEBFHK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ANFEAKEBFHK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RndOptionsDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RndOptionsDataRow*))((::PBYTE)hIl2Cpp + ANFEAKEBFHK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
