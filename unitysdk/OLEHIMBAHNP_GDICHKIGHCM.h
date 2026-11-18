#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OLEHIMBAHNP_GDICHKIGHCM_BPJLMJFMAMD_OFFSET UNITYSDK_OFFSET(0x172D2710)
#define OLEHIMBAHNP_GDICHKIGHCM_GIFHMDMPCMA_OFFSET UNITYSDK_OFFSET(0x172D2480)
#define OLEHIMBAHNP_GDICHKIGHCM__CCTOR_OFFSET UNITYSDK_OFFSET(0x172D23E0)

inline static constexpr unsigned int OLEHIMBAHNP_GDICHKIGHCM_TypeDefinitionIndex = 41172;

class OLEHIMBAHNP_GDICHKIGHCM : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::UInt32>** StaticGet_DBHJJNNFPKO()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(OLEHIMBAHNP_GDICHKIGHCM_TypeDefinitionIndex)->GetStaticField(0x4FDD0);
	}
	static ::System::UInt32* StaticGet_MNNFCMNPJLN()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OLEHIMBAHNP_GDICHKIGHCM_TypeDefinitionIndex)->GetStaticField(0x12FF0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLEHIMBAHNP_GDICHKIGHCM__CCTOR_OFFSET))();
	}

	static ::System::UInt32 GIFHMDMPCMA(::System::Type* OBNIAHNMHPF)
	{
		return ((::System::UInt32(*)(::System::Type*))((::PBYTE)hIl2Cpp + OLEHIMBAHNP_GDICHKIGHCM_GIFHMDMPCMA_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::UInt32 BPJLMJFMAMD()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + OLEHIMBAHNP_GDICHKIGHCM_BPJLMJFMAMD_OFFSET))();
	}
};
