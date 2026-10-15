#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCMJBMIKIFO;
class JOOHEPGEHNK;
class KKGMHJNMOID;
namespace System { class String; }

#define DBALLEOJHEP_CTOR_OFFSET UNITYSDK_OFFSET(0xDFD4EE0)
#define DBALLEOJHEP_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xDFD4EF0)

	class DBALLEOJHEP : public ::System::Object
	{
	public:
		::JOOHEPGEHNK* PONKAEHCHGF; // 0x10
		::System::Void _ctor(::JOOHEPGEHNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOOHEPGEHNK*))((::PBYTE)hIl2Cpp + DBALLEOJHEP_CTOR_OFFSET))(this, a1);
		}

		::System::String* FPKLDCGAJGP(::KKGMHJNMOID* a1, ::JCMJBMIKIFO* a2)
		{
			return ((::System::String*(*)(::PVOID, ::KKGMHJNMOID*, ::JCMJBMIKIFO*))((::PBYTE)hIl2Cpp + DBALLEOJHEP_FPKLDCGAJGP_OFFSET))(this, a1, a2);
		}

	};
