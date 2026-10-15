#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FunctionConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MKADEEFGNNP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D188DE0)
#define MKADEEFGNNP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D189360)
#define MKADEEFGNNP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D188F50)
#define MKADEEFGNNP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D188890)
#define MKADEEFGNNP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D188B20)
#define MKADEEFGNNP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D188FF0)
#define MKADEEFGNNP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D189040)
#define MKADEEFGNNP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D188E20)
#define MKADEEFGNNP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D188AC0)
#define MKADEEFGNNP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D188C50)
#define MKADEEFGNNP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D188EB0)
#define MKADEEFGNNP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D188810)

inline static constexpr unsigned int MKADEEFGNNP_TypeDefinitionIndex = 13316;

	class MKADEEFGNNP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunctionConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunctionConfigRow*>**)UnitySDK::FromName("", "MKADEEFGNNP")->GetStaticField(0x46D00);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MKADEEFGNNP")->GetStaticField(0x46D08);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MKADEEFGNNP")->GetStaticField(0x46D10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MKADEEFGNNP")->GetStaticField(0x10960);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MKADEEFGNNP")->GetStaticField(0x10961);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKADEEFGNNP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunctionConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunctionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MKADEEFGNNP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MKADEEFGNNP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunctionConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FunctionConfigRow*>(*)())((::PBYTE)hIl2Cpp + MKADEEFGNNP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::FunctionConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FunctionConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MKADEEFGNNP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MKADEEFGNNP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKADEEFGNNP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKADEEFGNNP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MKADEEFGNNP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MKADEEFGNNP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MKADEEFGNNP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::FunctionConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::FunctionConfigRow*))((::PBYTE)hIl2Cpp + MKADEEFGNNP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
