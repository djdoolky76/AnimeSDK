#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSeasonTutorialConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LGNGDNIEJMP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E95BE60)
#define LGNGDNIEJMP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E95C420)
#define LGNGDNIEJMP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E95BFD0)
#define LGNGDNIEJMP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E95B8D0)
#define LGNGDNIEJMP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E95BB60)
#define LGNGDNIEJMP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E95C070)
#define LGNGDNIEJMP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E95C0C0)
#define LGNGDNIEJMP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E95BEA0)
#define LGNGDNIEJMP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E95BB00)
#define LGNGDNIEJMP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E95BC90)
#define LGNGDNIEJMP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E95BF30)
#define LGNGDNIEJMP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E95B850)

inline static constexpr unsigned int LGNGDNIEJMP_TypeDefinitionIndex = 13706;

	class LGNGDNIEJMP : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LGNGDNIEJMP")->GetStaticField(0x39B70);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTutorialConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTutorialConfigRow*>**)UnitySDK::FromName("", "LGNGDNIEJMP")->GetStaticField(0x39B78);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LGNGDNIEJMP")->GetStaticField(0x39B80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LGNGDNIEJMP")->GetStaticField(0xB740);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LGNGDNIEJMP")->GetStaticField(0xB741);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGNGDNIEJMP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTutorialConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTutorialConfigRow*>*(*)())((::PBYTE)hIl2Cpp + LGNGDNIEJMP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LGNGDNIEJMP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTutorialConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTutorialConfigRow*>(*)())((::PBYTE)hIl2Cpp + LGNGDNIEJMP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightSeasonTutorialConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightSeasonTutorialConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LGNGDNIEJMP_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LGNGDNIEJMP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGNGDNIEJMP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGNGDNIEJMP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LGNGDNIEJMP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LGNGDNIEJMP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LGNGDNIEJMP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightSeasonTutorialConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightSeasonTutorialConfigRow*))((::PBYTE)hIl2Cpp + LGNGDNIEJMP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
