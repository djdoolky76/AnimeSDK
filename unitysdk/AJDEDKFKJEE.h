#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class NMNGLALPLKF;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define AJDEDKFKJEE_CTOR_OFFSET UNITYSDK_OFFSET(0x12CB2AE0)
#define AJDEDKFKJEE_DAAHFEAMMKK_OFFSET UNITYSDK_OFFSET(0x12CB2B40)
#define AJDEDKFKJEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CB2AF0)
#define AJDEDKFKJEE_IEFEDIKKIOM_OFFSET UNITYSDK_OFFSET(0x12CB3330)
#define AJDEDKFKJEE_OFFNMOINCGK_OFFSET UNITYSDK_OFFSET(0x12CB33D0)
#define AJDEDKFKJEE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CB2C50)
#define AJDEDKFKJEE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12CB3250)
#define AJDEDKFKJEE_TICK_OFFSET UNITYSDK_OFFSET(0x12CB32D0)

inline static constexpr unsigned int AJDEDKFKJEE_TypeDefinitionIndex = 52316;

	class AJDEDKFKJEE : public ::GELIALJDFBL
	{
	public:
		::NMNGLALPLKF* IGHAHBNLIJA; // 0x18
		::System::UInt32 HCAGILCDAMP; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NMNGLALPLKF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NMNGLALPLKF*))((::PBYTE)hIl2Cpp + AJDEDKFKJEE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDEDKFKJEE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDEDKFKJEE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDEDKFKJEE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AJDEDKFKJEE_TICK_OFFSET))(this, a1);
		}

		::System::Void IEFEDIKKIOM(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + AJDEDKFKJEE_IEFEDIKKIOM_OFFSET))(this, a1, a2);
		}

		::System::Void OFFNMOINCGK(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + AJDEDKFKJEE_OFFNMOINCGK_OFFSET))(this, a1, a2);
		}

		::System::Void DAAHFEAMMKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDEDKFKJEE_DAAHFEAMMKK_OFFSET))(this);
		}

	};
