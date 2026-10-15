#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIFEEJPHMJC.h"
#include "unitysdk/System/Object.h"
class NDEKPFNFNDD;
namespace RPG::GameCore { class TargetOperationConfigList; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PMHNFBHKCGE_AABALFLGKPE_OFFSET UNITYSDK_OFFSET(0xC316F60)
#define PMHNFBHKCGE_CCTOR_OFFSET UNITYSDK_OFFSET(0xC317720)
#define PMHNFBHKCGE_DBAGALBCODO_OFFSET UNITYSDK_OFFSET(0xC316680)
#define PMHNFBHKCGE_FNPMJDIAOCM_OFFSET UNITYSDK_OFFSET(0xC316260)
#define PMHNFBHKCGE_HHOAENGOCFE_OFFSET UNITYSDK_OFFSET(0xC317020)
#define PMHNFBHKCGE_JDKCDJNJAOL_OFFSET UNITYSDK_OFFSET(0xC3176A0)
#define PMHNFBHKCGE_OICINKKCCCD_OFFSET UNITYSDK_OFFSET(0xC316C30)

inline static constexpr unsigned int PMHNFBHKCGE_TypeDefinitionIndex = 56532;

	class PMHNFBHKCGE : public ::System::Object
	{
	public:
		static ::RPG::GameCore::TargetOperationConfigList** StaticGet_KMNIGKAGPAH()
		{
			return (::RPG::GameCore::TargetOperationConfigList**)UnitySDK::FromName("", "PMHNFBHKCGE")->GetStaticField(0x70060);
		}

		static ::System::Collections::Generic::Dictionary_2<::DIFEEJPHMJC, ::NDEKPFNFNDD*>** StaticGet_BLLHKPLCIPL()
		{
			return (::System::Collections::Generic::Dictionary_2<::DIFEEJPHMJC, ::NDEKPFNFNDD*>**)UnitySDK::FromName("", "PMHNFBHKCGE")->GetStaticField(0x70068);
		}

		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_IAOICKALEHJ()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)UnitySDK::FromName("", "PMHNFBHKCGE")->GetStaticField(0x70070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMHNFBHKCGE_CCTOR_OFFSET))();
		}

		static ::System::Void FNPMJDIAOCM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMHNFBHKCGE_FNPMJDIAOCM_OFFSET))();
		}

		static ::System::Void DBAGALBCODO(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PMHNFBHKCGE_DBAGALBCODO_OFFSET))(a1, a2);
		}

		static ::System::Void OICINKKCCCD(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PMHNFBHKCGE_OICINKKCCCD_OFFSET))(a1);
		}

		static ::System::Void AABALFLGKPE()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMHNFBHKCGE_AABALFLGKPE_OFFSET))();
		}

		static ::NDEKPFNFNDD* HHOAENGOCFE(::DIFEEJPHMJC a1)
		{
			return ((::NDEKPFNFNDD*(*)(::DIFEEJPHMJC))((::PBYTE)hIl2Cpp + PMHNFBHKCGE_HHOAENGOCFE_OFFSET))(a1);
		}

		static ::System::Boolean JDKCDJNJAOL()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PMHNFBHKCGE_JDKCDJNJAOL_OFFSET))();
		}

	};
