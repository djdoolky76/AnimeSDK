#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E7D5E0FD8E85B2BA.h"

namespace System { class String; }

#define F7711707E7FAD795_AD2DDDADA6A88C27_OFFSET UNITYSDK_OFFSET(0x1EF3530)
#define F7711707E7FAD795_EAE41585CEDA7352_OFFSET UNITYSDK_OFFSET(0x1EF3620)
#define F7711707E7FAD795_ED60801BD13C377C_OFFSET UNITYSDK_OFFSET(0x1EF34E0)
#define F7711707E7FAD795_F9A88469D2B68324_OFFSET UNITYSDK_OFFSET(0x1EF3580)
#define F7711707E7FAD795__CTOR_OFFSET UNITYSDK_OFFSET(0x1655F80)

inline static constexpr unsigned int F7711707E7FAD795_TypeDefinitionIndex = 7409;

class F7711707E7FAD795 : public ::E7D5E0FD8E85B2BA
{
public:
	::System::Void F9A88469D2B68324()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7711707E7FAD795_F9A88469D2B68324_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7711707E7FAD795__CTOR_OFFSET))(this);
	}

	::System::Boolean ED60801BD13C377C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F7711707E7FAD795_ED60801BD13C377C_OFFSET))(this);
	}

	::System::Void AD2DDDADA6A88C27()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7711707E7FAD795_AD2DDDADA6A88C27_OFFSET))(this);
	}

	::System::String* EAE41585CEDA7352()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F7711707E7FAD795_EAE41585CEDA7352_OFFSET))(this);
	}
};
