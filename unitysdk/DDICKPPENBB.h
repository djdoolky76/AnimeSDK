#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class ONKFAADKPDL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DDICKPPENBB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD0E250)
#define DDICKPPENBB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD0E820)
#define DDICKPPENBB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD0E3C0)
#define DDICKPPENBB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD0DCC0)
#define DDICKPPENBB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD0DF50)
#define DDICKPPENBB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD0E460)
#define DDICKPPENBB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD0E4B0)
#define DDICKPPENBB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD0E290)
#define DDICKPPENBB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD0DEF0)
#define DDICKPPENBB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD0E0C0)
#define DDICKPPENBB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD0E320)
#define DDICKPPENBB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD0DC40)

inline static constexpr unsigned int DDICKPPENBB_TypeDefinitionIndex = 11520;

	class DDICKPPENBB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ONKFAADKPDL*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ONKFAADKPDL*>**)UnitySDK::FromName("", "DDICKPPENBB")->GetStaticField(0x4B450);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DDICKPPENBB")->GetStaticField(0x4B458);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DDICKPPENBB")->GetStaticField(0x4B460);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DDICKPPENBB")->GetStaticField(0x11750);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DDICKPPENBB")->GetStaticField(0x11751);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDICKPPENBB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ONKFAADKPDL*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::ONKFAADKPDL*>*(*)())((::PBYTE)hIl2Cpp + DDICKPPENBB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DDICKPPENBB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::ONKFAADKPDL*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::ONKFAADKPDL*>(*)())((::PBYTE)hIl2Cpp + DDICKPPENBB_FPHGMAMDFHE_OFFSET))();
		}

		static ::ONKFAADKPDL* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::ONKFAADKPDL*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DDICKPPENBB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DDICKPPENBB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDICKPPENBB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDICKPPENBB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DDICKPPENBB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DDICKPPENBB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DDICKPPENBB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::ONKFAADKPDL* a1)
		{
			return ((::System::Void(*)(::ONKFAADKPDL*))((::PBYTE)hIl2Cpp + DDICKPPENBB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
