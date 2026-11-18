#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PEKFINEDHHC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CFKJILEMNJH_CAJBFFFNLGJ_OFFSET UNITYSDK_OFFSET(0x159BFAC0)
#define CFKJILEMNJH_DKCCELBNBLM_OFFSET UNITYSDK_OFFSET(0x159BFE00)
#define CFKJILEMNJH_NPMLCEBKFJM_OFFSET UNITYSDK_OFFSET(0x159C0100)
#define CFKJILEMNJH_PLJOGPIBEIA_OFFSET UNITYSDK_OFFSET(0x159BFB60)
#define CFKJILEMNJH__CTOR_OFFSET UNITYSDK_OFFSET(0x159BFA40)

inline static constexpr unsigned int CFKJILEMNJH_TypeDefinitionIndex = 89757;

class CFKJILEMNJH : public ::System::Object
{
public:
	::System::String* OKLLBNDINPE; // 0x10
	::System::Collections::Generic::Stack_1<::PEKFINEDHHC*>* BBGGFOPDICP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFKJILEMNJH__CTOR_OFFSET))(this);
	}

	::System::UInt32 CAJBFFFNLGJ()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFKJILEMNJH_CAJBFFFNLGJ_OFFSET))(this);
	}

	::System::Void PLJOGPIBEIA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFKJILEMNJH_PLJOGPIBEIA_OFFSET))(this);
	}

	::System::Void DKCCELBNBLM(::System::String* AJHDGHDDDGB, ::System::String* FPDEPEABBGG)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CFKJILEMNJH_DKCCELBNBLM_OFFSET))(this, AJHDGHDDDGB, FPDEPEABBGG);
	}

	::System::Boolean NPMLCEBKFJM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFKJILEMNJH_NPMLCEBKFJM_OFFSET))(this);
	}
};
