#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCFKPLDONLO;
namespace RPG::GameCore { class HoyoTag; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KJNNFEKEANF_CTOR_OFFSET UNITYSDK_OFFSET(0xB45E250)

inline static constexpr unsigned int KJNNFEKEANF_TypeDefinitionIndex = 73844;

	class KJNNFEKEANF : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::HoyoTag*, ::FCFKPLDONLO*>* JFKBOFJCIKM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJNNFEKEANF_CTOR_OFFSET))(this);
		}

	};
