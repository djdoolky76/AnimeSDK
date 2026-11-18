#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LHLDPHDJLNL;

#define LNDDPNGIGJE_EILHANNLKFD_OFFSET UNITYSDK_OFFSET(0x18510A60)
#define LNDDPNGIGJE_EODBBODDHIL_OFFSET UNITYSDK_OFFSET(0x18510A70)
#define LNDDPNGIGJE_FNNAFIJHAMM_OFFSET UNITYSDK_OFFSET(0x18510A10)
#define LNDDPNGIGJE__CTOR_OFFSET UNITYSDK_OFFSET(0x18510A00)

inline static constexpr unsigned int LNDDPNGIGJE_TypeDefinitionIndex = 92324;

class LNDDPNGIGJE : public ::System::Object
{
public:
	static ::LHLDPHDJLNL** StaticGet__NHKFGJHNPGL_k__BackingField()
	{
		return (::LHLDPHDJLNL**)Il2CppClass::FromTypeDefinitionIndex(LNDDPNGIGJE_TypeDefinitionIndex)->GetStaticField(0x3D280);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDDPNGIGJE__CTOR_OFFSET))(this);
	}

	static ::System::Void FNNAFIJHAMM()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNDDPNGIGJE_FNNAFIJHAMM_OFFSET))();
	}

	static ::System::Void EILHANNLKFD(::LHLDPHDJLNL* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::LHLDPHDJLNL*))((::PBYTE)hIl2Cpp + LNDDPNGIGJE_EILHANNLKFD_OFFSET))(EGEGIMGMJHN);
	}

	static ::LHLDPHDJLNL* EODBBODDHIL()
	{
		return ((::LHLDPHDJLNL*(*)())((::PBYTE)hIl2Cpp + LNDDPNGIGJE_EODBBODDHIL_OFFSET))();
	}
};
