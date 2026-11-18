#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOCLHIFFIHK.h"
#include "unitysdk/System/Object.h"

class IFFEPPNMCNK;
class OLLKICIGJGG;

#define AFKKMFHFDGN_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x1E5DCAA0)
#define AFKKMFHFDGN_KCNNFFAJFBL_OFFSET UNITYSDK_OFFSET(0x1E5DCDE0)
#define AFKKMFHFDGN_KMOLFGICKLF_OFFSET UNITYSDK_OFFSET(0x1E5DD180)
#define AFKKMFHFDGN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5DCA30)

inline static constexpr unsigned int AFKKMFHFDGN_TypeDefinitionIndex = 34085;

class AFKKMFHFDGN : public ::System::Object
{
public:
	static ::Il2CppArray<::OLLKICIGJGG*>** StaticGet_JDFAMFNKKFA()
	{
		return (::Il2CppArray<::OLLKICIGJGG*>**)Il2CppClass::FromTypeDefinitionIndex(AFKKMFHFDGN_TypeDefinitionIndex)->GetStaticField(0x2A040);
	}
	static ::Il2CppArray<::IFFEPPNMCNK*>** StaticGet_GHDGJMCKJNN()
	{
		return (::Il2CppArray<::IFFEPPNMCNK*>**)Il2CppClass::FromTypeDefinitionIndex(AFKKMFHFDGN_TypeDefinitionIndex)->GetStaticField(0x2A048);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFKKMFHFDGN__CCTOR_OFFSET))();
	}

	static ::System::Void JMDEKPONKMF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFKKMFHFDGN_JMDEKPONKMF_OFFSET))();
	}

	static ::IFFEPPNMCNK* KCNNFFAJFBL(::FOCLHIFFIHK IMLLDOHDCNC)
	{
		return ((::IFFEPPNMCNK*(*)(::FOCLHIFFIHK))((::PBYTE)hIl2Cpp + AFKKMFHFDGN_KCNNFFAJFBL_OFFSET))(IMLLDOHDCNC);
	}

	static ::IFFEPPNMCNK* KMOLFGICKLF(::FOCLHIFFIHK IMLLDOHDCNC)
	{
		return ((::IFFEPPNMCNK*(*)(::FOCLHIFFIHK))((::PBYTE)hIl2Cpp + AFKKMFHFDGN_KMOLFGICKLF_OFFSET))(IMLLDOHDCNC);
	}
};
