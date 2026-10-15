#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define LPPIHKNHFGF_CTOR_OFFSET UNITYSDK_OFFSET(0xB82FE90)

inline static constexpr unsigned int LPPIHKNHFGF_TypeDefinitionIndex = 47142;

	class LPPIHKNHFGF : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Boolean>* AHINDEOHNML; // 0x10
		::Il2CppArray<::System::Single>* NOFKODKFNLM; // 0x18
		::System::Int32 ELLCPPLOAHG; // 0x20
		::System::Single IFEPJHGNCOI; // 0x24
		::UnityEngine::Vector3 FEFNGEJLLMC; // 0x28
		::System::Single CLENBJBNOFB; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPIHKNHFGF_CTOR_OFFSET))(this);
		}

	};
