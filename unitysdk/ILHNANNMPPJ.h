#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBEBICGIOAB;
class OBMNAMNDCCK;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define ILHNANNMPPJ_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x164B4A60)
#define ILHNANNMPPJ_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x164B4850)
#define ILHNANNMPPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x164B4C90)

	class ILHNANNMPPJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Queue_1<::OBMNAMNDCCK*>** StaticGet_MFPNICMCKJG()
		{
			return (::System::Collections::Generic::Queue_1<::OBMNAMNDCCK*>**)UnitySDK::FromName("", "ILHNANNMPPJ")->GetStaticField(0x65E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILHNANNMPPJ_CCTOR_OFFSET))();
		}

		static ::CBEBICGIOAB* ACMKLFOMPFC(::System::Single a1)
		{
			return ((::CBEBICGIOAB*(*)(::System::Single))((::PBYTE)hIl2Cpp + ILHNANNMPPJ_ACMKLFOMPFC_OFFSET))(a1);
		}

		static ::System::Void ABKBOGIGAEH(::CBEBICGIOAB* a1)
		{
			return ((::System::Void(*)(::CBEBICGIOAB*))((::PBYTE)hIl2Cpp + ILHNANNMPPJ_ABKBOGIGAEH_OFFSET))(a1);
		}

	};
