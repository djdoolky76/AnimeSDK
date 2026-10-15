#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveQuestionMessageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IPKJHCLPBEI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CF03430)
#define IPKJHCLPBEI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF03A00)
#define IPKJHCLPBEI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CF035A0)
#define IPKJHCLPBEI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF02EA0)
#define IPKJHCLPBEI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CF03130)
#define IPKJHCLPBEI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CF03640)
#define IPKJHCLPBEI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CF03690)
#define IPKJHCLPBEI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CF03470)
#define IPKJHCLPBEI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CF030D0)
#define IPKJHCLPBEI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CF032A0)
#define IPKJHCLPBEI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CF03500)
#define IPKJHCLPBEI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CF02E20)

inline static constexpr unsigned int IPKJHCLPBEI_TypeDefinitionIndex = 11830;

	class IPKJHCLPBEI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionMessageRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionMessageRow*>**)UnitySDK::FromName("", "IPKJHCLPBEI")->GetStaticField(0x24320);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IPKJHCLPBEI")->GetStaticField(0x24328);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IPKJHCLPBEI")->GetStaticField(0x24330);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IPKJHCLPBEI")->GetStaticField(0x7D60);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IPKJHCLPBEI")->GetStaticField(0x7D61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPKJHCLPBEI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionMessageRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionMessageRow*>*(*)())((::PBYTE)hIl2Cpp + IPKJHCLPBEI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IPKJHCLPBEI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionMessageRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionMessageRow*>(*)())((::PBYTE)hIl2Cpp + IPKJHCLPBEI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveQuestionMessageRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveQuestionMessageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IPKJHCLPBEI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IPKJHCLPBEI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPKJHCLPBEI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPKJHCLPBEI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IPKJHCLPBEI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IPKJHCLPBEI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IPKJHCLPBEI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveQuestionMessageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveQuestionMessageRow*))((::PBYTE)hIl2Cpp + IPKJHCLPBEI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};
