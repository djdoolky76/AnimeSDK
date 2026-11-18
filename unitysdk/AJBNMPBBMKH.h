#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JCADHFOKIHK;
namespace MoleMole::Config { class DynamicString; }
namespace System { class String; }

#define AJBNMPBBMKH_BIDOJDNAAKD_1_OFFSET UNITYSDK_OFFSET(0x17CD50A0)
#define AJBNMPBBMKH_BIDOJDNAAKD_OFFSET UNITYSDK_OFFSET(0x17CD5150)
#define AJBNMPBBMKH_FHONMHALIHJ_OFFSET UNITYSDK_OFFSET(0x17CD4EB0)
#define AJBNMPBBMKH_HBHOJKMEAKD_OFFSET UNITYSDK_OFFSET(0x17CD5200)
#define AJBNMPBBMKH_KOHCOGIOIEO_OFFSET UNITYSDK_OFFSET(0x17CD4E10)
#define AJBNMPBBMKH_MHMIGDBBJBM_OFFSET UNITYSDK_OFFSET(0x17CBD7E0)

inline static constexpr unsigned int AJBNMPBBMKH_TypeDefinitionIndex = 65409;

class AJBNMPBBMKH : public ::System::Object
{
public:
	static ::System::String* KOHCOGIOIEO(::System::String* MCOHLHMKLIP)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + AJBNMPBBMKH_KOHCOGIOIEO_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::String* FHONMHALIHJ(::System::String* MCOHLHMKLIP)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + AJBNMPBBMKH_FHONMHALIHJ_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::String* BIDOJDNAAKD(::System::String* MCOHLHMKLIP, ::Il2CppArray<::System::Object*>* KOIBHLHLMFC)
	{
		return ((::System::String*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + AJBNMPBBMKH_BIDOJDNAAKD_OFFSET))(MCOHLHMKLIP, KOIBHLHLMFC);
	}

	static ::System::Int32 MHMIGDBBJBM(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + AJBNMPBBMKH_MHMIGDBBJBM_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::String* BIDOJDNAAKD_1(::System::String* MCOHLHMKLIP)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + AJBNMPBBMKH_BIDOJDNAAKD_1_OFFSET))(MCOHLHMKLIP);
	}

	static ::System::String* HBHOJKMEAKD(::MoleMole::Config::DynamicString* GIAHKBMGICM, ::JCADHFOKIHK* KADBFNFHENH)
	{
		return ((::System::String*(*)(::MoleMole::Config::DynamicString*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + AJBNMPBBMKH_HBHOJKMEAKD_OFFSET))(GIAHKBMGICM, KADBFNFHENH);
	}
};
