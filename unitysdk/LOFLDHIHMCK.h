#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityModulePunkLordConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LOFLDHIHMCK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E31FC80)
#define LOFLDHIHMCK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E320250)
#define LOFLDHIHMCK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E31FDF0)
#define LOFLDHIHMCK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E31F6F0)
#define LOFLDHIHMCK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E31F980)
#define LOFLDHIHMCK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E31FE90)
#define LOFLDHIHMCK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E31FEE0)
#define LOFLDHIHMCK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E31FCC0)
#define LOFLDHIHMCK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E31F920)
#define LOFLDHIHMCK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E31FAF0)
#define LOFLDHIHMCK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E31FD50)
#define LOFLDHIHMCK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E31F670)

inline static constexpr unsigned int LOFLDHIHMCK_TypeDefinitionIndex = 12345;

	class LOFLDHIHMCK : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LOFLDHIHMCK")->GetStaticField(0x36B70);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityModulePunkLordConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityModulePunkLordConfigRow*>**)UnitySDK::FromName("", "LOFLDHIHMCK")->GetStaticField(0x36B78);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LOFLDHIHMCK")->GetStaticField(0x36B80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LOFLDHIHMCK")->GetStaticField(0xBB90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LOFLDHIHMCK")->GetStaticField(0xBB91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOFLDHIHMCK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityModulePunkLordConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityModulePunkLordConfigRow*>*(*)())((::PBYTE)hIl2Cpp + LOFLDHIHMCK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LOFLDHIHMCK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityModulePunkLordConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityModulePunkLordConfigRow*>(*)())((::PBYTE)hIl2Cpp + LOFLDHIHMCK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityModulePunkLordConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityModulePunkLordConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LOFLDHIHMCK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LOFLDHIHMCK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOFLDHIHMCK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOFLDHIHMCK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LOFLDHIHMCK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LOFLDHIHMCK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LOFLDHIHMCK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityModulePunkLordConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityModulePunkLordConfigRow*))((::PBYTE)hIl2Cpp + LOFLDHIHMCK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
