#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHHOCKOFCCI.h"
#include "unitysdk/System/Object.h"

class CBDDODKFCIJ;
class HDBIKLMCCCK;
class LCDOMEFKJKM;
namespace System { template <typename T1, typename T2> class Action_2; }

#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1411C8A0)
#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS0_0__ENDCURRENTXKOVDUNGEON_B__0_OFFSET UNITYSDK_OFFSET(0x1411C8B0)
#define FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS0_0__ENDCURRENTXKOVDUNGEON_B__1_OFFSET UNITYSDK_OFFSET(0x1411C910)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int ExitDonjonUtils___c__DisplayClass0_0_TypeDefinitionIndex = 43278;

	class ExitDonjonUtils___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::CBDDODKFCIJ* streamingContext; // 0x10
		::System::Action_2<::System::Boolean, ::CBDDODKFCIJ*>* onResultContextPrepared; // 0x18
		::LCDOMEFKJKM* timerInfo; // 0x20
		::System::Boolean isZenkov; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 escapeId; // 0x2C
		::AHHOCKOFCCI result; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _EndCurrentXKovDungeon_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS0_0__ENDCURRENTXKOVDUNGEON_B__0_OFFSET))(this);
		}

		::HDBIKLMCCCK* _EndCurrentXKovDungeon_b__1()
		{
			return ((::HDBIKLMCCCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_EXITDONJONUTILS___C__DISPLAYCLASS0_0__ENDCURRENTXKOVDUNGEON_B__1_OFFSET))(this);
		}
	};
}
