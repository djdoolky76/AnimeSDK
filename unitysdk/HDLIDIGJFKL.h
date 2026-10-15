#pragma once
#include "unitysdk/unitysdk.h"
class OIJHPIIBMGK;
namespace RPG::GameCore { class TaskContext; }

#define HDLIDIGJFKL_CTOR_OFFSET UNITYSDK_OFFSET(0x15C3D4E0)
#define HDLIDIGJFKL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C3D510)
#define HDLIDIGJFKL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C3D550)

inline static constexpr unsigned int HDLIDIGJFKL_TypeDefinitionIndex = 53874;

	class HDLIDIGJFKL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OIJHPIIBMGK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OIJHPIIBMGK*))((::PBYTE)hIl2Cpp + HDLIDIGJFKL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLIDIGJFKL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLIDIGJFKL_ONTASKBEGIN_OFFSET))(this);
		}

	};
