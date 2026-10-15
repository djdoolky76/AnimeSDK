#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class CIPGJALLKNB;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IHBGFANGOJF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CF0ED90)
#define IHBGFANGOJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF0F310)
#define IHBGFANGOJF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CF0EF00)
#define IHBGFANGOJF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF0E880)
#define IHBGFANGOJF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CF0EB10)
#define IHBGFANGOJF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CF0EFA0)
#define IHBGFANGOJF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CF0EFF0)
#define IHBGFANGOJF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CF0EDD0)
#define IHBGFANGOJF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CF0EAB0)
#define IHBGFANGOJF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CF0EC40)
#define IHBGFANGOJF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CF0EE60)
#define IHBGFANGOJF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CF0E800)

inline static constexpr unsigned int IHBGFANGOJF_TypeDefinitionIndex = 12475;

	class IHBGFANGOJF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IHBGFANGOJF")->GetStaticField(0x236B0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IHBGFANGOJF")->GetStaticField(0x236B8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CIPGJALLKNB*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CIPGJALLKNB*>**)UnitySDK::FromName("", "IHBGFANGOJF")->GetStaticField(0x236C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IHBGFANGOJF")->GetStaticField(0x7DC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IHBGFANGOJF")->GetStaticField(0x7DC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHBGFANGOJF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CIPGJALLKNB*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CIPGJALLKNB*>*(*)())((::PBYTE)hIl2Cpp + IHBGFANGOJF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IHBGFANGOJF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::CIPGJALLKNB*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::CIPGJALLKNB*>(*)())((::PBYTE)hIl2Cpp + IHBGFANGOJF_FPHGMAMDFHE_OFFSET))();
		}

		static ::CIPGJALLKNB* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::CIPGJALLKNB*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IHBGFANGOJF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IHBGFANGOJF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHBGFANGOJF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHBGFANGOJF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IHBGFANGOJF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IHBGFANGOJF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IHBGFANGOJF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::CIPGJALLKNB* a1)
		{
			return ((::System::Void(*)(::CIPGJALLKNB*))((::PBYTE)hIl2Cpp + IHBGFANGOJF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
