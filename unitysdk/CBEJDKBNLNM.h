#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NHNONGPAFDK.h"

class HJMOFKBMAPE;
class PLNHDMKGFBC;

#define CBEJDKBNLNM_DEFFLGMOGAI_OFFSET UNITYSDK_OFFSET(0x1685FE80)
#define CBEJDKBNLNM_FIJOOHBFICJ_OFFSET UNITYSDK_OFFSET(0x1685FE30)
#define CBEJDKBNLNM_IPCLHLGLNNH_OFFSET UNITYSDK_OFFSET(0x1685FFB0)

inline static constexpr unsigned int CBEJDKBNLNM_TypeDefinitionIndex = 70669;

class CBEJDKBNLNM : public ::System::Object
{
public:
	static ::HJMOFKBMAPE** StaticGet_ICCBOGAEDBG()
	{
		return (::HJMOFKBMAPE**)Il2CppClass::FromTypeDefinitionIndex(CBEJDKBNLNM_TypeDefinitionIndex)->GetStaticField(0x51230);
	}

	static ::System::Void FIJOOHBFICJ(::HJMOFKBMAPE* CBNHDANJOFB)
	{
		return ((::System::Void(*)(::HJMOFKBMAPE*))((::PBYTE)hIl2Cpp + CBEJDKBNLNM_FIJOOHBFICJ_OFFSET))(CBNHDANJOFB);
	}

	static ::NHNONGPAFDK DEFFLGMOGAI(::System::Int32 GJOJKODONDC)
	{
		return ((::NHNONGPAFDK(*)(::System::Int32))((::PBYTE)hIl2Cpp + CBEJDKBNLNM_DEFFLGMOGAI_OFFSET))(GJOJKODONDC);
	}

	static ::PLNHDMKGFBC* IPCLHLGLNNH(::System::Int32 GJOJKODONDC)
	{
		return ((::PLNHDMKGFBC*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CBEJDKBNLNM_IPCLHLGLNNH_OFFSET))(GJOJKODONDC);
	}
};
