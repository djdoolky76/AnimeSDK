#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RootMotion::FinalIK { class OffsetModifierVRIK; }

#define ROOTMOTION_FINALIK_OFFSETMODIFIERVRIK__INITIATE_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F7067C0)
#define ROOTMOTION_FINALIK_OFFSETMODIFIERVRIK__INITIATE_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F7069B0)
#define ROOTMOTION_FINALIK_OFFSETMODIFIERVRIK__INITIATE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F706A10)
#define ROOTMOTION_FINALIK_OFFSETMODIFIERVRIK__INITIATE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F7069C0)
#define ROOTMOTION_FINALIK_OFFSETMODIFIERVRIK__INITIATE_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F7067B0)
#define ROOTMOTION_FINALIK_OFFSETMODIFIERVRIK__INITIATE_D__7__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7067A0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int OffsetModifierVRIK__Initiate_d__7_TypeDefinitionIndex = 36972;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
	class OffsetModifierVRIK__Initiate_d__7 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RootMotion::FinalIK::OffsetModifierVRIK* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIERVRIK__INITIATE_D__7__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIERVRIK__INITIATE_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIERVRIK__INITIATE_D__7_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIERVRIK__INITIATE_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIERVRIK__INITIATE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETMODIFIERVRIK__INITIATE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
