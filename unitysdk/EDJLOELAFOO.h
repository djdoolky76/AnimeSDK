#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class IAAOMMGICFK;
class LGADDHADAFL;
namespace RPG::GameCore { class TaskContext; }

#define EDJLOELAFOO_CTOR_OFFSET UNITYSDK_OFFSET(0x186C5A40)
#define EDJLOELAFOO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x186C5A50)
#define EDJLOELAFOO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x186C5AF0)
#define EDJLOELAFOO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x186C5AA0)
#define EDJLOELAFOO_TICK_OFFSET UNITYSDK_OFFSET(0x186C5C40)

inline static constexpr unsigned int EDJLOELAFOO_TypeDefinitionIndex = 53824;

	class EDJLOELAFOO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::LGADDHADAFL* IGHAHBNLIJA; // 0x20
		::IAAOMMGICFK* HOADGOKCPDG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LGADDHADAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LGADDHADAFL*))((::PBYTE)hIl2Cpp + EDJLOELAFOO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJLOELAFOO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJLOELAFOO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJLOELAFOO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EDJLOELAFOO_TICK_OFFSET))(this, a1);
		}

	};
