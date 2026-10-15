#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GDHCJAOOKDB;
class HGGENLBDAPM;

#define JDNEAIDOOAN_DKNIKHENHFG_CTOR_OFFSET UNITYSDK_OFFSET(0x2E851A0)

inline static constexpr unsigned int JDNEAIDOOAN_DKNIKHENHFG_TypeDefinitionIndex = 48941;

	struct alignas(8) JDNEAIDOOAN_DKNIKHENHFG
	{
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x10
		::System::Byte _padding0[0x4];
		::HGGENLBDAPM* MNCDEEJHNPJ; // 0x20
		::System::Boolean OBHFGGMPPBI; // 0x28
		::System::Byte _padding1[0x7];
		::GDHCJAOOKDB* OLNAOJPNNGJ; // 0x30
		::System::Void _ctor(::UnityEngine::Vector3 a1, ::HGGENLBDAPM* a2, ::System::Boolean a3, ::GDHCJAOOKDB* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::HGGENLBDAPM*, ::System::Boolean, ::GDHCJAOOKDB*))((::PBYTE)hIl2Cpp + JDNEAIDOOAN_DKNIKHENHFG_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

	};
