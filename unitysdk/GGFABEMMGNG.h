#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLHGCJPGNGB;
class LGKNPHGNNDI;
class MJDKJEIAABG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GGFABEMMGNG_AKJABINEGDJ_OFFSET UNITYSDK_OFFSET(0x15A036F0)
#define GGFABEMMGNG_CTOR_OFFSET UNITYSDK_OFFSET(0x15A03DE0)
#define GGFABEMMGNG_JHLOPJHGJFO_OFFSET UNITYSDK_OFFSET(0x15A03690)

inline static constexpr unsigned int GGFABEMMGNG_TypeDefinitionIndex = 81946;

	class GGFABEMMGNG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGFABEMMGNG_CTOR_OFFSET))(this);
		}

		::System::Boolean JHLOPJHGJFO(::MJDKJEIAABG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MJDKJEIAABG*))((::PBYTE)hIl2Cpp + GGFABEMMGNG_JHLOPJHGJFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::LGKNPHGNNDI*>* AKJABINEGDJ(::MJDKJEIAABG* a1, ::GLHGCJPGNGB* a2)
		{
			return ((::System::Collections::Generic::List_1<::LGKNPHGNNDI*>*(*)(::PVOID, ::MJDKJEIAABG*, ::GLHGCJPGNGB*))((::PBYTE)hIl2Cpp + GGFABEMMGNG_AKJABINEGDJ_OFFSET))(this, a1, a2);
		}

	};
