#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AOLFFJBIPLD_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D87B1E0)
#define AOLFFJBIPLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D87B230)

inline static constexpr unsigned int AOLFFJBIPLD_TypeDefinitionIndex = 43090;

	class AOLFFJBIPLD : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* FBEBNLOPIBL; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOLFFJBIPLD_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOLFFJBIPLD_CLEAR_OFFSET))(this);
		}

	};
