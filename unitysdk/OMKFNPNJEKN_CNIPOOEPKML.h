#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define OMKFNPNJEKN_CNIPOOEPKML_CKEMNJODHCH_OFFSET UNITYSDK_OFFSET(0x13A72790)
#define OMKFNPNJEKN_CNIPOOEPKML_HOFIFAEOLBM_OFFSET UNITYSDK_OFFSET(0x13A726F0)
#define OMKFNPNJEKN_CNIPOOEPKML__CTOR_OFFSET UNITYSDK_OFFSET(0x13A726E0)

inline static constexpr unsigned int OMKFNPNJEKN_CNIPOOEPKML_TypeDefinitionIndex = 86988;

class OMKFNPNJEKN_CNIPOOEPKML : public ::System::Object
{
public:
	::HOCDHMEPPEG IBGCCDMAKLL; // 0x10
	::HOCDHMEPPEG NAJFKABGKKF; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKFNPNJEKN_CNIPOOEPKML__CTOR_OFFSET))(this);
	}

	::System::Void HOFIFAEOLBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKFNPNJEKN_CNIPOOEPKML_HOFIFAEOLBM_OFFSET))(this);
	}

	::System::Void CKEMNJODHCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKFNPNJEKN_CNIPOOEPKML_CKEMNJODHCH_OFFSET))(this);
	}
};
