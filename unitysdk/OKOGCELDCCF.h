#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNIDONCOAEE;
class GLHGCJPGNGB;
class LGKNPHGNNDI;
class MJDKJEIAABG;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OKOGCELDCCF_AKJABINEGDJ_OFFSET UNITYSDK_OFFSET(0xBEEB930)
#define OKOGCELDCCF_CTOR_OFFSET UNITYSDK_OFFSET(0xBEEBEB0)
#define OKOGCELDCCF_JHLOPJHGJFO_OFFSET UNITYSDK_OFFSET(0xBEEB8C0)
#define OKOGCELDCCF_JOMFMJCNEKJ_OFFSET UNITYSDK_OFFSET(0xBEEBC30)

inline static constexpr unsigned int OKOGCELDCCF_TypeDefinitionIndex = 81944;

	class OKOGCELDCCF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOGCELDCCF_CTOR_OFFSET))(this);
		}

		::System::Boolean JHLOPJHGJFO(::MJDKJEIAABG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MJDKJEIAABG*))((::PBYTE)hIl2Cpp + OKOGCELDCCF_JHLOPJHGJFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::LGKNPHGNNDI*>* AKJABINEGDJ(::MJDKJEIAABG* a1, ::GLHGCJPGNGB* a2)
		{
			return ((::System::Collections::Generic::List_1<::LGKNPHGNNDI*>*(*)(::PVOID, ::MJDKJEIAABG*, ::GLHGCJPGNGB*))((::PBYTE)hIl2Cpp + OKOGCELDCCF_AKJABINEGDJ_OFFSET))(this, a1, a2);
		}

		static ::DNIDONCOAEE* JOMFMJCNEKJ(::System::Collections::Generic::IReadOnlyList_1<::DNIDONCOAEE*>* a1, ::System::Int32 a2)
		{
			return ((::DNIDONCOAEE*(*)(::System::Collections::Generic::IReadOnlyList_1<::DNIDONCOAEE*>*, ::System::Int32))((::PBYTE)hIl2Cpp + OKOGCELDCCF_JOMFMJCNEKJ_OFFSET))(a1, a2);
		}

	};
