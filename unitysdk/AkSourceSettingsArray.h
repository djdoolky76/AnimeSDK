#pragma once
#include "unitysdk/unitysdk.h"
class AkSourceSettings;

#define AKSOURCESETTINGSARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1F607570)
#define AKSOURCESETTINGSARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET UNITYSDK_OFFSET(0x1F607310)
#define AKSOURCESETTINGSARRAY_CTOR_OFFSET UNITYSDK_OFFSET(0x1F607030)
#define AKSOURCESETTINGSARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET UNITYSDK_OFFSET(0x1F607260)
#define AKSOURCESETTINGSARRAY_GET_STRUCTURESIZE_OFFSET UNITYSDK_OFFSET(0x1F607070)

inline static constexpr unsigned int AkSourceSettingsArray_TypeDefinitionIndex = 44872;

	class AkSourceSettingsArray
	{
	public:
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKSOURCESETTINGSARRAY_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_StructureSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOURCESETTINGSARRAY_GET_STRUCTURESIZE_OFFSET))(this);
		}

		::System::Void DefaultConstructAtIntPtr(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKSOURCESETTINGSARRAY_DEFAULTCONSTRUCTATINTPTR_OFFSET))(this, a1);
		}

		::AkSourceSettings* CreateNewReferenceFromIntPtr(::System::IntPtr a1)
		{
			return ((::AkSourceSettings*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKSOURCESETTINGSARRAY_CREATENEWREFERENCEFROMINTPTR_OFFSET))(this, a1);
		}

		::System::Void CloneIntoReferenceFromIntPtr(::System::IntPtr a1, ::AkSourceSettings* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::AkSourceSettings*))((::PBYTE)hIl2Cpp + AKSOURCESETTINGSARRAY_CLONEINTOREFERENCEFROMINTPTR_OFFSET))(this, a1, a2);
		}

	};
