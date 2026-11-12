#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class IODILPDEMAF;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CNGMCCGIFBG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EED7060)
#define CNGMCCGIFBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EED75E0)
#define CNGMCCGIFBG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EED71D0)
#define CNGMCCGIFBG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EED6B10)
#define CNGMCCGIFBG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EED6DA0)
#define CNGMCCGIFBG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EED7270)
#define CNGMCCGIFBG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EED72C0)
#define CNGMCCGIFBG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EED70A0)
#define CNGMCCGIFBG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EED6D40)
#define CNGMCCGIFBG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EED6ED0)
#define CNGMCCGIFBG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EED7130)
#define CNGMCCGIFBG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EED6A90)

inline static constexpr unsigned int CNGMCCGIFBG_TypeDefinitionIndex = 11622;

	class CNGMCCGIFBG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CNGMCCGIFBG")->GetStaticField(0x36540);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IODILPDEMAF*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IODILPDEMAF*>**)UnitySDK::FromName("", "CNGMCCGIFBG")->GetStaticField(0x36548);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CNGMCCGIFBG")->GetStaticField(0x36550);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CNGMCCGIFBG")->GetStaticField(0xB9B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CNGMCCGIFBG")->GetStaticField(0xB9B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNGMCCGIFBG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IODILPDEMAF*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IODILPDEMAF*>*(*)())((::PBYTE)hIl2Cpp + CNGMCCGIFBG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNGMCCGIFBG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::IODILPDEMAF*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::IODILPDEMAF*>(*)())((::PBYTE)hIl2Cpp + CNGMCCGIFBG_FPHGMAMDFHE_OFFSET))();
		}

		static ::IODILPDEMAF* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::IODILPDEMAF*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CNGMCCGIFBG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CNGMCCGIFBG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNGMCCGIFBG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNGMCCGIFBG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CNGMCCGIFBG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CNGMCCGIFBG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CNGMCCGIFBG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::IODILPDEMAF* a1)
		{
			return ((::System::Void(*)(::IODILPDEMAF*))((::PBYTE)hIl2Cpp + CNGMCCGIFBG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
