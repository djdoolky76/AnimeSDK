#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class MMCBNPJAFNL;
namespace MoleMole { class MonoRenderHandler; }

#define MECPGCBLFAE_MIMAHBAOJAK_NJGDGNDIAAB_OFFSET UNITYSDK_OFFSET(0x10740C00)
#define MECPGCBLFAE_MIMAHBAOJAK__CTOR_OFFSET UNITYSDK_OFFSET(0x10740BF0)

inline static constexpr unsigned int MECPGCBLFAE_MIMAHBAOJAK_TypeDefinitionIndex = 79171;

class MECPGCBLFAE_MIMAHBAOJAK : public ::System::Object
{
public:
	::MoleMole::MonoRenderHandler* PLJJFDBNAIN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MECPGCBLFAE_MIMAHBAOJAK__CTOR_OFFSET))(this);
	}

	::System::Boolean NJGDGNDIAAB(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MMCBNPJAFNL*> HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::MMCBNPJAFNL*>))((::PBYTE)hIl2Cpp + MECPGCBLFAE_MIMAHBAOJAK_NJGDGNDIAAB_OFFSET))(this, HAAEBCOBKFF);
	}
};
