#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AOLFFJBIPLD_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8A5A60)
#define AOLFFJBIPLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8A5AB0)

inline static constexpr unsigned int AOLFFJBIPLD_TypeDefinitionIndex = 42115;

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
