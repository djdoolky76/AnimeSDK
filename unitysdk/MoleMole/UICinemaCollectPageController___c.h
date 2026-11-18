#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JGAOCMLAJBA;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1984CC40)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1984CC80)
#define MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___C__GENCOLLECTREWARDLIST_B__3_0_OFFSET UNITYSDK_OFFSET(0x1984CC90)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaCollectPageController___c_TypeDefinitionIndex = 57479;

	class UICinemaCollectPageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UICinemaCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x4F9A0);
		}
		static ::System::Comparison_1<::JGAOCMLAJBA*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::JGAOCMLAJBA*>**)Il2CppClass::FromTypeDefinitionIndex(UICinemaCollectPageController___c_TypeDefinitionIndex)->GetStaticField(0x4F9A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GenCollectRewardList_b__3_0(::JGAOCMLAJBA* a, ::JGAOCMLAJBA* b)
		{
			return ((::System::Int32(*)(::PVOID, ::JGAOCMLAJBA*, ::JGAOCMLAJBA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMACOLLECTPAGECONTROLLER___C__GENCOLLECTREWARDLIST_B__3_0_OFFSET))(this, a, b);
		}
	};
}
