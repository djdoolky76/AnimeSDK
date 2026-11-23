#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BD3A9F619D176EFE.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define F60EF2F78E15D4A6_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x1E97260)
#define F60EF2F78E15D4A6_BE45898387226EEC_OFFSET UNITYSDK_OFFSET(0x1678550)
#define F60EF2F78E15D4A6_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x1E97190)
#define F60EF2F78E15D4A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1678540)

inline static constexpr unsigned int F60EF2F78E15D4A6_TypeDefinitionIndex = 6720;

class F60EF2F78E15D4A6 : public ::BD3A9F619D176EFE
{
public:
	::UnityEngine::Vector3 EE8B505B9D2B1840; // 0x18
	::UnityEngine::Quaternion A0FE9BD88AEBF8D9; // 0x24

	::System::Boolean FC3208D7B8C7EE04(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + F60EF2F78E15D4A6_FC3208D7B8C7EE04_OFFSET))(this, A86A90C31A146E9C);
	}

	::System::Int32 B996A70283B60FAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + F60EF2F78E15D4A6_B996A70283B60FAC_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F60EF2F78E15D4A6__CTOR_OFFSET))(this);
	}

	::System::Boolean BE45898387226EEC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F60EF2F78E15D4A6_BE45898387226EEC_OFFSET))(this);
	}
};
