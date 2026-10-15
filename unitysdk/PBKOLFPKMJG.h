#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConstValueLittleGameRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PBKOLFPKMJG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2C5C50)
#define PBKOLFPKMJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2C6220)
#define PBKOLFPKMJG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2C5DC0)
#define PBKOLFPKMJG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2C56A0)
#define PBKOLFPKMJG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2C5930)
#define PBKOLFPKMJG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2C5E60)
#define PBKOLFPKMJG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2C5EB0)
#define PBKOLFPKMJG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2C5C90)
#define PBKOLFPKMJG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2C58D0)
#define PBKOLFPKMJG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2C5AA0)
#define PBKOLFPKMJG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2C5D20)
#define PBKOLFPKMJG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2C5620)

inline static constexpr unsigned int PBKOLFPKMJG_TypeDefinitionIndex = 13092;

	class PBKOLFPKMJG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueLittleGameRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueLittleGameRow*>**)UnitySDK::FromName("", "PBKOLFPKMJG")->GetStaticField(0x3E040);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PBKOLFPKMJG")->GetStaticField(0x3E048);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PBKOLFPKMJG")->GetStaticField(0x3E050);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PBKOLFPKMJG")->GetStaticField(0xD470);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PBKOLFPKMJG")->GetStaticField(0xD471);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBKOLFPKMJG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueLittleGameRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueLittleGameRow*>*(*)())((::PBYTE)hIl2Cpp + PBKOLFPKMJG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PBKOLFPKMJG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueLittleGameRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ConstValueLittleGameRow*>(*)())((::PBYTE)hIl2Cpp + PBKOLFPKMJG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ConstValueLittleGameRow* LMBKNCAIDLC(::System::String* a1)
		{
			return ((::RPG::GameCore::ConstValueLittleGameRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + PBKOLFPKMJG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PBKOLFPKMJG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBKOLFPKMJG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBKOLFPKMJG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PBKOLFPKMJG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PBKOLFPKMJG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PBKOLFPKMJG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ConstValueLittleGameRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ConstValueLittleGameRow*))((::PBYTE)hIl2Cpp + PBKOLFPKMJG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
