#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class HNCHGCMKAKE;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FIFECHKCBNP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDF65C0)
#define FIFECHKCBNP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDF6B40)
#define FIFECHKCBNP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDF6730)
#define FIFECHKCBNP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDF6070)
#define FIFECHKCBNP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDF6300)
#define FIFECHKCBNP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDF67D0)
#define FIFECHKCBNP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDF6820)
#define FIFECHKCBNP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDF6600)
#define FIFECHKCBNP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDF62A0)
#define FIFECHKCBNP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDF6430)
#define FIFECHKCBNP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDF6690)
#define FIFECHKCBNP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDF5FF0)

inline static constexpr unsigned int FIFECHKCBNP_TypeDefinitionIndex = 12704;

	class FIFECHKCBNP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HNCHGCMKAKE*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HNCHGCMKAKE*>**)UnitySDK::FromName("", "FIFECHKCBNP")->GetStaticField(0x13870);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FIFECHKCBNP")->GetStaticField(0x13878);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FIFECHKCBNP")->GetStaticField(0x13880);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FIFECHKCBNP")->GetStaticField(0x4450);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FIFECHKCBNP")->GetStaticField(0x4451);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIFECHKCBNP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HNCHGCMKAKE*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HNCHGCMKAKE*>*(*)())((::PBYTE)hIl2Cpp + FIFECHKCBNP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FIFECHKCBNP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HNCHGCMKAKE*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HNCHGCMKAKE*>(*)())((::PBYTE)hIl2Cpp + FIFECHKCBNP_FPHGMAMDFHE_OFFSET))();
		}

		static ::HNCHGCMKAKE* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::HNCHGCMKAKE*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FIFECHKCBNP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FIFECHKCBNP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIFECHKCBNP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIFECHKCBNP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FIFECHKCBNP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FIFECHKCBNP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FIFECHKCBNP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::HNCHGCMKAKE* a1)
		{
			return ((::System::Void(*)(::HNCHGCMKAKE*))((::PBYTE)hIl2Cpp + FIFECHKCBNP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
