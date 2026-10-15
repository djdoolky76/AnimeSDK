#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PMAPCLKFJGK.h"
namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define ANFJGEIGLPK_AMBOMIMDLMK_OFFSET UNITYSDK_OFFSET(0x15596860)
#define ANFJGEIGLPK_BFALCBKCFFF_OFFSET UNITYSDK_OFFSET(0x15596390)
#define ANFJGEIGLPK_CTOR_OFFSET UNITYSDK_OFFSET(0x155961E0)
#define ANFJGEIGLPK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15596240)
#define ANFJGEIGLPK_JHMMJDKHIEG_OFFSET UNITYSDK_OFFSET(0x15596920)

	class ANFJGEIGLPK : public ::PMAPCLKFJGK
	{
	public:
		::System::UInt32 GFEHJJFELMD; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANFJGEIGLPK_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANFJGEIGLPK_DISPOSE_OFFSET))(this);
		}

		::System::Void BFALCBKCFFF(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ANFJGEIGLPK_BFALCBKCFFF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AMBOMIMDLMK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANFJGEIGLPK_AMBOMIMDLMK_OFFSET))(this, a1);
		}

		::System::Void JHMMJDKHIEG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANFJGEIGLPK_JHMMJDKHIEG_OFFSET))(this, a1);
		}

	};
