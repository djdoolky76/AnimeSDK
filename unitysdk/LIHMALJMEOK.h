#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define LIHMALJMEOK_AIILEDHGIJA_OFFSET UNITYSDK_OFFSET(0x14DB0290)
#define LIHMALJMEOK_DFJBBDBHENO_OFFSET UNITYSDK_OFFSET(0x14DB04C0)
#define LIHMALJMEOK_DJDEMJIBIPF_OFFSET UNITYSDK_OFFSET(0x14DB0550)
#define LIHMALJMEOK_JDICLNBPHKL_OFFSET UNITYSDK_OFFSET(0x14DB0100)
#define LIHMALJMEOK_MOKLHPMOOLC_OFFSET UNITYSDK_OFFSET(0x14DB0690)

inline static constexpr unsigned int LIHMALJMEOK_TypeDefinitionIndex = 50201;

class LIHMALJMEOK : public ::System::Object
{
public:
	static ::System::String* JDICLNBPHKL(::System::String* PKJLOKJOFLE, ::System::String* JFLDAALEMGB)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + LIHMALJMEOK_JDICLNBPHKL_OFFSET))(PKJLOKJOFLE, JFLDAALEMGB);
	}

	static ::System::String* AIILEDHGIJA(::System::String* PKJLOKJOFLE, ::System::String* JFLDAALEMGB)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + LIHMALJMEOK_AIILEDHGIJA_OFFSET))(PKJLOKJOFLE, JFLDAALEMGB);
	}

	static ::System::String* DFJBBDBHENO(::System::String* BMLMMPALJEK)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + LIHMALJMEOK_DFJBBDBHENO_OFFSET))(BMLMMPALJEK);
	}

	static ::System::String* DJDEMJIBIPF(::System::String* ODHDGOCMMPO, ::System::String* BMLMMPALJEK, ::System::Boolean KIGHNJKAFBD)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + LIHMALJMEOK_DJDEMJIBIPF_OFFSET))(ODHDGOCMMPO, BMLMMPALJEK, KIGHNJKAFBD);
	}

	static ::System::String* MOKLHPMOOLC(::System::Type* OBNIAHNMHPF)
	{
		return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + LIHMALJMEOK_MOKLHPMOOLC_OFFSET))(OBNIAHNMHPF);
	}
};
