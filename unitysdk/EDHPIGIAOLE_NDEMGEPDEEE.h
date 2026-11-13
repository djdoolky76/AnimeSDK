#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDHPIGIAOLE_LIJMHDLPAMF.h"
namespace UnityEngine { class Transform; }

#define EDHPIGIAOLE_NDEMGEPDEEE_CLEAR_OFFSET UNITYSDK_OFFSET(0x186C2670)
#define EDHPIGIAOLE_NDEMGEPDEEE_CTOR_OFFSET UNITYSDK_OFFSET(0x186C26C0)

inline static constexpr unsigned int EDHPIGIAOLE_NDEMGEPDEEE_TypeDefinitionIndex = 58636;

	class EDHPIGIAOLE_NDEMGEPDEEE : public ::EDHPIGIAOLE_LIJMHDLPAMF
	{
	public:
		::UnityEngine::Transform* NCJHLGEHGLC; // 0x78
		::UnityEngine::Transform* KCAELMDGNNH; // 0x80
		::UnityEngine::Transform* EGKELMHHEPH; // 0x88
		::System::Single EIBGEGPABFK; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_NDEMGEPDEEE_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHPIGIAOLE_NDEMGEPDEEE_CLEAR_OFFSET))(this);
		}

	};
