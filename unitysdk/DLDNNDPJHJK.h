#pragma once
#include "unitysdk/unitysdk.h"
class MDHKPOLCNOK;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define DLDNNDPJHJK_CTOR_OFFSET UNITYSDK_OFFSET(0xF893D50)
#define DLDNNDPJHJK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF893DB0)

inline static constexpr unsigned int DLDNNDPJHJK_TypeDefinitionIndex = 53265;

	class DLDNNDPJHJK
	{
	public:
		::MDHKPOLCNOK* APPIHABBCGK; // 0x28
		::System::String* JKNIPJCHKNN; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MDHKPOLCNOK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MDHKPOLCNOK*))((::PBYTE)hIl2Cpp + DLDNNDPJHJK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLDNNDPJHJK_ONTASKBEGIN_OFFSET))(this);
		}

	};
