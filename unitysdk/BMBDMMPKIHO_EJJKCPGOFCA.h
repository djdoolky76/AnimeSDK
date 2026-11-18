#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

class BMBDMMPKIHO;
class FMHDMLBDIJC;

#define BMBDMMPKIHO_EJJKCPGOFCA_CMOLAPFPLEI_OFFSET UNITYSDK_OFFSET(0x1151CEB0)
#define BMBDMMPKIHO_EJJKCPGOFCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1151CEA0)

inline static constexpr unsigned int BMBDMMPKIHO_EJJKCPGOFCA_TypeDefinitionIndex = 65327;

class BMBDMMPKIHO_EJJKCPGOFCA : public ::System::Object
{
public:
	::FMHDMLBDIJC* PADJNMGMGHO; // 0x10
	::BMBDMMPKIHO* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_EJJKCPGOFCA__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::System::Boolean> CMOLAPFPLEI(::System::Object* JNDDJMAHNAI)
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMBDMMPKIHO_EJJKCPGOFCA_CMOLAPFPLEI_OFFSET))(this, JNDDJMAHNAI);
	}
};
