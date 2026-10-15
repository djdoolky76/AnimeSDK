#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPGTools::LDWhiteBox { class WhiteBoxRegion; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION__GET_DIRECTCHILDREGIONS_D__35_CTOR_OFFSET UNITYSDK_OFFSET(0xE896FB0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION__GET_DIRECTCHILDREGIONS_D__35_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE897820)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION__GET_DIRECTCHILDREGIONS_D__35_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPGTOOLS_LDWHITEBOX_WHITEBOXREGION__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE897A00)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION__GET_DIRECTCHILDREGIONS_D__35_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPGTOOLS_LDWHITEBOX_WHITEBOXREGION__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE897990)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION__GET_DIRECTCHILDREGIONS_D__35_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xE897A80)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION__GET_DIRECTCHILDREGIONS_D__35_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE8979F0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION__GET_DIRECTCHILDREGIONS_D__35_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xE8979A0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION__GET_DIRECTCHILDREGIONS_D__35_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE897810)

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int WhiteBoxRegion__get_DirectChildRegions_d__35_TypeDefinitionIndex = 48960;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35>
	class WhiteBoxRegion__get_DirectChildRegions_d__35 : public ::System::Object
	{
	public:
		::RPGTools::LDWhiteBox::WhiteBoxRegion* __4__this; // 0x10
		::RPGTools::LDWhiteBox::WhiteBoxRegion* __2__current; // 0x18
		::System::Int32 __l__initialThreadId; // 0x20
		::System::Int32 __1__state; // 0x24
		::System::Int32 _i_5__2; // 0x28
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION__GET_DIRECTCHILDREGIONS_D__35_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION__GET_DIRECTCHILDREGIONS_D__35_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION__GET_DIRECTCHILDREGIONS_D__35_MOVENEXT_OFFSET))(this);
		}

		::RPGTools::LDWhiteBox::WhiteBoxRegion* System_Collections_Generic_IEnumerator_RPGTools_LDWhiteBox_WhiteBoxRegion__get_Current()
		{
			return ((::RPGTools::LDWhiteBox::WhiteBoxRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION__GET_DIRECTCHILDREGIONS_D__35_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPGTOOLS_LDWHITEBOX_WHITEBOXREGION__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION__GET_DIRECTCHILDREGIONS_D__35_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION__GET_DIRECTCHILDREGIONS_D__35_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::RPGTools::LDWhiteBox::WhiteBoxRegion*>* System_Collections_Generic_IEnumerable_RPGTools_LDWhiteBox_WhiteBoxRegion__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPGTools::LDWhiteBox::WhiteBoxRegion*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION__GET_DIRECTCHILDREGIONS_D__35_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPGTOOLS_LDWHITEBOX_WHITEBOXREGION__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION__GET_DIRECTCHILDREGIONS_D__35_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
}
