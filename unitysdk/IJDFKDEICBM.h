#pragma once
#include "unitysdk/unitysdk.h"
class IOGNBKGNPFD;
namespace RPG::GameCore { class LittleGameAbilityPixAirTriggerPlaneAnim; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IJDFKDEICBM_CTOR_OFFSET UNITYSDK_OFFSET(0x16459820)
#define IJDFKDEICBM_KGFKJJLOMJI_OFFSET UNITYSDK_OFFSET(0x164598A0)
#define IJDFKDEICBM_MNONPFEGMPH_OFFSET UNITYSDK_OFFSET(0x16459B90)
#define IJDFKDEICBM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16459850)

inline static constexpr unsigned int IJDFKDEICBM_TypeDefinitionIndex = 58193;

	class IJDFKDEICBM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LittleGameAbilityPixAirTriggerPlaneAnim* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LittleGameAbilityPixAirTriggerPlaneAnim*))((::PBYTE)hIl2Cpp + IJDFKDEICBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDFKDEICBM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void KGFKJJLOMJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDFKDEICBM_KGFKJJLOMJI_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* MNONPFEGMPH(::IOGNBKGNPFD* a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::IOGNBKGNPFD*))((::PBYTE)hIl2Cpp + IJDFKDEICBM_MNONPFEGMPH_OFFSET))(this, a1);
		}

	};
