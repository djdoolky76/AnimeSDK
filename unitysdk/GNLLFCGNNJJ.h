#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class NKMFDBINCKL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GNLLFCGNNJJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE6E8A0)
#define GNLLFCGNNJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE6EE70)
#define GNLLFCGNNJJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE6EA10)
#define GNLLFCGNNJJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE6E310)
#define GNLLFCGNNJJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE6E5A0)
#define GNLLFCGNNJJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE6EAB0)
#define GNLLFCGNNJJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE6EB00)
#define GNLLFCGNNJJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE6E8E0)
#define GNLLFCGNNJJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE6E540)
#define GNLLFCGNNJJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE6E710)
#define GNLLFCGNNJJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE6E970)
#define GNLLFCGNNJJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE6E290)

inline static constexpr unsigned int GNLLFCGNNJJ_TypeDefinitionIndex = 12484;

	class GNLLFCGNNJJ : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GNLLFCGNNJJ")->GetStaticField(0x1A320);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GNLLFCGNNJJ")->GetStaticField(0x1A328);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NKMFDBINCKL*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NKMFDBINCKL*>**)UnitySDK::FromName("", "GNLLFCGNNJJ")->GetStaticField(0x1A330);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GNLLFCGNNJJ")->GetStaticField(0x5F20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GNLLFCGNNJJ")->GetStaticField(0x5F21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNLLFCGNNJJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NKMFDBINCKL*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NKMFDBINCKL*>*(*)())((::PBYTE)hIl2Cpp + GNLLFCGNNJJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GNLLFCGNNJJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NKMFDBINCKL*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NKMFDBINCKL*>(*)())((::PBYTE)hIl2Cpp + GNLLFCGNNJJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::NKMFDBINCKL* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::NKMFDBINCKL*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GNLLFCGNNJJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GNLLFCGNNJJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNLLFCGNNJJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNLLFCGNNJJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GNLLFCGNNJJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GNLLFCGNNJJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GNLLFCGNNJJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::NKMFDBINCKL* a1)
		{
			return ((::System::Void(*)(::NKMFDBINCKL*))((::PBYTE)hIl2Cpp + GNLLFCGNNJJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
