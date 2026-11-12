#pragma once
#include "unitysdk/unitysdk.h"
class KBFMLFJCDEI;
namespace RPG::GameCore { class TaskContext; }

#define PKGHHBJINNN_CTOR_OFFSET UNITYSDK_OFFSET(0xCBE4ED0)
#define PKGHHBJINNN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCBE4F00)

inline static constexpr unsigned int PKGHHBJINNN_TypeDefinitionIndex = 56700;

	class PKGHHBJINNN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KBFMLFJCDEI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KBFMLFJCDEI*))((::PBYTE)hIl2Cpp + PKGHHBJINNN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKGHHBJINNN_ONTASKBEGIN_OFFSET))(this);
		}

	};
