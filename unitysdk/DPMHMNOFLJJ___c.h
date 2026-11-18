#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EBEAAFHPBJG;
class MGDBHPOLPJG;
namespace System { template <typename T1, typename T2> class Action_2; }

#define DPMHMNOFLJJ___C_HCOLBFOGKFL_OFFSET UNITYSDK_OFFSET(0xF9AA070)
#define DPMHMNOFLJJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF9AA020)
#define DPMHMNOFLJJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF9AA060)

inline static constexpr unsigned int DPMHMNOFLJJ___c_TypeDefinitionIndex = 42886;

class DPMHMNOFLJJ___c : public ::System::Object
{
public:
	static ::System::Action_2<::EBEAAFHPBJG*, ::MGDBHPOLPJG*>** StaticGet___9__2_0()
	{
		return (::System::Action_2<::EBEAAFHPBJG*, ::MGDBHPOLPJG*>**)Il2CppClass::FromTypeDefinitionIndex(DPMHMNOFLJJ___c_TypeDefinitionIndex)->GetStaticField(0x43280);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DPMHMNOFLJJ___c_TypeDefinitionIndex)->GetStaticField(0x43288);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPMHMNOFLJJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMHMNOFLJJ___C__CTOR_OFFSET))(this);
	}

	::System::Void HCOLBFOGKFL(::EBEAAFHPBJG* GBELIHABEDH, ::MGDBHPOLPJG* GDOICJMILFH)
	{
		return ((::System::Void(*)(::PVOID, ::EBEAAFHPBJG*, ::MGDBHPOLPJG*))((::PBYTE)hIl2Cpp + DPMHMNOFLJJ___C_HCOLBFOGKFL_OFFSET))(this, GBELIHABEDH, GDOICJMILFH);
	}
};
