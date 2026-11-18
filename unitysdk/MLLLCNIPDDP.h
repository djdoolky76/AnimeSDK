#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JEKOHJMBOOI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MLLLCNIPDDP_JCDIDPAEPFF_OFFSET UNITYSDK_OFFSET(0x1406EED0)
#define MLLLCNIPDDP_PBFBICMFFFN_OFFSET UNITYSDK_OFFSET(0x1406EE20)
#define MLLLCNIPDDP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1406ED90)

inline static constexpr unsigned int MLLLCNIPDDP_TypeDefinitionIndex = 68379;

class MLLLCNIPDDP : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::JEKOHJMBOOI*>** StaticGet_IGEHKPLBBHP()
	{
		return (::System::Collections::Generic::List_1<::JEKOHJMBOOI*>**)Il2CppClass::FromTypeDefinitionIndex(MLLLCNIPDDP_TypeDefinitionIndex)->GetStaticField(0x44990);
	}
	static ::System::Int32* StaticGet_PDBKAGDHJGP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MLLLCNIPDDP_TypeDefinitionIndex)->GetStaticField(0xFD90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLLLCNIPDDP__CCTOR_OFFSET))();
	}

	static ::System::Void PBFBICMFFFN(::JEKOHJMBOOI* EPIDDDEJJDE)
	{
		return ((::System::Void(*)(::JEKOHJMBOOI*))((::PBYTE)hIl2Cpp + MLLLCNIPDDP_PBFBICMFFFN_OFFSET))(EPIDDDEJJDE);
	}

	static ::System::Void JCDIDPAEPFF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLLLCNIPDDP_JCDIDPAEPFF_OFFSET))();
	}
};
