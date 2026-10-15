#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazePuzzleSwitchHandRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DMBCALGCKML_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD13F40)
#define DMBCALGCKML_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD144C0)
#define DMBCALGCKML_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD140B0)
#define DMBCALGCKML_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD13A30)
#define DMBCALGCKML_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD13CC0)
#define DMBCALGCKML_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD14150)
#define DMBCALGCKML_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD141A0)
#define DMBCALGCKML_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD13F80)
#define DMBCALGCKML_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD13C60)
#define DMBCALGCKML_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD13DF0)
#define DMBCALGCKML_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD14010)
#define DMBCALGCKML_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD139B0)

inline static constexpr unsigned int DMBCALGCKML_TypeDefinitionIndex = 14091;

	class DMBCALGCKML : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleSwitchHandRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleSwitchHandRow*>**)UnitySDK::FromName("", "DMBCALGCKML")->GetStaticField(0x49780);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DMBCALGCKML")->GetStaticField(0x49788);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DMBCALGCKML")->GetStaticField(0x49790);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DMBCALGCKML")->GetStaticField(0x10F50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DMBCALGCKML")->GetStaticField(0x10F51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMBCALGCKML_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleSwitchHandRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleSwitchHandRow*>*(*)())((::PBYTE)hIl2Cpp + DMBCALGCKML_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DMBCALGCKML_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleSwitchHandRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleSwitchHandRow*>(*)())((::PBYTE)hIl2Cpp + DMBCALGCKML_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MazePuzzleSwitchHandRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MazePuzzleSwitchHandRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DMBCALGCKML_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DMBCALGCKML_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMBCALGCKML_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMBCALGCKML_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DMBCALGCKML_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DMBCALGCKML_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DMBCALGCKML_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MazePuzzleSwitchHandRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazePuzzleSwitchHandRow*))((::PBYTE)hIl2Cpp + DMBCALGCKML_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
