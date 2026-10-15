#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class CGGLOEAKFEI;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PENFCEFEODP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2A8B80)
#define PENFCEFEODP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2A9100)
#define PENFCEFEODP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2A8CF0)
#define PENFCEFEODP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2A8630)
#define PENFCEFEODP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2A88C0)
#define PENFCEFEODP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2A8D90)
#define PENFCEFEODP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2A8DE0)
#define PENFCEFEODP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2A8BC0)
#define PENFCEFEODP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2A8860)
#define PENFCEFEODP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2A8A30)
#define PENFCEFEODP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2A8C50)
#define PENFCEFEODP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2A85B0)

inline static constexpr unsigned int PENFCEFEODP_TypeDefinitionIndex = 11996;

	class PENFCEFEODP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CGGLOEAKFEI*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CGGLOEAKFEI*>**)UnitySDK::FromName("", "PENFCEFEODP")->GetStaticField(0x4DB90);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PENFCEFEODP")->GetStaticField(0x4DB98);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PENFCEFEODP")->GetStaticField(0x4DBA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PENFCEFEODP")->GetStaticField(0x11C50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PENFCEFEODP")->GetStaticField(0x11C51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PENFCEFEODP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CGGLOEAKFEI*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CGGLOEAKFEI*>*(*)())((::PBYTE)hIl2Cpp + PENFCEFEODP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PENFCEFEODP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::CGGLOEAKFEI*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::CGGLOEAKFEI*>(*)())((::PBYTE)hIl2Cpp + PENFCEFEODP_FPHGMAMDFHE_OFFSET))();
		}

		static ::CGGLOEAKFEI* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::CGGLOEAKFEI*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PENFCEFEODP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PENFCEFEODP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PENFCEFEODP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PENFCEFEODP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PENFCEFEODP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PENFCEFEODP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PENFCEFEODP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::CGGLOEAKFEI* a1)
		{
			return ((::System::Void(*)(::CGGLOEAKFEI*))((::PBYTE)hIl2Cpp + PENFCEFEODP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
