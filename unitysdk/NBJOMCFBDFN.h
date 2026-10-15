#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOHLGLGOLDP;
class DGEPFHILKPM;
class GGHEGHCAIEH;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NBJOMCFBDFN_CTOR_OFFSET UNITYSDK_OFFSET(0xBAD8D40)
#define NBJOMCFBDFN_JMBMOCBBBEM_OFFSET UNITYSDK_OFFSET(0xBAD8D50)
#define NBJOMCFBDFN_MEAGKJGPAOO_OFFSET UNITYSDK_OFFSET(0xBAD8E00)

	class NBJOMCFBDFN : public ::System::Object
	{
	public:
		::BOHLGLGOLDP* CEFLLELKFOP; // 0x10
		::DGEPFHILKPM* OMLAHOMDEID; // 0x18
		::System::Void _ctor(::DGEPFHILKPM* a1, ::BOHLGLGOLDP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DGEPFHILKPM*, ::BOHLGLGOLDP*))((::PBYTE)hIl2Cpp + NBJOMCFBDFN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* JMBMOCBBBEM()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJOMCFBDFN_JMBMOCBBBEM_OFFSET))(this);
		}

		::GGHEGHCAIEH* MEAGKJGPAOO(::System::UInt32 a1)
		{
			return ((::GGHEGHCAIEH*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBJOMCFBDFN_MEAGKJGPAOO_OFFSET))(this, a1);
		}

	};
