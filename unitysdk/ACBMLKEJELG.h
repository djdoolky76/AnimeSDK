#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHMGGIHEHJE;
class JIJBCGDANLJ;
class KPDKCEAFBHI;
class LKNHOMGIMDE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ACBMLKEJELG_CTOR_OFFSET UNITYSDK_OFFSET(0xB1151C0)
#define ACBMLKEJELG_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB115270)

inline static constexpr unsigned int ACBMLKEJELG_TypeDefinitionIndex = 75928;

	class ACBMLKEJELG : public ::System::Object
	{
	public:
		::JIJBCGDANLJ* EEFMDEHLLFI; // 0x10
		::System::Collections::Generic::List_1<::GHMGGIHEHJE*>* ANKHLHPPJKP; // 0x18
		::System::Collections::Generic::List_1<::LKNHOMGIMDE*>* LKNIHOLPBEP; // 0x20
		::KPDKCEAFBHI* PDENFEFCAGN; // 0x28
		::System::Collections::Generic::List_1<::GHMGGIHEHJE*>* MIOCFEDKPLK; // 0x30
		::System::Void _ctor(::JIJBCGDANLJ* a1, ::KPDKCEAFBHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JIJBCGDANLJ*, ::KPDKCEAFBHI*))((::PBYTE)hIl2Cpp + ACBMLKEJELG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACBMLKEJELG_EXECUTE_OFFSET))(this);
		}

	};
