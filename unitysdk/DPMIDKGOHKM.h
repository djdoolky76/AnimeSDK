#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class FNBGPBCDDEB;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPMIDKGOHKM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DF29230)
#define DPMIDKGOHKM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF29800)
#define DPMIDKGOHKM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DF293A0)
#define DPMIDKGOHKM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DF28CA0)
#define DPMIDKGOHKM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DF28F30)
#define DPMIDKGOHKM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DF29440)
#define DPMIDKGOHKM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DF29490)
#define DPMIDKGOHKM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DF29270)
#define DPMIDKGOHKM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DF28ED0)
#define DPMIDKGOHKM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DF290A0)
#define DPMIDKGOHKM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DF29300)
#define DPMIDKGOHKM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DF28C20)

inline static constexpr unsigned int DPMIDKGOHKM_TypeDefinitionIndex = 12051;

	class DPMIDKGOHKM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FNBGPBCDDEB*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FNBGPBCDDEB*>**)UnitySDK::FromName("", "DPMIDKGOHKM")->GetStaticField(0x33FC0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DPMIDKGOHKM")->GetStaticField(0x33FC8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DPMIDKGOHKM")->GetStaticField(0x33FD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DPMIDKGOHKM")->GetStaticField(0xAF80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DPMIDKGOHKM")->GetStaticField(0xAF81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPMIDKGOHKM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FNBGPBCDDEB*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FNBGPBCDDEB*>*(*)())((::PBYTE)hIl2Cpp + DPMIDKGOHKM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DPMIDKGOHKM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::FNBGPBCDDEB*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::FNBGPBCDDEB*>(*)())((::PBYTE)hIl2Cpp + DPMIDKGOHKM_FPHGMAMDFHE_OFFSET))();
		}

		static ::FNBGPBCDDEB* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::FNBGPBCDDEB*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DPMIDKGOHKM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DPMIDKGOHKM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPMIDKGOHKM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPMIDKGOHKM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DPMIDKGOHKM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DPMIDKGOHKM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DPMIDKGOHKM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::FNBGPBCDDEB* a1)
		{
			return ((::System::Void(*)(::FNBGPBCDDEB*))((::PBYTE)hIl2Cpp + DPMIDKGOHKM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
