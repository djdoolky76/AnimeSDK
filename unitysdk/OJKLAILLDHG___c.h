#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTimelineData; }
namespace System { template <typename T> class Comparison_1; }

#define OJKLAILLDHG___C_CNMBEBOHLGP_OFFSET UNITYSDK_OFFSET(0x172CEA30)
#define OJKLAILLDHG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x172CE9E0)
#define OJKLAILLDHG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x172CEA20)

inline static constexpr unsigned int OJKLAILLDHG___c_TypeDefinitionIndex = 59627;

class OJKLAILLDHG___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::MoleMole::ConfigTimelineData*>** StaticGet___9__3_0()
	{
		return (::System::Comparison_1<::MoleMole::ConfigTimelineData*>**)Il2CppClass::FromTypeDefinitionIndex(OJKLAILLDHG___c_TypeDefinitionIndex)->GetStaticField(0x4FDC0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OJKLAILLDHG___c_TypeDefinitionIndex)->GetStaticField(0x4FDC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJKLAILLDHG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJKLAILLDHG___C__CTOR_OFFSET))(this);
	}

	::System::Int32 CNMBEBOHLGP(::MoleMole::ConfigTimelineData* EIHELBHCLID, ::MoleMole::ConfigTimelineData* NDGKJHLLCIN)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::ConfigTimelineData*, ::MoleMole::ConfigTimelineData*))((::PBYTE)hIl2Cpp + OJKLAILLDHG___C_CNMBEBOHLGP_OFFSET))(this, EIHELBHCLID, NDGKJHLLCIN);
	}
};
