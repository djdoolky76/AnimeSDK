#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
class HEKHCLACHJE;
namespace System::Collections::Generic { class KeyValuePair; }

#define MJCLAKNBIAH_BDDEFKKBMMD___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB969740)
#define MJCLAKNBIAH_BDDEFKKBMMD___C__DISPLAYCLASS9_0___CREATEATTRIBUTELEVELS_B__0_OFFSET UNITYSDK_OFFSET(0xB9699B0)

inline static constexpr unsigned int MJCLAKNBIAH_BDDEFKKBMMD___c__DisplayClass9_0_TypeDefinitionIndex = 79741;

	class MJCLAKNBIAH_BDDEFKKBMMD___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::HEKHCLACHJE* targetAttributeLevels; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCLAKNBIAH_BDDEFKKBMMD___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __CreateAttributeLevels_b__0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + MJCLAKNBIAH_BDDEFKKBMMD___C__DISPLAYCLASS9_0___CREATEATTRIBUTELEVELS_B__0_OFFSET))(this, a1);
		}

	};
