#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBENDELLLAO;

#define LONAFLHKHBE_ECKFOPLHKEP_OFFSET UNITYSDK_OFFSET(0x16C6B660)
#define LONAFLHKHBE_MFFBAPOOCKJ_OFFSET UNITYSDK_OFFSET(0x16C6B590)
#define LONAFLHKHBE_OAOOBACHAAD_OFFSET UNITYSDK_OFFSET(0x16C6B4D0)
#define LONAFLHKHBE__CTOR_OFFSET UNITYSDK_OFFSET(0x16C6B580)

inline static constexpr unsigned int LONAFLHKHBE_TypeDefinitionIndex = 73034;

class LONAFLHKHBE : public ::System::Object
{
public:
	::IBENDELLLAO* DNJGLFLBIBL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LONAFLHKHBE__CTOR_OFFSET))(this);
	}

	::System::Void OAOOBACHAAD(::IBENDELLLAO* LMJBDKEEOHJ, ::System::Boolean BIHPGJIELBJ)
	{
		return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*, ::System::Boolean))((::PBYTE)hIl2Cpp + LONAFLHKHBE_OAOOBACHAAD_OFFSET))(this, LMJBDKEEOHJ, BIHPGJIELBJ);
	}

	::System::Void MFFBAPOOCKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LONAFLHKHBE_MFFBAPOOCKJ_OFFSET))(this);
	}

	::System::Void ECKFOPLHKEP(::System::Int32 HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LONAFLHKHBE_ECKFOPLHKEP_OFFSET))(this, HFMHOELKCAJ);
	}
};
