#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTimelineDataExtra; }
namespace System { template <typename T> class Comparison_1; }

#define CCFOOIDLJLI___C_DCDNGGDAPDP_OFFSET UNITYSDK_OFFSET(0x10E31200)
#define CCFOOIDLJLI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E311B0)
#define CCFOOIDLJLI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10E311F0)

inline static constexpr unsigned int CCFOOIDLJLI___c_TypeDefinitionIndex = 67392;

class CCFOOIDLJLI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CCFOOIDLJLI___c_TypeDefinitionIndex)->GetStaticField(0x47C00);
	}
	static ::System::Comparison_1<::MoleMole::ConfigTimelineDataExtra*>** StaticGet___9__4_0()
	{
		return (::System::Comparison_1<::MoleMole::ConfigTimelineDataExtra*>**)Il2CppClass::FromTypeDefinitionIndex(CCFOOIDLJLI___c_TypeDefinitionIndex)->GetStaticField(0x47C08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCFOOIDLJLI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCFOOIDLJLI___C__CTOR_OFFSET))(this);
	}

	::System::Int32 DCDNGGDAPDP(::MoleMole::ConfigTimelineDataExtra* EIHELBHCLID, ::MoleMole::ConfigTimelineDataExtra* NDGKJHLLCIN)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::ConfigTimelineDataExtra*, ::MoleMole::ConfigTimelineDataExtra*))((::PBYTE)hIl2Cpp + CCFOOIDLJLI___C_DCDNGGDAPDP_OFFSET))(this, EIHELBHCLID, NDGKJHLLCIN);
	}
};
