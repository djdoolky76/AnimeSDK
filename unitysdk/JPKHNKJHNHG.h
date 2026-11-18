#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBMEINOEBDJ.h"

class KHLJFPECEGH;
namespace System { class Object; }

#define JPKHNKJHNHG_CELHLLIAIKB_OFFSET UNITYSDK_OFFSET(0x13C44580)
#define JPKHNKJHNHG__CTOR_OFFSET UNITYSDK_OFFSET(0x13C44B10)

inline static constexpr unsigned int JPKHNKJHNHG_TypeDefinitionIndex = 68914;

class JPKHNKJHNHG : public ::MBMEINOEBDJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPKHNKJHNHG__CTOR_OFFSET))(this);
	}

	::KHLJFPECEGH* CELHLLIAIKB(::Il2CppArray<::System::Object*>* INBACCBOBDN)
	{
		return ((::KHLJFPECEGH*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + JPKHNKJHNHG_CELHLLIAIKB_OFFSET))(this, INBACCBOBDN);
	}
};
