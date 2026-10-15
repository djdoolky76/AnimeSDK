#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define ELFJOFJPMJO_CTOR_OFFSET UNITYSDK_OFFSET(0x15513DE0)

inline static constexpr unsigned int ELFJOFJPMJO_TypeDefinitionIndex = 55996;

	class ELFJOFJPMJO : public ::System::Object
	{
	public:
		::System::Double ECKFNLIMMIM; // 0x10
		::RPG::GameCore::FixPoint LCOMEKBJLDJ; // 0x18
		::System::UInt32 PEEGJNPMKJK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELFJOFJPMJO_CTOR_OFFSET))(this);
		}

	};
