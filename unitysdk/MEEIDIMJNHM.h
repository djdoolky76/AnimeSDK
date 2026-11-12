#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"
class LFKFJKMGOGH;
class OLIEFEDKFJG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MEEIDIMJNHM_BEHEPIJNLIC_OFFSET UNITYSDK_OFFSET(0xC16F360)
#define MEEIDIMJNHM_CTOR_OFFSET UNITYSDK_OFFSET(0xC16F490)
#define MEEIDIMJNHM_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xC16F180)
#define MEEIDIMJNHM_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0xC16F220)

inline static constexpr unsigned int MEEIDIMJNHM_TypeDefinitionIndex = 54914;

	class MEEIDIMJNHM : public ::GJPFGOGOLBI
	{
	public:
		::OLIEFEDKFJG* IEGBIPMGBPA; // 0x18
		::System::Collections::Generic::List_1<::LFKFJKMGOGH*>* LOOCAOKEODD; // 0x20
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
