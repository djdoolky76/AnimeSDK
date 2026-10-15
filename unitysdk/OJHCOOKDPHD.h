#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/TargetGenderType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class MMLMAKEPJLP;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OJHCOOKDPHD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D25BC10)
#define OJHCOOKDPHD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D25C1D0)
#define OJHCOOKDPHD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D25BD80)
#define OJHCOOKDPHD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D25B670)
#define OJHCOOKDPHD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D25B900)
#define OJHCOOKDPHD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D25BE20)
#define OJHCOOKDPHD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D25BE70)
#define OJHCOOKDPHD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D25BC50)
#define OJHCOOKDPHD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D25B8A0)
#define OJHCOOKDPHD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D25BA70)
#define OJHCOOKDPHD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D25BCE0)
#define OJHCOOKDPHD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D25B5F0)

inline static constexpr unsigned int OJHCOOKDPHD_TypeDefinitionIndex = 14516;

	class OJHCOOKDPHD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OJHCOOKDPHD")->GetStaticField(0x482F0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OJHCOOKDPHD")->GetStaticField(0x482F8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MMLMAKEPJLP*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MMLMAKEPJLP*>**)UnitySDK::FromName("", "OJHCOOKDPHD")->GetStaticField(0x48300);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OJHCOOKDPHD")->GetStaticField(0x10D80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OJHCOOKDPHD")->GetStaticField(0x10D81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJHCOOKDPHD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MMLMAKEPJLP*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MMLMAKEPJLP*>*(*)())((::PBYTE)hIl2Cpp + OJHCOOKDPHD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OJHCOOKDPHD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MMLMAKEPJLP*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MMLMAKEPJLP*>(*)())((::PBYTE)hIl2Cpp + OJHCOOKDPHD_FPHGMAMDFHE_OFFSET))();
		}

		static ::MMLMAKEPJLP* LMBKNCAIDLC(::System::UInt32 a1, ::RPG::GameCore::TargetGenderType a2)
		{
			return ((::MMLMAKEPJLP*(*)(::System::UInt32, ::RPG::GameCore::TargetGenderType))((::PBYTE)hIl2Cpp + OJHCOOKDPHD_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OJHCOOKDPHD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJHCOOKDPHD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJHCOOKDPHD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OJHCOOKDPHD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OJHCOOKDPHD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OJHCOOKDPHD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::MMLMAKEPJLP* a1)
		{
			return ((::System::Void(*)(::MMLMAKEPJLP*))((::PBYTE)hIl2Cpp + OJHCOOKDPHD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
