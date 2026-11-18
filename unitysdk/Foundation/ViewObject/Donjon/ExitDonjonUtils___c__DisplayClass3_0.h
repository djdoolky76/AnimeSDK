#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class HKNDDPEJAKF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x132422A0)
#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS3_0__REQUESTBIGSCENEDUNGEONEND_B__0_OFFSET UNITYSDK_OFFSET(0x132422B0)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int ExitDonjonUtils___c__DisplayClass3_0_TypeDefinitionIndex = 43276;

	class ExitDonjonUtils___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action* onResultContextPrepared; // 0x10
		::System::Threading::CancellationToken ct; // 0x18
		::System::Boolean success; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestBigSceneDungeonEnd_b__0(::HKNDDPEJAKF* rsp, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* ntfs)
		{
			return ((::System::Void(*)(::PVOID, ::HKNDDPEJAKF*, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS3_0__REQUESTBIGSCENEDUNGEONEND_B__0_OFFSET))(this, rsp, ntfs);
		}
	};
}
