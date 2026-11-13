#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }

#define JLGAPJLCIKO_CMFKGHHJAOB_CTOR_OFFSET UNITYSDK_OFFSET(0x17B4F490)
#define JLGAPJLCIKO_CMFKGHHJAOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x17B506A0)
#define JLGAPJLCIKO_CMFKGHHJAOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17B507B0)

inline static constexpr unsigned int JLGAPJLCIKO_CMFKGHHJAOB_TypeDefinitionIndex = 72660;

	class JLGAPJLCIKO_CMFKGHHJAOB : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 LPHFNPNCLMC; // 0x10
		::System::Void _ctor(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JLGAPJLCIKO_CMFKGHHJAOB_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLGAPJLCIKO_CMFKGHHJAOB_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLGAPJLCIKO_CMFKGHHJAOB_GETHASHCODE_OFFSET))(this);
		}

	};
