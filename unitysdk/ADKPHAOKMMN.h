#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLHGCJPGNGB;
class LGKNPHGNNDI;
class MJDKJEIAABG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ADKPHAOKMMN_AKJABINEGDJ_OFFSET UNITYSDK_OFFSET(0x182B23C0)
#define ADKPHAOKMMN_CTOR_OFFSET UNITYSDK_OFFSET(0x182B2870)
#define ADKPHAOKMMN_JHLOPJHGJFO_OFFSET UNITYSDK_OFFSET(0x182B2350)

inline static constexpr unsigned int ADKPHAOKMMN_TypeDefinitionIndex = 84717;

	class ADKPHAOKMMN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKPHAOKMMN_CTOR_OFFSET))(this);
		}

		::System::Boolean JHLOPJHGJFO(::MJDKJEIAABG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MJDKJEIAABG*))((::PBYTE)hIl2Cpp + ADKPHAOKMMN_JHLOPJHGJFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::LGKNPHGNNDI*>* AKJABINEGDJ(::MJDKJEIAABG* a1, ::GLHGCJPGNGB* a2)
		{
			return ((::System::Collections::Generic::List_1<::LGKNPHGNNDI*>*(*)(::PVOID, ::MJDKJEIAABG*, ::GLHGCJPGNGB*))((::PBYTE)hIl2Cpp + ADKPHAOKMMN_AKJABINEGDJ_OFFSET))(this, a1, a2);
		}

	};
