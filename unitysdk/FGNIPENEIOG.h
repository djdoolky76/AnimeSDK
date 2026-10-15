#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueHandBookMiracleTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FGNIPENEIOG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDEF970)
#define FGNIPENEIOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDEFEF0)
#define FGNIPENEIOG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDEFAE0)
#define FGNIPENEIOG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDEF420)
#define FGNIPENEIOG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDEF6B0)
#define FGNIPENEIOG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDEFB80)
#define FGNIPENEIOG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDEFBD0)
#define FGNIPENEIOG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDEF9B0)
#define FGNIPENEIOG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDEF650)
#define FGNIPENEIOG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDEF820)
#define FGNIPENEIOG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDEFA40)
#define FGNIPENEIOG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDEF3A0)

inline static constexpr unsigned int FGNIPENEIOG_TypeDefinitionIndex = 14838;

	class FGNIPENEIOG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandBookMiracleTypeRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandBookMiracleTypeRow*>**)UnitySDK::FromName("", "FGNIPENEIOG")->GetStaticField(0x133F0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FGNIPENEIOG")->GetStaticField(0x133F8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FGNIPENEIOG")->GetStaticField(0x13400);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FGNIPENEIOG")->GetStaticField(0x43B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FGNIPENEIOG")->GetStaticField(0x43B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGNIPENEIOG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandBookMiracleTypeRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandBookMiracleTypeRow*>*(*)())((::PBYTE)hIl2Cpp + FGNIPENEIOG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FGNIPENEIOG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandBookMiracleTypeRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueHandBookMiracleTypeRow*>(*)())((::PBYTE)hIl2Cpp + FGNIPENEIOG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueHandBookMiracleTypeRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueHandBookMiracleTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FGNIPENEIOG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FGNIPENEIOG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGNIPENEIOG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGNIPENEIOG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FGNIPENEIOG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FGNIPENEIOG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FGNIPENEIOG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueHandBookMiracleTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueHandBookMiracleTypeRow*))((::PBYTE)hIl2Cpp + FGNIPENEIOG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
