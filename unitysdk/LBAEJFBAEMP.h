#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
class KFELGAIGHAP;
namespace RPG::GameCore { class Remodifier; }
namespace RPG::GameCore { class TaskContext; }

#define LBAEJFBAEMP_CTOR_OFFSET UNITYSDK_OFFSET(0xB5E9C70)
#define LBAEJFBAEMP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5E9DF0)
#define LBAEJFBAEMP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5E9FF0)

	class LBAEJFBAEMP
	{
	public:
		::KFELGAIGHAP* FNLJDEPHGFK; // 0x28
		::GELIALJDFBL* FAECEMIGBBH; // 0x30
		::KFELGAIGHAP* DLJHJKLMADI; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::Remodifier* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::Remodifier*))((::PBYTE)hIl2Cpp + LBAEJFBAEMP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAEJFBAEMP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAEJFBAEMP_ONTASKBEGIN_OFFSET))(this);
		}

	};
