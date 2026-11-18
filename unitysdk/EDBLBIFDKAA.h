#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class APDCOGDCIDK;
class DKNGLEPJEHC;
class KHHCNFAICGG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EDBLBIFDKAA_ABAGELMAAID_OFFSET UNITYSDK_OFFSET(0x16991D20)
#define EDBLBIFDKAA_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x16991EC0)
#define EDBLBIFDKAA_IHIJPLKEIAD_OFFSET UNITYSDK_OFFSET(0x16991D80)
#define EDBLBIFDKAA_JEIEDEKBDKB_OFFSET UNITYSDK_OFFSET(0x16991CC0)
#define EDBLBIFDKAA_LCPCPIDIMIO_OFFSET UNITYSDK_OFFSET(0x16991DE0)
#define EDBLBIFDKAA_POCMJHEFOHL_OFFSET UNITYSDK_OFFSET(0x16991E80)
#define EDBLBIFDKAA__CTOR_OFFSET UNITYSDK_OFFSET(0x16991B20)

inline static constexpr unsigned int EDBLBIFDKAA_TypeDefinitionIndex = 60921;

class EDBLBIFDKAA : public ::System::Object
{
public:
	::APDCOGDCIDK* DFMKILICPFB; // 0x10
	::System::Collections::Generic::List_1<::DKNGLEPJEHC*>* EHMJJANBCFA; // 0x18
	::System::Int32 AOCOIDIMLIH; // 0x20

	::System::Void _ctor(::System::Int32 AOCOIDIMLIH, ::System::Collections::Generic::List_1<::KHHCNFAICGG*>* CHKIMPBDCKJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::KHHCNFAICGG*>*))((::PBYTE)hIl2Cpp + EDBLBIFDKAA__CTOR_OFFSET))(this, AOCOIDIMLIH, CHKIMPBDCKJ);
	}

	::System::Boolean JEIEDEKBDKB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBLBIFDKAA_JEIEDEKBDKB_OFFSET))(this);
	}

	::System::Boolean ABAGELMAAID()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBLBIFDKAA_ABAGELMAAID_OFFSET))(this);
	}

	::System::Boolean IHIJPLKEIAD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBLBIFDKAA_IHIJPLKEIAD_OFFSET))(this);
	}

	::System::String* LCPCPIDIMIO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBLBIFDKAA_LCPCPIDIMIO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::DKNGLEPJEHC*>* POCMJHEFOHL()
	{
		return ((::System::Collections::Generic::List_1<::DKNGLEPJEHC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBLBIFDKAA_POCMJHEFOHL_OFFSET))(this);
	}

	::APDCOGDCIDK* COPIDBEMEIE()
	{
		return ((::APDCOGDCIDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBLBIFDKAA_COPIDBEMEIE_OFFSET))(this);
	}
};
