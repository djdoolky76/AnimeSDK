#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define NHGLMNFDNCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C79A4B0)
#define NHGLMNFDNCN_GHFNNDPKDMK_OFFSET UNITYSDK_OFFSET(0x1C79A4C0)
#define NHGLMNFDNCN_KAGICIAJEEA_OFFSET UNITYSDK_OFFSET(0x1C79A550)

inline static constexpr unsigned int NHGLMNFDNCN_TypeDefinitionIndex = 37114;

	class NHGLMNFDNCN : public ::System::Object
	{
	public:
		::System::Action* PEIHJAEIGHK; // 0x10
		::System::Boolean PIPLLENMLIM; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single KIEANPJINOP; // 0x1C
		::System::Void _ctor(::System::Action* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + NHGLMNFDNCN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void GHFNNDPKDMK(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + NHGLMNFDNCN_GHFNNDPKDMK_OFFSET))(this, a1, a2);
		}

		::System::Boolean KAGICIAJEEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGLMNFDNCN_KAGICIAJEEA_OFFSET))(this);
		}

	};
