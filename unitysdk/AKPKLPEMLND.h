#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeartDialScriptRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AKPKLPEMLND_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCD6ED0)
#define AKPKLPEMLND_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCD7450)
#define AKPKLPEMLND_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCD7040)
#define AKPKLPEMLND_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCD6980)
#define AKPKLPEMLND_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCD6C10)
#define AKPKLPEMLND_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCD70E0)
#define AKPKLPEMLND_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCD7130)
#define AKPKLPEMLND_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCD6F10)
#define AKPKLPEMLND_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCD6BB0)
#define AKPKLPEMLND_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCD6D40)
#define AKPKLPEMLND_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCD6FA0)
#define AKPKLPEMLND_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCD6900)

inline static constexpr unsigned int AKPKLPEMLND_TypeDefinitionIndex = 13721;

	class AKPKLPEMLND : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialScriptRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialScriptRow*>**)UnitySDK::FromName("", "AKPKLPEMLND")->GetStaticField(0x3B1E0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AKPKLPEMLND")->GetStaticField(0x3B1E8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AKPKLPEMLND")->GetStaticField(0x3B1F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AKPKLPEMLND")->GetStaticField(0xC910);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AKPKLPEMLND")->GetStaticField(0xC911);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKPKLPEMLND_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialScriptRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialScriptRow*>*(*)())((::PBYTE)hIl2Cpp + AKPKLPEMLND_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AKPKLPEMLND_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialScriptRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialScriptRow*>(*)())((::PBYTE)hIl2Cpp + AKPKLPEMLND_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::HeartDialScriptRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HeartDialScriptRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AKPKLPEMLND_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AKPKLPEMLND_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKPKLPEMLND_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKPKLPEMLND_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AKPKLPEMLND_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AKPKLPEMLND_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AKPKLPEMLND_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::HeartDialScriptRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeartDialScriptRow*))((::PBYTE)hIl2Cpp + AKPKLPEMLND_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
