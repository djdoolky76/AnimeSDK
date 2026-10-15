#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class HoyoTag; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OIDDJJLHGKO_CLEAR_OFFSET UNITYSDK_OFFSET(0xBE6F610)
#define OIDDJJLHGKO_CTOR_OFFSET UNITYSDK_OFFSET(0xBE6F6A0)

inline static constexpr unsigned int OIDDJJLHGKO_TypeDefinitionIndex = 73816;

	class OIDDJJLHGKO : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::HoyoTag*>* MJLOGDAIMFE; // 0x10
		::System::Int32 IFAKHGDKAPI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDDJJLHGKO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIDDJJLHGKO_CLEAR_OFFSET))(this);
		}

	};
