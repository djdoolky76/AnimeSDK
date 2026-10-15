#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELIEBFOEFNN;
class KNKGKMFEHLB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EBLJHPOGCHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x12CFDBD0)
#define EBLJHPOGCHJ_GET_FRIENDS_OFFSET UNITYSDK_OFFSET(0x12CFDBC0)
#define EBLJHPOGCHJ_NEFIENBJGCJ_OFFSET UNITYSDK_OFFSET(0x12CFD5D0)
#define EBLJHPOGCHJ_OLGOPIBHGLD_OFFSET UNITYSDK_OFFSET(0x12CFDB80)

inline static constexpr unsigned int EBLJHPOGCHJ_TypeDefinitionIndex = 74839;

	class EBLJHPOGCHJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::ELIEBFOEFNN*>* _Friends_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLJHPOGCHJ_CTOR_OFFSET))(this);
		}

		::System::Void NEFIENBJGCJ(::KNKGKMFEHLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNKGKMFEHLB*))((::PBYTE)hIl2Cpp + EBLJHPOGCHJ_NEFIENBJGCJ_OFFSET))(this, a1);
		}

		::System::Void OLGOPIBHGLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLJHPOGCHJ_OLGOPIBHGLD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::ELIEBFOEFNN*>* get_Friends()
		{
			return ((::System::Collections::Generic::List_1<::ELIEBFOEFNN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLJHPOGCHJ_GET_FRIENDS_OFFSET))(this);
		}

	};
