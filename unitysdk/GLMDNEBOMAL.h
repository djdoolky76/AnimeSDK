#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RogueMagicEnterNextRoom; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define GLMDNEBOMAL_CTOR_OFFSET UNITYSDK_OFFSET(0x15ABD2A0)
#define GLMDNEBOMAL_DAAHFEAMMKK_OFFSET UNITYSDK_OFFSET(0x15ABD800)
#define GLMDNEBOMAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15ABD960)
#define GLMDNEBOMAL_HHJKAHNNNPK_OFFSET UNITYSDK_OFFSET(0x15ABD9B0)
#define GLMDNEBOMAL_JNHALNIKMEB_OFFSET UNITYSDK_OFFSET(0x15ABDA10)
#define GLMDNEBOMAL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15ABD310)
#define GLMDNEBOMAL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15ABD910)
#define GLMDNEBOMAL_TICK_OFFSET UNITYSDK_OFFSET(0x15ABD2B0)

	class GLMDNEBOMAL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueMagicEnterNextRoom* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueMagicEnterNextRoom*))((::PBYTE)hIl2Cpp + GLMDNEBOMAL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GLMDNEBOMAL_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMDNEBOMAL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMDNEBOMAL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMDNEBOMAL_DISPOSE_OFFSET))(this);
		}

		::System::Void HHJKAHNNNPK(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + GLMDNEBOMAL_HHJKAHNNNPK_OFFSET))(this, a1, a2);
		}

		::System::Void JNHALNIKMEB(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + GLMDNEBOMAL_JNHALNIKMEB_OFFSET))(this, a1, a2);
		}

		::System::Void DAAHFEAMMKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMDNEBOMAL_DAAHFEAMMKK_OFFSET))(this);
		}

	};
