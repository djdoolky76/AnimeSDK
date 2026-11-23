#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class PerformanceInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B21D699466A137B4_AAA03FC3FDA84497_OFFSET UNITYSDK_OFFSET(0x3A9EE10)
#define B21D699466A137B4_E0D3263DA36A93C9_OFFSET UNITYSDK_OFFSET(0x3A9EB50)
#define B21D699466A137B4__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A9F1D0)
#define B21D699466A137B4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B21D699466A137B4_TypeDefinitionIndex = 12061;

class B21D699466A137B4 : public ::System::Object
{
public:
	static ::B21D699466A137B4** StaticGet_EE999965A1D2099B()
	{
		return (::B21D699466A137B4**)Il2CppClass::FromTypeDefinitionIndex(B21D699466A137B4_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PerformanceInfo*>** StaticGet_AA0892CC1A02C293()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::PerformanceInfo*>**)Il2CppClass::FromTypeDefinitionIndex(B21D699466A137B4_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	::System::Void E0D3263DA36A93C9(::System::String* E7C99297BCFC5085, ::System::String* A1639678F7640EDF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + B21D699466A137B4_E0D3263DA36A93C9_OFFSET))(this, E7C99297BCFC5085, A1639678F7640EDF);
	}

	::System::Void AAA03FC3FDA84497(::System::String* E7C99297BCFC5085, ::System::String* A5DBD8ADF433E539, ::System::String* BC44D01FDCF9D2D6)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + B21D699466A137B4_AAA03FC3FDA84497_OFFSET))(this, E7C99297BCFC5085, A5DBD8ADF433E539, BC44D01FDCF9D2D6);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B21D699466A137B4__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B21D699466A137B4__CTOR_OFFSET))(this);
	}
};
