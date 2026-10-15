#pragma once
#include "unitysdk/unitysdk.h"
class FFEICAJPLFC;
class MNBNFBAMKKI;
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABMMAJPEPDD_CTOR_OFFSET UNITYSDK_OFFSET(0xB10B470)
#define ABMMAJPEPDD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB10B500)
#define ABMMAJPEPDD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB10B5E0)
#define ABMMAJPEPDD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB10C080)
#define ABMMAJPEPDD_TICK_OFFSET UNITYSDK_OFFSET(0xB10C0D0)

inline static constexpr unsigned int ABMMAJPEPDD_TypeDefinitionIndex = 53894;

	class ABMMAJPEPDD
	{
	public:
		::System::Collections::Generic::List_1<::MNBNFBAMKKI*>* BNLAOKGEFLK; // 0x28
		::System::Collections::Generic::List_1<::MNBNFBAMKKI*>* FABICEFOKHC; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FFEICAJPLFC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FFEICAJPLFC*))((::PBYTE)hIl2Cpp + ABMMAJPEPDD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMMAJPEPDD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMMAJPEPDD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMMAJPEPDD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABMMAJPEPDD_TICK_OFFSET))(this, a1);
		}

	};
