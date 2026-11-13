#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class DMPMGGKKIBH;

#define DMPMGGKKIBH_AMMNMDNOGGO_CTOR_OFFSET UNITYSDK_OFFSET(0x12CA9640)
#define DMPMGGKKIBH_AMMNMDNOGGO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CA9300)
#define DMPMGGKKIBH_AMMNMDNOGGO_GJMHCJDOAIA_OFFSET UNITYSDK_OFFSET(0x12CAFD70)
#define DMPMGGKKIBH_AMMNMDNOGGO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x12CAB640)

inline static constexpr unsigned int DMPMGGKKIBH_AMMNMDNOGGO_TypeDefinitionIndex = 76368;

	class DMPMGGKKIBH_AMMNMDNOGGO : public ::System::Object
	{
	public:
		::DMPMGGKKIBH* LGEGKIKIPOB; // 0x10
		::System::Void _ctor(::DMPMGGKKIBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMPMGGKKIBH*))((::PBYTE)hIl2Cpp + DMPMGGKKIBH_AMMNMDNOGGO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPMGGKKIBH_AMMNMDNOGGO_DISPOSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPMGGKKIBH_AMMNMDNOGGO_PAGKOAEOLKA_OFFSET))(this);
		}

		::UnityEngine::Vector2 GJMHCJDOAIA(::System::Int32 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + DMPMGGKKIBH_AMMNMDNOGGO_GJMHCJDOAIA_OFFSET))(this, a1, a2);
		}

	};
