#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LimaoNews { class LimaoNewsEmployeeCheckData; }

#define KFBPMGMFPLG___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBC16FE0)
#define KFBPMGMFPLG___C__DISPLAYCLASS5_0__GETEMPLOYEECHECK_B__0_OFFSET UNITYSDK_OFFSET(0xBC1BAB0)

inline static constexpr unsigned int KFBPMGMFPLG___c__DisplayClass5_0_TypeDefinitionIndex = 83094;

	class KFBPMGMFPLG___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 employeeID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBPMGMFPLG___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEmployeeCheck_b__0(::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*))((::PBYTE)hIl2Cpp + KFBPMGMFPLG___C__DISPLAYCLASS5_0__GETEMPLOYEECHECK_B__0_OFFSET))(this, a1);
		}

	};
