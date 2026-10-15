#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class KCJPKLJAAPM;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JMLPEHEPJIH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D01CE20)
#define JMLPEHEPJIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D01D3A0)
#define JMLPEHEPJIH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D01CF90)
#define JMLPEHEPJIH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D01C8D0)
#define JMLPEHEPJIH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D01CB60)
#define JMLPEHEPJIH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D01D030)
#define JMLPEHEPJIH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D01D080)
#define JMLPEHEPJIH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D01CE60)
#define JMLPEHEPJIH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D01CB00)
#define JMLPEHEPJIH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D01CCD0)
#define JMLPEHEPJIH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D01CEF0)
#define JMLPEHEPJIH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D01C850)

inline static constexpr unsigned int JMLPEHEPJIH_TypeDefinitionIndex = 11567;

	class JMLPEHEPJIH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KCJPKLJAAPM*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KCJPKLJAAPM*>**)UnitySDK::FromName("", "JMLPEHEPJIH")->GetStaticField(0x2F990);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JMLPEHEPJIH")->GetStaticField(0x2F998);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JMLPEHEPJIH")->GetStaticField(0x2F9A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JMLPEHEPJIH")->GetStaticField(0x9CF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JMLPEHEPJIH")->GetStaticField(0x9CF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMLPEHEPJIH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KCJPKLJAAPM*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::KCJPKLJAAPM*>*(*)())((::PBYTE)hIl2Cpp + JMLPEHEPJIH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JMLPEHEPJIH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::KCJPKLJAAPM*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::KCJPKLJAAPM*>(*)())((::PBYTE)hIl2Cpp + JMLPEHEPJIH_FPHGMAMDFHE_OFFSET))();
		}

		static ::KCJPKLJAAPM* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::KCJPKLJAAPM*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JMLPEHEPJIH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JMLPEHEPJIH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMLPEHEPJIH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMLPEHEPJIH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JMLPEHEPJIH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JMLPEHEPJIH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JMLPEHEPJIH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::KCJPKLJAAPM* a1)
		{
			return ((::System::Void(*)(::KCJPKLJAAPM*))((::PBYTE)hIl2Cpp + JMLPEHEPJIH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
