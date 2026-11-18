#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOAAKHNGJJI.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class Object; }

#define EEDBDOIOFAG_DPFAGBLCDDB_OFFSET UNITYSDK_OFFSET(0x7FE7FD0)
#define EEDBDOIOFAG_IJJBDBNEHOP_OFFSET UNITYSDK_OFFSET(0x7FE8710)
#define EEDBDOIOFAG_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x11A67F20)
#define EEDBDOIOFAG_NLOHEGHPJCG_OFFSET UNITYSDK_OFFSET(0x11A67FC0)
#define EEDBDOIOFAG_PKAFJHDJEDO_OFFSET UNITYSDK_OFFSET(0x7FE8180)
#define EEDBDOIOFAG__CTOR_OFFSET UNITYSDK_OFFSET(0x7FE7B30)

inline static constexpr unsigned int EEDBDOIOFAG_TypeDefinitionIndex = 40166;

class EEDBDOIOFAG : public ::HOAAKHNGJJI
{
public:
	::System::Object* PKILLCHKEAG; // 0x20
	::System::Object* PGJFILEPMLM; // 0x28
	::System::Object* DDMIMEDEPIF; // 0x30
	::System::Object* LKEMHPIBNNM; // 0x38
	::System::Object* HCHACLMFDIA; // 0x40
	::System::Object* HADONIPIBBL; // 0x48
	::System::Object* JFEMJFAKGBO; // 0x50
	::UnityEngine::Quaternion IPMAJJENDPJ; // 0x58
	::System::Boolean EOKNPJMIIBN; // 0x68

	::System::Void _ctor(::System::Boolean NNMFMPBGFFB, ::System::Object* GDDIMKGELFA, ::System::Object* LIKDHOGCKFK, ::System::Object* DLNHBFCIICO, ::System::Object* BCNLKDAOCNN, ::System::Object* EENAFNNKOCJ, ::System::Object* GHPIPNDHJAC, ::System::Object* DJBEEGBINOB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + EEDBDOIOFAG__CTOR_OFFSET))(this, NNMFMPBGFFB, GDDIMKGELFA, LIKDHOGCKFK, DLNHBFCIICO, BCNLKDAOCNN, EENAFNNKOCJ, GHPIPNDHJAC, DJBEEGBINOB);
	}

	::MoleMole::UICameraAtom PKAFJHDJEDO(::System::Single IMLLDOHDCNC, ::System::Single PBCAAADNEPK, ::MoleMole::UICameraAtom AIGOOKNCCNH)
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID, ::System::Single, ::System::Single, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + EEDBDOIOFAG_PKAFJHDJEDO_OFFSET))(this, IMLLDOHDCNC, PBCAAADNEPK, AIGOOKNCCNH);
	}

	::System::Object* DPFAGBLCDDB(::System::Object* ANPNLABHOPB)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EEDBDOIOFAG_DPFAGBLCDDB_OFFSET))(this, ANPNLABHOPB);
	}

	::System::ValueTuple_2<::System::Single, ::System::Single> IJJBDBNEHOP(::System::Object* DKNPBAKDIGE, ::System::Single IMLLDOHDCNC, ::System::Single PBCAAADNEPK)
	{
		return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::System::Object*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EEDBDOIOFAG_IJJBDBNEHOP_OFFSET))(this, DKNPBAKDIGE, IMLLDOHDCNC, PBCAAADNEPK);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EEDBDOIOFAG_JDAPDDEOCEA_OFFSET))(this);
	}

	::System::Single NLOHEGHPJCG(::System::Single FFDKPJBLCKN)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EEDBDOIOFAG_NLOHEGHPJCG_OFFSET))(this, FFDKPJBLCKN);
	}
};
