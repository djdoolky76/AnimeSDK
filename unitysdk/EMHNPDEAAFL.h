#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeartDialTraceConsumeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EMHNPDEAAFL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1ED09630)
#define EMHNPDEAAFL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED09C00)
#define EMHNPDEAAFL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1ED097A0)
#define EMHNPDEAAFL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1ED090A0)
#define EMHNPDEAAFL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1ED09330)
#define EMHNPDEAAFL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1ED09840)
#define EMHNPDEAAFL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1ED09890)
#define EMHNPDEAAFL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1ED09670)
#define EMHNPDEAAFL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1ED092D0)
#define EMHNPDEAAFL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1ED094A0)
#define EMHNPDEAAFL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1ED09700)
#define EMHNPDEAAFL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1ED09020)

inline static constexpr unsigned int EMHNPDEAAFL_TypeDefinitionIndex = 13890;

	class EMHNPDEAAFL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EMHNPDEAAFL")->GetStaticField(0x4CB60);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialTraceConsumeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialTraceConsumeRow*>**)UnitySDK::FromName("", "EMHNPDEAAFL")->GetStaticField(0x4CB68);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EMHNPDEAAFL")->GetStaticField(0x4CB70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EMHNPDEAAFL")->GetStaticField(0xEA30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EMHNPDEAAFL")->GetStaticField(0xEA31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMHNPDEAAFL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialTraceConsumeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialTraceConsumeRow*>*(*)())((::PBYTE)hIl2Cpp + EMHNPDEAAFL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EMHNPDEAAFL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialTraceConsumeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialTraceConsumeRow*>(*)())((::PBYTE)hIl2Cpp + EMHNPDEAAFL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::HeartDialTraceConsumeRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HeartDialTraceConsumeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EMHNPDEAAFL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EMHNPDEAAFL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMHNPDEAAFL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMHNPDEAAFL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EMHNPDEAAFL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EMHNPDEAAFL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EMHNPDEAAFL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::HeartDialTraceConsumeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeartDialTraceConsumeRow*))((::PBYTE)hIl2Cpp + EMHNPDEAAFL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
