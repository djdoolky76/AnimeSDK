#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
class KFELGAIGHAP;
namespace RPG::GameCore { class Remodifier; }
namespace RPG::GameCore { class TaskContext; }

#define LBAEJFBAEMP_CTOR_OFFSET UNITYSDK_OFFSET(0xBE7B530)
#define LBAEJFBAEMP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE7B6B0)
#define LBAEJFBAEMP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE7B8B0)

inline static constexpr unsigned int LBAEJFBAEMP_TypeDefinitionIndex = 56480;

	class LBAEJFBAEMP
	{
	public:
		::KFELGAIGHAP* FNLJDEPHGFK; // 0x28
		::KFELGAIGHAP* DLJHJKLMADI; // 0x30
		::GELIALJDFBL* FAECEMIGBBH; // 0x38
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
