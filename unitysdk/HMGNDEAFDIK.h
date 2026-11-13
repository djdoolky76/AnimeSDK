#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class ONKEIOPBNCK;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }

#define HMGNDEAFDIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A354C50)
#define HMGNDEAFDIK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A354C60)
#define HMGNDEAFDIK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A354CF0)
#define HMGNDEAFDIK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A354CA0)
#define HMGNDEAFDIK_TICK_OFFSET UNITYSDK_OFFSET(0x1A354EE0)
#define HMGNDEAFDIK__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0x1A354F40)

inline static constexpr unsigned int HMGNDEAFDIK_TypeDefinitionIndex = 53813;

	class HMGNDEAFDIK : public ::GELIALJDFBL
	{
	public:
		::ONKEIOPBNCK* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ONKEIOPBNCK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ONKEIOPBNCK*))((::PBYTE)hIl2Cpp + HMGNDEAFDIK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGNDEAFDIK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGNDEAFDIK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMGNDEAFDIK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HMGNDEAFDIK_TICK_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__3_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + HMGNDEAFDIK__ONTASKBEGIN_B__3_0_OFFSET))(this, a1);
		}

	};
