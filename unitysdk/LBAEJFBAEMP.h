#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
class KFELGAIGHAP;
namespace RPG::GameCore { class Remodifier; }
namespace RPG::GameCore { class TaskContext; }

#define LBAEJFBAEMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1B286EF0)
#define LBAEJFBAEMP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B287070)
#define LBAEJFBAEMP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B287270)

inline static constexpr unsigned int LBAEJFBAEMP_TypeDefinitionIndex = 56480;

	class LBAEJFBAEMP
	{
	public:
		::GELIALJDFBL* FAECEMIGBBH; // 0x28
		::KFELGAIGHAP* FNLJDEPHGFK; // 0x30
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
