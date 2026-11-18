#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBMEINOEBDJ.h"

class KHLJFPECEGH;
namespace System { class Object; }

#define ILODBICLADF_CELHLLIAIKB_OFFSET UNITYSDK_OFFSET(0x19887E40)
#define ILODBICLADF__CTOR_OFFSET UNITYSDK_OFFSET(0x198882F0)

inline static constexpr unsigned int ILODBICLADF_TypeDefinitionIndex = 80996;

class ILODBICLADF : public ::MBMEINOEBDJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILODBICLADF__CTOR_OFFSET))(this);
	}

	::KHLJFPECEGH* CELHLLIAIKB(::Il2CppArray<::System::Object*>* INBACCBOBDN)
	{
		return ((::KHLJFPECEGH*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + ILODBICLADF_CELHLLIAIKB_OFFSET))(this, INBACCBOBDN);
	}
};
