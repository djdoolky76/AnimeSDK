#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class MKDNHOFBGPA;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FEDJBOKIPMG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E446BF0)
#define FEDJBOKIPMG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E447170)
#define FEDJBOKIPMG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E446D60)
#define FEDJBOKIPMG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E4466A0)
#define FEDJBOKIPMG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E446930)
#define FEDJBOKIPMG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E446E00)
#define FEDJBOKIPMG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E446E50)
#define FEDJBOKIPMG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E446C30)
#define FEDJBOKIPMG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E4468D0)
#define FEDJBOKIPMG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E446AA0)
#define FEDJBOKIPMG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E446CC0)
#define FEDJBOKIPMG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E446620)

inline static constexpr unsigned int FEDJBOKIPMG_TypeDefinitionIndex = 12561;

	class FEDJBOKIPMG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MKDNHOFBGPA*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MKDNHOFBGPA*>**)UnitySDK::FromName("", "FEDJBOKIPMG")->GetStaticField(0x52CF0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FEDJBOKIPMG")->GetStaticField(0x52CF8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FEDJBOKIPMG")->GetStaticField(0x52D00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FEDJBOKIPMG")->GetStaticField(0x11C90);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FEDJBOKIPMG")->GetStaticField(0x11C91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEDJBOKIPMG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MKDNHOFBGPA*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::MKDNHOFBGPA*>*(*)())((::PBYTE)hIl2Cpp + FEDJBOKIPMG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FEDJBOKIPMG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MKDNHOFBGPA*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::MKDNHOFBGPA*>(*)())((::PBYTE)hIl2Cpp + FEDJBOKIPMG_FPHGMAMDFHE_OFFSET))();
		}

		static ::MKDNHOFBGPA* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::MKDNHOFBGPA*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FEDJBOKIPMG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FEDJBOKIPMG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEDJBOKIPMG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEDJBOKIPMG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FEDJBOKIPMG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FEDJBOKIPMG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FEDJBOKIPMG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::MKDNHOFBGPA* a1)
		{
			return ((::System::Void(*)(::MKDNHOFBGPA*))((::PBYTE)hIl2Cpp + FEDJBOKIPMG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
