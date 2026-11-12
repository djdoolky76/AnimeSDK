#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCIKJINCAFN;
class FEFLMKBBDLO;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define EAGPPDDBBIM_CTOR_OFFSET UNITYSDK_OFFSET(0x13469160)
#define EAGPPDDBBIM_GET_DISHTARGET_OFFSET UNITYSDK_OFFSET(0x13469190)
#define EAGPPDDBBIM_GET_EMITCOUNT_OFFSET UNITYSDK_OFFSET(0x134691B0)
#define EAGPPDDBBIM_GET_LANDINGTARGETS_OFFSET UNITYSDK_OFFSET(0x134691A0)
#define EAGPPDDBBIM_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x13469180)

inline static constexpr unsigned int EAGPPDDBBIM_TypeDefinitionIndex = 80055;

	class EAGPPDDBBIM : public ::System::Object
	{
	public:
		::FEFLMKBBDLO* _Source_k__BackingField; // 0x10
		::BCIKJINCAFN* _DishTarget_k__BackingField; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::BCIKJINCAFN*>* _LandingTargets_k__BackingField; // 0x20
		::System::Int32 _EmitCount_k__BackingField; // 0x28
		::System::Void _ctor(::FEFLMKBBDLO* a1, ::BCIKJINCAFN* a2, ::System::Collections::Generic::IReadOnlyList_1<::BCIKJINCAFN*>* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::FEFLMKBBDLO*, ::BCIKJINCAFN*, ::System::Collections::Generic::IReadOnlyList_1<::BCIKJINCAFN*>*, ::System::Int32))((::PBYTE)hIl2Cpp + EAGPPDDBBIM_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::FEFLMKBBDLO* get_Source()
		{
			return ((::FEFLMKBBDLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGPPDDBBIM_GET_SOURCE_OFFSET))(this);
		}

		::BCIKJINCAFN* get_DishTarget()
		{
			return ((::BCIKJINCAFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGPPDDBBIM_GET_DISHTARGET_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::BCIKJINCAFN*>* get_LandingTargets()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::BCIKJINCAFN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGPPDDBBIM_GET_LANDINGTARGETS_OFFSET))(this);
		}

		::System::Int32 get_EmitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGPPDDBBIM_GET_EMITCOUNT_OFFSET))(this);
		}

	};
