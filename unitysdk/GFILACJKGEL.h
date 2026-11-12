#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GuideVideoConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GFILACJKGEL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E017010)
#define GFILACJKGEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E017BF0)
#define GFILACJKGEL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E0173B0)
#define GFILACJKGEL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E017050)
#define GFILACJKGEL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E0178F0)
#define GFILACJKGEL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E017450)
#define GFILACJKGEL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E0174A0)
#define GFILACJKGEL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E017280)
#define GFILACJKGEL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E017890)
#define GFILACJKGEL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E017A60)
#define GFILACJKGEL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E017310)
#define GFILACJKGEL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E017810)

inline static constexpr unsigned int GFILACJKGEL_TypeDefinitionIndex = 15575;

	class GFILACJKGEL : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GuideVideoConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GuideVideoConfigRow*>**)UnitySDK::FromName("", "GFILACJKGEL")->GetStaticField(0xF170);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GFILACJKGEL")->GetStaticField(0xF178);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GFILACJKGEL")->GetStaticField(0xF180);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GFILACJKGEL")->GetStaticField(0x31B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GFILACJKGEL")->GetStaticField(0x31B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFILACJKGEL_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GFILACJKGEL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFILACJKGEL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFILACJKGEL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GFILACJKGEL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GFILACJKGEL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GFILACJKGEL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GuideVideoConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GuideVideoConfigRow*))((::PBYTE)hIl2Cpp + GFILACJKGEL_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GuideVideoConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GuideVideoConfigRow*>*(*)())((::PBYTE)hIl2Cpp + GFILACJKGEL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GFILACJKGEL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GuideVideoConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GuideVideoConfigRow*>(*)())((::PBYTE)hIl2Cpp + GFILACJKGEL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GuideVideoConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GuideVideoConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GFILACJKGEL_LMBKNCAIDLC_OFFSET))(a1);
		}

	};
