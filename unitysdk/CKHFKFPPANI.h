#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BJIACBNKCCJ;
namespace UnityEngine { class Transform; }

#define CKHFKFPPANI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB16AE0)

inline static constexpr unsigned int CKHFKFPPANI_TypeDefinitionIndex = 43921;

	class CKHFKFPPANI : public ::System::Object
	{
	public:
		::UnityEngine::Transform* DICDJJOJKGF; // 0x10
		::BJIACBNKCCJ* NDJINIMPHFH; // 0x18
		::System::Single JFAGECNFHJL; // 0x20
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x24
		::System::Single HBAMPJPOOLM; // 0x30
		::System::Single BJOCBPFKJDP; // 0x34
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHFKFPPANI_CTOR_OFFSET))(this);
		}

	};
