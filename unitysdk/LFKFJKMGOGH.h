#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNNOKOOEPEK;
class KFELGAIGHAP;
namespace RPG::GameCore { class SequenceConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LFKFJKMGOGH_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB679EC0)
#define LFKFJKMGOGH_CTOR_OFFSET UNITYSDK_OFFSET(0xB679E90)
#define LFKFJKMGOGH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB679EE0)
#define LFKFJKMGOGH_GET_NEXT_OFFSET UNITYSDK_OFFSET(0xB67A0D0)
#define LFKFJKMGOGH_GET_PREV_OFFSET UNITYSDK_OFFSET(0xB67A0B0)
#define LFKFJKMGOGH_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xB67A100)
#define LFKFJKMGOGH_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xB67A110)
#define LFKFJKMGOGH_MDOFJHCLPAC_OFFSET UNITYSDK_OFFSET(0xB67A0F0)
#define LFKFJKMGOGH_SET_NEXT_OFFSET UNITYSDK_OFFSET(0xB67A0E0)
#define LFKFJKMGOGH_SET_PREV_OFFSET UNITYSDK_OFFSET(0xB67A0C0)

inline static constexpr unsigned int LFKFJKMGOGH_TypeDefinitionIndex = 54104;

	class LFKFJKMGOGH : public ::System::Object
	{
	public:
		::HNNOKOOEPEK* _Next_k__BackingField; // 0x10
		::HNNOKOOEPEK* _Prev_k__BackingField; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* JKJPFJALGKO; // 0x28
		::System::Collections::Generic::List_1<::KFELGAIGHAP*>* PBNCOAFHEIJ; // 0x30
		::System::Int32 BGOLHKLOFIN; // 0x38
		::System::Int32 EKNMMBFJHHF; // 0x3C
		::System::Int32 BOCOKNFLKID; // 0x40
		::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::SequenceConfig* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SequenceConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + LFKFJKMGOGH_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*, ::System::Int32))((::PBYTE)hIl2Cpp + LFKFJKMGOGH_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKFJKMGOGH_DISPOSE_OFFSET))(this);
		}

		::HNNOKOOEPEK* get_Prev()
		{
			return ((::HNNOKOOEPEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKFJKMGOGH_GET_PREV_OFFSET))(this);
		}

		::System::Void set_Prev(::HNNOKOOEPEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNNOKOOEPEK*))((::PBYTE)hIl2Cpp + LFKFJKMGOGH_SET_PREV_OFFSET))(this, a1);
		}

		::HNNOKOOEPEK* get_Next()
		{
			return ((::HNNOKOOEPEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKFJKMGOGH_GET_NEXT_OFFSET))(this);
		}

		::System::Void set_Next(::HNNOKOOEPEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNNOKOOEPEK*))((::PBYTE)hIl2Cpp + LFKFJKMGOGH_SET_NEXT_OFFSET))(this, a1);
		}

		::System::Int32 MDOFJHCLPAC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKFJKMGOGH_MDOFJHCLPAC_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKFJKMGOGH_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKFJKMGOGH_HKKFFCBJOKM_OFFSET))(this);
		}

	};
