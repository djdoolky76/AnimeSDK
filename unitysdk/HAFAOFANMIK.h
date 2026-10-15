#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitVideoConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HAFAOFANMIK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE4EBD0)
#define HAFAOFANMIK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE4F1A0)
#define HAFAOFANMIK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE4ED40)
#define HAFAOFANMIK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE4E640)
#define HAFAOFANMIK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE4E8D0)
#define HAFAOFANMIK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE4EDE0)
#define HAFAOFANMIK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE4EE30)
#define HAFAOFANMIK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE4EC10)
#define HAFAOFANMIK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE4E870)
#define HAFAOFANMIK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE4EA40)
#define HAFAOFANMIK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE4ECA0)
#define HAFAOFANMIK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE4E5C0)

inline static constexpr unsigned int HAFAOFANMIK_TypeDefinitionIndex = 13702;

	class HAFAOFANMIK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitVideoConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitVideoConfigRow*>**)UnitySDK::FromName("", "HAFAOFANMIK")->GetStaticField(0x18680);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HAFAOFANMIK")->GetStaticField(0x18688);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HAFAOFANMIK")->GetStaticField(0x18690);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HAFAOFANMIK")->GetStaticField(0x53A0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HAFAOFANMIK")->GetStaticField(0x53A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAFAOFANMIK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitVideoConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitVideoConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HAFAOFANMIK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HAFAOFANMIK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitVideoConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitVideoConfigRow*>(*)())((::PBYTE)hIl2Cpp + HAFAOFANMIK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTraitVideoConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightTraitVideoConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HAFAOFANMIK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HAFAOFANMIK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAFAOFANMIK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAFAOFANMIK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HAFAOFANMIK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HAFAOFANMIK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HAFAOFANMIK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTraitVideoConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTraitVideoConfigRow*))((::PBYTE)hIl2Cpp + HAFAOFANMIK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
