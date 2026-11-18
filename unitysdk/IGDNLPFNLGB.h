#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IGDNLPFNLGB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A39DBA0)

inline static constexpr unsigned int IGDNLPFNLGB_TypeDefinitionIndex = 45317;

class IGDNLPFNLGB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_LBIGAGLBFAB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(IGDNLPFNLGB_TypeDefinitionIndex)->GetStaticField(0x4BBB0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGDNLPFNLGB__CCTOR_OFFSET))();
	}
};
