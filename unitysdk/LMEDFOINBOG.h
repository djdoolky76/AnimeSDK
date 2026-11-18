#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BJMEDGEANLF;
class ConfFileLoader;
class IAMDFIOOGFK;
class IGINEIPGBAC;
class NewByteBuffer;

#define LMEDFOINBOG_AINIBDOJFPK_OFFSET UNITYSDK_OFFSET(0x1FD0C6C0)
#define LMEDFOINBOG_KGIDDLGCDKI_OFFSET UNITYSDK_OFFSET(0x1FD0CBD0)
#define LMEDFOINBOG_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1FD0CAA0)
#define LMEDFOINBOG_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1FD0C8B0)
#define LMEDFOINBOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD0CAE0)

inline static constexpr unsigned int LMEDFOINBOG_TypeDefinitionIndex = 29142;

class LMEDFOINBOG : public ::System::Object
{
public:
	::IGINEIPGBAC* IPHFJPELEMN; // 0x10
	::BJMEDGEANLF* DIAJDCONCNJ; // 0x18
	::ConfFileLoader* CBDMCJFPDKE; // 0x20
	::NewByteBuffer* HDFJGEOIOIO; // 0x28
	::IAMDFIOOGFK* LDKHKIBEHMF; // 0x30
	::System::Boolean NICLJNOLOFJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEDFOINBOG__CTOR_OFFSET))(this);
	}

	::System::Void AINIBDOJFPK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEDFOINBOG_AINIBDOJFPK_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEDFOINBOG_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEDFOINBOG_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Boolean KGIDDLGCDKI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEDFOINBOG_KGIDDLGCDKI_OFFSET))(this);
	}
};
