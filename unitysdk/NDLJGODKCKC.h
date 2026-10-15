#pragma once
#include "unitysdk/unitysdk.h"
class KKDDAKCGPLO;
namespace RPG::GameCore { class TaskContext; }

#define NDLJGODKCKC_CTOR_OFFSET UNITYSDK_OFFSET(0xBB4DCC0)
#define NDLJGODKCKC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB4DCF0)

	class NDLJGODKCKC
	{
	public:
		::KKDDAKCGPLO* IGHAHBNLIJA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KKDDAKCGPLO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KKDDAKCGPLO*))((::PBYTE)hIl2Cpp + NDLJGODKCKC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLJGODKCKC_ONTASKBEGIN_OFFSET))(this);
		}

	};
