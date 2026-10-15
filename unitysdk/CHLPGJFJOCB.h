#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class MLEHLBPAAKM;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CHLPGJFJOCB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC11C50)
#define CHLPGJFJOCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC12220)
#define CHLPGJFJOCB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC11DC0)
#define CHLPGJFJOCB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC116C0)
#define CHLPGJFJOCB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC11950)
#define CHLPGJFJOCB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC11E60)
#define CHLPGJFJOCB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC11EB0)
#define CHLPGJFJOCB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC11C90)
#define CHLPGJFJOCB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC118F0)
#define CHLPGJFJOCB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC11AC0)
#define CHLPGJFJOCB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC11D20)
#define CHLPGJFJOCB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC11640)

inline static constexpr unsigned int CHLPGJFJOCB_TypeDefinitionIndex = 11308;

	class CHLPGJFJOCB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MLEHLBPAAKM*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MLEHLBPAAKM*>**)UnitySDK::FromName("", "CHLPGJFJOCB")->GetStaticField(0x42EF0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CHLPGJFJOCB")->GetStaticField(0x42EF8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CHLPGJFJOCB")->GetStaticField(0x42F00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CHLPGJFJOCB")->GetStaticField(0x101D0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CHLPGJFJOCB")->GetStaticField(0x101D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHLPGJFJOCB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MLEHLBPAAKM*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MLEHLBPAAKM*>*(*)())((::PBYTE)hIl2Cpp + CHLPGJFJOCB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CHLPGJFJOCB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MLEHLBPAAKM*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MLEHLBPAAKM*>(*)())((::PBYTE)hIl2Cpp + CHLPGJFJOCB_FPHGMAMDFHE_OFFSET))();
		}

		static ::MLEHLBPAAKM* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::MLEHLBPAAKM*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CHLPGJFJOCB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CHLPGJFJOCB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHLPGJFJOCB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHLPGJFJOCB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CHLPGJFJOCB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CHLPGJFJOCB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CHLPGJFJOCB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::MLEHLBPAAKM* a1)
		{
			return ((::System::Void(*)(::MLEHLBPAAKM*))((::PBYTE)hIl2Cpp + CHLPGJFJOCB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
