#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBMEINOEBDJ.h"

class KHLJFPECEGH;
namespace System { class Object; }

#define ANIGDDAGAKJ_CELHLLIAIKB_OFFSET UNITYSDK_OFFSET(0x143BA8D0)
#define ANIGDDAGAKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x143BAE20)

inline static constexpr unsigned int ANIGDDAGAKJ_TypeDefinitionIndex = 82241;

class ANIGDDAGAKJ : public ::MBMEINOEBDJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIGDDAGAKJ__CTOR_OFFSET))(this);
	}

	::KHLJFPECEGH* CELHLLIAIKB(::Il2CppArray<::System::Object*>* INBACCBOBDN)
	{
		return ((::KHLJFPECEGH*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + ANIGDDAGAKJ_CELHLLIAIKB_OFFSET))(this, INBACCBOBDN);
	}
};
