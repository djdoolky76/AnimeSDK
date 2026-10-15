#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDCDKHALPDP;
class LAECFLNNOFH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CDDELBOJKBM_CTOR_OFFSET UNITYSDK_OFFSET(0xC762DB0)
#define CDDELBOJKBM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC762E20)

inline static constexpr unsigned int CDDELBOJKBM_TypeDefinitionIndex = 77315;

	class CDDELBOJKBM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* NFCHMOBJPCI; // 0x10
		::DDCDKHALPDP* PDENFEFCAGN; // 0x18
		::LAECFLNNOFH* FKINCGODJEP; // 0x20
		::System::Void _ctor(::LAECFLNNOFH* a1, ::DDCDKHALPDP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LAECFLNNOFH*, ::DDCDKHALPDP*))((::PBYTE)hIl2Cpp + CDDELBOJKBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDELBOJKBM_EXECUTE_OFFSET))(this);
		}

	};
