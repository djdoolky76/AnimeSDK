#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAONMIMBPBP.h"
#include "unitysdk/System/Object.h"

#define MGMALOKBGPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DE3E30)

inline static constexpr unsigned int MGMALOKBGPE_TypeDefinitionIndex = 66491;

class MGMALOKBGPE : public ::System::Object
{
public:
	static ::Il2CppArray<::FAONMIMBPBP>** StaticGet_MAEFKBMHEKC()
	{
		return (::Il2CppArray<::FAONMIMBPBP>**)Il2CppClass::FromTypeDefinitionIndex(MGMALOKBGPE_TypeDefinitionIndex)->GetStaticField(0x51640);
	}
	static ::System::Int32* StaticGet_OMLHAONHPEE()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MGMALOKBGPE_TypeDefinitionIndex)->GetStaticField(0x134D0);
	}
	// static const ::System::Int32 DLCNNAHOOFD = 0x100; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGMALOKBGPE__CCTOR_OFFSET))();
	}
};
