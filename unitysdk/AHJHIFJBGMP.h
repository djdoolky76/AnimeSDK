#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/PamActionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PamActionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AHJHIFJBGMP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CC968E0)
#define AHJHIFJBGMP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC96EB0)
#define AHJHIFJBGMP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CC96A50)
#define AHJHIFJBGMP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CC96350)
#define AHJHIFJBGMP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CC965E0)
#define AHJHIFJBGMP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CC96AF0)
#define AHJHIFJBGMP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CC96B40)
#define AHJHIFJBGMP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CC96920)
#define AHJHIFJBGMP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CC96580)
#define AHJHIFJBGMP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CC96750)
#define AHJHIFJBGMP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CC969B0)
#define AHJHIFJBGMP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CC962D0)

inline static constexpr unsigned int AHJHIFJBGMP_TypeDefinitionIndex = 14303;

	class AHJHIFJBGMP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamActionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamActionRow*>**)UnitySDK::FromName("", "AHJHIFJBGMP")->GetStaticField(0x3F910);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AHJHIFJBGMP")->GetStaticField(0x3F918);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AHJHIFJBGMP")->GetStaticField(0x3F920);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AHJHIFJBGMP")->GetStaticField(0xF090);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AHJHIFJBGMP")->GetStaticField(0xF091);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHJHIFJBGMP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamActionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamActionRow*>*(*)())((::PBYTE)hIl2Cpp + AHJHIFJBGMP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AHJHIFJBGMP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamActionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamActionRow*>(*)())((::PBYTE)hIl2Cpp + AHJHIFJBGMP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PamActionRow* LMBKNCAIDLC(::RPG::GameCore::PamActionType a1)
		{
			return ((::RPG::GameCore::PamActionRow*(*)(::RPG::GameCore::PamActionType))((::PBYTE)hIl2Cpp + AHJHIFJBGMP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AHJHIFJBGMP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHJHIFJBGMP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHJHIFJBGMP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AHJHIFJBGMP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AHJHIFJBGMP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AHJHIFJBGMP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PamActionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PamActionRow*))((::PBYTE)hIl2Cpp + AHJHIFJBGMP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
