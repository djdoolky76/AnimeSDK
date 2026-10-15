#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EPDGBMGOPHM;
class GGKLOLEFOKF;
namespace RPG::GameCore { class TaskContext; }

#define DACBOBAOLMK_CTOR_OFFSET UNITYSDK_OFFSET(0xDFBC5F0)
#define DACBOBAOLMK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDFBC660)
#define DACBOBAOLMK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDFBC6B0)
#define DACBOBAOLMK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDFBC7A0)
#define DACBOBAOLMK_TICK_OFFSET UNITYSDK_OFFSET(0xDFBC700)

inline static constexpr unsigned int DACBOBAOLMK_TypeDefinitionIndex = 53837;

	class DACBOBAOLMK : public ::GELIALJDFBL
	{
	public:
		::GGKLOLEFOKF* OFKGLJOAMLD; // 0x18
		::EPDGBMGOPHM* OHKCFMOAECF; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GGKLOLEFOKF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GGKLOLEFOKF*))((::PBYTE)hIl2Cpp + DACBOBAOLMK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACBOBAOLMK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACBOBAOLMK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACBOBAOLMK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DACBOBAOLMK_TICK_OFFSET))(this, a1);
		}

	};
