#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKAHAIEPHJP;
namespace System { class String; }

#define LLNDKKGHJGJ_CIMAKCHKKGJ_OFFSET UNITYSDK_OFFSET(0xB774AB0)
#define LLNDKKGHJGJ_IBEAFHOAHEJ_OFFSET UNITYSDK_OFFSET(0xB774D90)

inline static constexpr unsigned int LLNDKKGHJGJ_TypeDefinitionIndex = 68945;

	class LLNDKKGHJGJ : public ::System::Object
	{
	public:
		static ::FKAHAIEPHJP* CIMAKCHKKGJ(::System::Single a1)
		{
			return ((::FKAHAIEPHJP*(*)(::System::Single))((::PBYTE)hIl2Cpp + LLNDKKGHJGJ_CIMAKCHKKGJ_OFFSET))(a1);
		}

		static ::FKAHAIEPHJP* IBEAFHOAHEJ(::System::String* a1, ::System::Single a2)
		{
			return ((::FKAHAIEPHJP*(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + LLNDKKGHJGJ_IBEAFHOAHEJ_OFFSET))(a1, a2);
		}

	};
