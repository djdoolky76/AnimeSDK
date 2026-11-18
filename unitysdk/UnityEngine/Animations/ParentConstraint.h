#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Animations/ConstraintSource.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_ANIMATIONS_PARENTCONSTRAINT_GETSOURCECOUNTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FE253F0)
#define UNITYENGINE_ANIMATIONS_PARENTCONSTRAINT_GETSOURCEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FE255A0)
#define UNITYENGINE_ANIMATIONS_PARENTCONSTRAINT_GETSOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FE25560)
#define UNITYENGINE_ANIMATIONS_PARENTCONSTRAINT_GETSOURCES_OFFSET UNITYSDK_OFFSET(0x1FE25500)
#define UNITYENGINE_ANIMATIONS_PARENTCONSTRAINT_GETSOURCE_OFFSET UNITYSDK_OFFSET(0x1FE25510)
#define UNITYENGINE_ANIMATIONS_PARENTCONSTRAINT_GET_SOURCECOUNT_OFFSET UNITYSDK_OFFSET(0x1FE253E0)
#define UNITYENGINE_ANIMATIONS_PARENTCONSTRAINT_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1FE253D0)
#define UNITYENGINE_ANIMATIONS_PARENTCONSTRAINT_SETSOURCEINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FE25600)
#define UNITYENGINE_ANIMATIONS_PARENTCONSTRAINT_SETSOURCEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FE255F0)
#define UNITYENGINE_ANIMATIONS_PARENTCONSTRAINT_SETSOURCE_OFFSET UNITYSDK_OFFSET(0x1FE255B0)
#define UNITYENGINE_ANIMATIONS_PARENTCONSTRAINT_VALIDATESOURCEINDEX_OFFSET UNITYSDK_OFFSET(0x1FE25400)
#define UNITYENGINE_ANIMATIONS_PARENTCONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE25370)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int ParentConstraint_TypeDefinitionIndex = 6709;

	class ParentConstraint : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PARENTCONSTRAINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_Create(::UnityEngine::Animations::ParentConstraint* self)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::ParentConstraint*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PARENTCONSTRAINT_INTERNAL_CREATE_OFFSET))(self);
		}

		::System::Int32 get_sourceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PARENTCONSTRAINT_GET_SOURCECOUNT_OFFSET))(this);
		}

		static ::System::Int32 GetSourceCountInternal(::UnityEngine::Animations::ParentConstraint* self)
		{
			return ((::System::Int32(*)(::UnityEngine::Animations::ParentConstraint*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PARENTCONSTRAINT_GETSOURCECOUNTINTERNAL_OFFSET))(self);
		}

		::System::Void ValidateSourceIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PARENTCONSTRAINT_VALIDATESOURCEINDEX_OFFSET))(this, index);
		}

		::System::Void GetSources(::System::Collections::Generic::List_1<::UnityEngine::Animations::ConstraintSource>* sources)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Animations::ConstraintSource>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PARENTCONSTRAINT_GETSOURCES_OFFSET))(this, sources);
		}

		::UnityEngine::Animations::ConstraintSource GetSource(::System::Int32 index)
		{
			return ((::UnityEngine::Animations::ConstraintSource(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PARENTCONSTRAINT_GETSOURCE_OFFSET))(this, index);
		}

		::UnityEngine::Animations::ConstraintSource GetSourceInternal(::System::Int32 index)
		{
			return ((::UnityEngine::Animations::ConstraintSource(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PARENTCONSTRAINT_GETSOURCEINTERNAL_OFFSET))(this, index);
		}

		::System::Void SetSource(::System::Int32 index, ::UnityEngine::Animations::ConstraintSource source)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Animations::ConstraintSource))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PARENTCONSTRAINT_SETSOURCE_OFFSET))(this, index, source);
		}

		::System::Void SetSourceInternal(::System::Int32 index, ::UnityEngine::Animations::ConstraintSource source)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Animations::ConstraintSource))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PARENTCONSTRAINT_SETSOURCEINTERNAL_OFFSET))(this, index, source);
		}

		::System::Void GetSourceInternal_Injected(::System::Int32 index, ::UnityEngine::Animations::ConstraintSource& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Animations::ConstraintSource&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PARENTCONSTRAINT_GETSOURCEINTERNAL_INJECTED_OFFSET))(this, index, ret);
		}

		::System::Void SetSourceInternal_Injected(::System::Int32 index, ::UnityEngine::Animations::ConstraintSource& source)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Animations::ConstraintSource&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_PARENTCONSTRAINT_SETSOURCEINTERNAL_INJECTED_OFFSET))(this, index, source);
		}
	};
}
