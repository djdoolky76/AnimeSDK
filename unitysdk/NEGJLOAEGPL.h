#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class GLLIPCNMDBO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define NEGJLOAEGPL_CTOR_OFFSET UNITYSDK_OFFSET(0xBB57770)
#define NEGJLOAEGPL_GET_ABILITYPROTOTYPE_OFFSET UNITYSDK_OFFSET(0xBB57710)
#define NEGJLOAEGPL_GET_CASTERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBB576F0)
#define NEGJLOAEGPL_GET_EVENTCASTERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBB57750)
#define NEGJLOAEGPL_GET_RUNTIMEVALUES_OFFSET UNITYSDK_OFFSET(0xBB57730)
#define NEGJLOAEGPL_SET_ABILITYPROTOTYPE_OFFSET UNITYSDK_OFFSET(0xBB57720)
#define NEGJLOAEGPL_SET_CASTERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBB57700)
#define NEGJLOAEGPL_SET_EVENTCASTERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBB57760)
#define NEGJLOAEGPL_SET_RUNTIMEVALUES_OFFSET UNITYSDK_OFFSET(0xBB57740)

inline static constexpr unsigned int NEGJLOAEGPL_TypeDefinitionIndex = 77300;

	class NEGJLOAEGPL : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* _RuntimeValues_k__BackingField; // 0x10
		::GLLIPCNMDBO* _AbilityPrototype_k__BackingField; // 0x18
		::System::Int32 _CasterRuntimeID_k__BackingField; // 0x20
		::System::Int32 _EventCasterRuntimeID_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGJLOAEGPL_CTOR_OFFSET))(this);
		}

		::System::Int32 get_CasterRuntimeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGJLOAEGPL_GET_CASTERRUNTIMEID_OFFSET))(this);
		}

		::System::Void set_CasterRuntimeID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEGJLOAEGPL_SET_CASTERRUNTIMEID_OFFSET))(this, a1);
		}

		::GLLIPCNMDBO* get_AbilityPrototype()
		{
			return ((::GLLIPCNMDBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGJLOAEGPL_GET_ABILITYPROTOTYPE_OFFSET))(this);
		}

		::System::Void set_AbilityPrototype(::GLLIPCNMDBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLLIPCNMDBO*))((::PBYTE)hIl2Cpp + NEGJLOAEGPL_SET_ABILITYPROTOTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* get_RuntimeValues()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGJLOAEGPL_GET_RUNTIMEVALUES_OFFSET))(this);
		}

		::System::Void set_RuntimeValues(::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + NEGJLOAEGPL_SET_RUNTIMEVALUES_OFFSET))(this, a1);
		}

		::System::Int32 get_EventCasterRuntimeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGJLOAEGPL_GET_EVENTCASTERRUNTIMEID_OFFSET))(this);
		}

		::System::Void set_EventCasterRuntimeID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEGJLOAEGPL_SET_EVENTCASTERRUNTIMEID_OFFSET))(this, a1);
		}

	};
