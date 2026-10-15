#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"
class LFKFJKMGOGH;
class OLIEFEDKFJG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MEEIDIMJNHM_BEHEPIJNLIC_OFFSET UNITYSDK_OFFSET(0xB8B77E0)
#define MEEIDIMJNHM_CTOR_OFFSET UNITYSDK_OFFSET(0xB8B7910)
#define MEEIDIMJNHM_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xB8B7600)
#define MEEIDIMJNHM_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0xB8B76A0)

inline static constexpr unsigned int MEEIDIMJNHM_TypeDefinitionIndex = 53750;

	class MEEIDIMJNHM : public ::GJPFGOGOLBI
	{
	public:
		::System::Collections::Generic::List_1<::LFKFJKMGOGH*>* LOOCAOKEODD; // 0x18
		::OLIEFEDKFJG* IEGBIPMGBPA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEIDIMJNHM_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEIDIMJNHM_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEIDIMJNHM_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void BEHEPIJNLIC(::LFKFJKMGOGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFKFJKMGOGH*))((::PBYTE)hIl2Cpp + MEEIDIMJNHM_BEHEPIJNLIC_OFFSET))(this, a1);
		}

	};
