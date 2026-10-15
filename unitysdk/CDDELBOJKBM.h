#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDCDKHALPDP;
class LAECFLNNOFH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CDDELBOJKBM_CTOR_OFFSET UNITYSDK_OFFSET(0xC75FE10)
#define CDDELBOJKBM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC75FE80)

inline static constexpr unsigned int CDDELBOJKBM_TypeDefinitionIndex = 77314;

	class CDDELBOJKBM : public ::System::Object
	{
	public:
		::DDCDKHALPDP* PDENFEFCAGN; // 0x10
		::LAECFLNNOFH* FKINCGODJEP; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* NFCHMOBJPCI; // 0x20
		::System::Void _ctor(::LAECFLNNOFH* a1, ::DDCDKHALPDP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LAECFLNNOFH*, ::DDCDKHALPDP*))((::PBYTE)hIl2Cpp + CDDELBOJKBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDELBOJKBM_EXECUTE_OFFSET))(this);
		}

	};
