#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NINDMGMLIPG__CCTOR_OFFSET UNITYSDK_OFFSET(0x105BC0B0)

inline static constexpr unsigned int NINDMGMLIPG_TypeDefinitionIndex = 56102;

class NINDMGMLIPG : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_GMFPMCAHBHA()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NINDMGMLIPG_TypeDefinitionIndex)->GetStaticField(0x4AF80);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NINDMGMLIPG__CCTOR_OFFSET))();
	}
};
