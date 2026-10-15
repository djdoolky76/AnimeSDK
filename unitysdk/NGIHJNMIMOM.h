#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleSealSkillConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NGIHJNMIMOM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2076A0)
#define NGIHJNMIMOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D207C70)
#define NGIHJNMIMOM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D207810)
#define NGIHJNMIMOM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D207110)
#define NGIHJNMIMOM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2073A0)
#define NGIHJNMIMOM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2078B0)
#define NGIHJNMIMOM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D207900)
#define NGIHJNMIMOM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2076E0)
#define NGIHJNMIMOM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D207340)
#define NGIHJNMIMOM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D207510)
#define NGIHJNMIMOM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D207770)
#define NGIHJNMIMOM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D207090)

inline static constexpr unsigned int NGIHJNMIMOM_TypeDefinitionIndex = 11854;

	class NGIHJNMIMOM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NGIHJNMIMOM")->GetStaticField(0x2E350);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealSkillConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealSkillConfigRow*>**)UnitySDK::FromName("", "NGIHJNMIMOM")->GetStaticField(0x2E358);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NGIHJNMIMOM")->GetStaticField(0x2E360);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NGIHJNMIMOM")->GetStaticField(0x97F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NGIHJNMIMOM")->GetStaticField(0x97F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGIHJNMIMOM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealSkillConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealSkillConfigRow*>*(*)())((::PBYTE)hIl2Cpp + NGIHJNMIMOM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NGIHJNMIMOM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealSkillConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealSkillConfigRow*>(*)())((::PBYTE)hIl2Cpp + NGIHJNMIMOM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MarbleSealSkillConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MarbleSealSkillConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NGIHJNMIMOM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NGIHJNMIMOM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGIHJNMIMOM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGIHJNMIMOM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NGIHJNMIMOM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NGIHJNMIMOM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NGIHJNMIMOM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MarbleSealSkillConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MarbleSealSkillConfigRow*))((::PBYTE)hIl2Cpp + NGIHJNMIMOM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
