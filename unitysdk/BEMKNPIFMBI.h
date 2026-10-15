#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OONGDLIDJJJ;

#define BEMKNPIFMBI_CTOR_OFFSET UNITYSDK_OFFSET(0xB1563E0)
#define BEMKNPIFMBI_MNAKIEOGPDK_OFFSET UNITYSDK_OFFSET(0xB1563F0)

inline static constexpr unsigned int BEMKNPIFMBI_TypeDefinitionIndex = 54364;

	class BEMKNPIFMBI : public ::System::Object
	{
	public:
		::OONGDLIDJJJ* EEFMDEHLLFI; // 0x10
		::System::Void _ctor(::OONGDLIDJJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + BEMKNPIFMBI_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint MNAKIEOGPDK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + BEMKNPIFMBI_MNAKIEOGPDK_OFFSET))(this);
		}

	};
