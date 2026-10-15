#pragma once
#include "unitysdk/unitysdk.h"
class DOBGLENDOMB;
class MNCOPNHONHO;
class PEEDLCHFAFL;
namespace RPG::Client { class BubbleTalkConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define GECLGHLDPEJ_AEPKEDIGHFL_1_OFFSET UNITYSDK_OFFSET(0x159C8220)
#define GECLGHLDPEJ_AEPKEDIGHFL_OFFSET UNITYSDK_OFFSET(0x159C80C0)
#define GECLGHLDPEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x159C75A0)
#define GECLGHLDPEJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159C75D0)
#define GECLGHLDPEJ_LLDKMAMCNIA_OFFSET UNITYSDK_OFFSET(0x159C8650)
#define GECLGHLDPEJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159C7670)
#define GECLGHLDPEJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x159C8530)
#define GECLGHLDPEJ_PFEODCIJKPH_OFFSET UNITYSDK_OFFSET(0x159C8580)

	class GECLGHLDPEJ
	{
	public:
		::RPG::Client::BubbleTalkConfig* GJMEBCMNPMK; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DOBGLENDOMB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DOBGLENDOMB*))((::PBYTE)hIl2Cpp + GECLGHLDPEJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GECLGHLDPEJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GECLGHLDPEJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void AEPKEDIGHFL(::PEEDLCHFAFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + GECLGHLDPEJ_AEPKEDIGHFL_OFFSET))(this, a1);
		}

		::System::Void AEPKEDIGHFL_1(::MNCOPNHONHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + GECLGHLDPEJ_AEPKEDIGHFL_1_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GECLGHLDPEJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void PFEODCIJKPH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GECLGHLDPEJ_PFEODCIJKPH_OFFSET))(this, a1);
		}

		::System::Void LLDKMAMCNIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GECLGHLDPEJ_LLDKMAMCNIA_OFFSET))(this);
		}

	};
