#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KDJNAAOFMMJ;
class KFELGAIGHAP;
namespace RPG::GameCore { class PropPuzzleMissionResetEventListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define NOKDIGNPJNG_CTOR_OFFSET UNITYSDK_OFFSET(0xBCEB960)
#define NOKDIGNPJNG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCEBA20)
#define NOKDIGNPJNG_GLGNJMMMJAF_OFFSET UNITYSDK_OFFSET(0xBCEBDA0)
#define NOKDIGNPJNG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCEBB90)
#define NOKDIGNPJNG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBCEBC50)
#define NOKDIGNPJNG_TICK_OFFSET UNITYSDK_OFFSET(0xBCEBD10)

inline static constexpr unsigned int NOKDIGNPJNG_TypeDefinitionIndex = 53178;

	class NOKDIGNPJNG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::PropPuzzleMissionResetEventListener* OFKGLJOAMLD; // 0x20
		::KFELGAIGHAP* FGFFJBEKHBO; // 0x28
		::KDJNAAOFMMJ* KGGDNBBFDDB; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropPuzzleMissionResetEventListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropPuzzleMissionResetEventListener*))((::PBYTE)hIl2Cpp + NOKDIGNPJNG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKDIGNPJNG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKDIGNPJNG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKDIGNPJNG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NOKDIGNPJNG_TICK_OFFSET))(this, a1);
		}

		::System::Void GLGNJMMMJAF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NOKDIGNPJNG_GLGNJMMMJAF_OFFSET))(this, a1);
		}

	};
