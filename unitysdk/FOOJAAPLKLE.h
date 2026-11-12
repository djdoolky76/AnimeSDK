#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetAvatarDetachableEnable; }
namespace RPG::GameCore { class TaskContext; }

#define FOOJAAPLKLE_CTOR_OFFSET UNITYSDK_OFFSET(0x16837D40)
#define FOOJAAPLKLE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16837D70)

inline static constexpr unsigned int FOOJAAPLKLE_TypeDefinitionIndex = 59777;

	class FOOJAAPLKLE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAvatarDetachableEnable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAvatarDetachableEnable*))((::PBYTE)hIl2Cpp + FOOJAAPLKLE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOJAAPLKLE_ONTASKBEGIN_OFFSET))(this);
		}

	};
