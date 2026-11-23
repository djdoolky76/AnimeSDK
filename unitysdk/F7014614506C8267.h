#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBA8E997ECB15CDC.h"

#define F7014614506C8267__CCTOR_OFFSET UNITYSDK_OFFSET(0x3E797C0)
#define F7014614506C8267__CTOR_OFFSET UNITYSDK_OFFSET(0x3E79910)

inline static constexpr unsigned int F7014614506C8267_TypeDefinitionIndex = 14946;

class F7014614506C8267 : public ::FBA8E997ECB15CDC
{
public:
	static ::F7014614506C8267** StaticGet_EAAA111EF7BEF3DC()
	{
		return (::F7014614506C8267**)Il2CppClass::FromTypeDefinitionIndex(F7014614506C8267_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7014614506C8267__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F7014614506C8267__CCTOR_OFFSET))();
	}
};
