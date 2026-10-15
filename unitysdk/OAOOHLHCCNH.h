#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class LPKGCDELJML;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OAOOHLHCCNH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D220FC0)
#define OAOOHLHCCNH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D221590)
#define OAOOHLHCCNH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D221130)
#define OAOOHLHCCNH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D220A30)
#define OAOOHLHCCNH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D220CC0)
#define OAOOHLHCCNH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2211D0)
#define OAOOHLHCCNH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D221220)
#define OAOOHLHCCNH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D221000)
#define OAOOHLHCCNH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D220C60)
#define OAOOHLHCCNH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D220E30)
#define OAOOHLHCCNH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D221090)
#define OAOOHLHCCNH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2209B0)

inline static constexpr unsigned int OAOOHLHCCNH_TypeDefinitionIndex = 11259;

	class OAOOHLHCCNH : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OAOOHLHCCNH")->GetStaticField(0x43C20);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OAOOHLHCCNH")->GetStaticField(0x43C28);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LPKGCDELJML*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LPKGCDELJML*>**)UnitySDK::FromName("", "OAOOHLHCCNH")->GetStaticField(0x43C30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OAOOHLHCCNH")->GetStaticField(0x10090);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OAOOHLHCCNH")->GetStaticField(0x10091);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAOOHLHCCNH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LPKGCDELJML*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::LPKGCDELJML*>*(*)())((::PBYTE)hIl2Cpp + OAOOHLHCCNH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OAOOHLHCCNH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LPKGCDELJML*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::LPKGCDELJML*>(*)())((::PBYTE)hIl2Cpp + OAOOHLHCCNH_FPHGMAMDFHE_OFFSET))();
		}

		static ::LPKGCDELJML* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::LPKGCDELJML*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OAOOHLHCCNH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OAOOHLHCCNH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAOOHLHCCNH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAOOHLHCCNH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OAOOHLHCCNH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OAOOHLHCCNH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OAOOHLHCCNH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::LPKGCDELJML* a1)
		{
			return ((::System::Void(*)(::LPKGCDELJML*))((::PBYTE)hIl2Cpp + OAOOHLHCCNH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
