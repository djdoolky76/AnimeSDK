#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJDCLALCDLJ;
class LPHINGPIEAJ;
class MBJGGCCKIOC;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define KBPCJPHHOPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1A471F60)

inline static constexpr unsigned int KBPCJPHHOPC_TypeDefinitionIndex = 80052;

	class KBPCJPHHOPC : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::AJDCLALCDLJ*>* HPBDECBMLBF; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::AJDCLALCDLJ*>* ODEHJIOOAML; // 0x18
		::LPHINGPIEAJ* EKLOGGLELCG; // 0x20
		::MBJGGCCKIOC* EABKOHGCHFP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPCJPHHOPC_CTOR_OFFSET))(this);
		}

	};
