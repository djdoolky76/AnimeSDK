#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class QuestGetReward; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LMECCELMKGH_ADLCFKNCGCE_OFFSET UNITYSDK_OFFSET(0xB77BBF0)
#define LMECCELMKGH_CTOR_OFFSET UNITYSDK_OFFSET(0xB77B870)
#define LMECCELMKGH_DDCNPPLPGNH_OFFSET UNITYSDK_OFFSET(0xB77BE70)
#define LMECCELMKGH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB77BD50)
#define LMECCELMKGH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB77B880)
#define LMECCELMKGH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB77BD00)
#define LMECCELMKGH_TICK_OFFSET UNITYSDK_OFFSET(0xB77BE10)

inline static constexpr unsigned int LMECCELMKGH_TypeDefinitionIndex = 58369;

	class LMECCELMKGH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* NINPFFIMKLJ; // 0x20
		::RPG::GameCore::QuestGetReward* IGHAHBNLIJA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::QuestGetReward* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::QuestGetReward*))((::PBYTE)hIl2Cpp + LMECCELMKGH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMECCELMKGH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMECCELMKGH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMECCELMKGH_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LMECCELMKGH_TICK_OFFSET))(this, a1);
		}

		::System::Void ADLCFKNCGCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMECCELMKGH_ADLCFKNCGCE_OFFSET))(this);
		}

		::System::Void DDCNPPLPGNH(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + LMECCELMKGH_DDCNPPLPGNH_OFFSET))(this, a1, a2);
		}

	};
