#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDLEIHJGDAP.h"
#include "unitysdk/UnityEngine/NetworkReachability.h"

#define KGGBPDIDJDL_CTOR_OFFSET UNITYSDK_OFFSET(0xBC6EBB0)
#define KGGBPDIDJDL_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xBC6EB00)

inline static constexpr unsigned int KGGBPDIDJDL_TypeDefinitionIndex = 62488;

	class KGGBPDIDJDL : public ::KDLEIHJGDAP
	{
	public:
		::UnityEngine::NetworkReachability MEPFOEEGBEA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGBPDIDJDL_CTOR_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KGGBPDIDJDL_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
