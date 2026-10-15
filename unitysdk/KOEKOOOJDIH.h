#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RecordCameraRootPos; }
namespace RPG::GameCore { class TaskContext; }

#define KOEKOOOJDIH_CTOR_OFFSET UNITYSDK_OFFSET(0xB593050)
#define KOEKOOOJDIH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB593080)

inline static constexpr unsigned int KOEKOOOJDIH_TypeDefinitionIndex = 55281;

	class KOEKOOOJDIH
	{
	public:
		// static const ::System::String* HBNHOEKJBOL; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RecordCameraRootPos* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RecordCameraRootPos*))((::PBYTE)hIl2Cpp + KOEKOOOJDIH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOEKOOOJDIH_ONTASKBEGIN_OFFSET))(this);
		}

	};
