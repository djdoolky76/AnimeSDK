#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define LCPEBPNFHBG_GGLEHKODAHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC73750)
#define LCPEBPNFHBG_GGLEHKODAHD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AC74D00)

inline static constexpr unsigned int LCPEBPNFHBG_GGLEHKODAHD_TypeDefinitionIndex = 61949;

	class LCPEBPNFHBG_GGLEHKODAHD : public ::System::Object
	{
	public:
		::System::Action* GPLLONMEDAC; // 0x10
		::System::Void _ctor(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LCPEBPNFHBG_GGLEHKODAHD_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCPEBPNFHBG_GGLEHKODAHD_DISPOSE_OFFSET))(this);
		}

	};
