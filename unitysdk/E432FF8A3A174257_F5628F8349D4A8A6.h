#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class ADDF5F55A85EB950; }

#define E432FF8A3A174257_F5628F8349D4A8A6_A08F34FFE1FCA1B6_OFFSET UNITYSDK_OFFSET(0x2A18530)
#define E432FF8A3A174257_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x2A1CFC0)
#define E432FF8A3A174257_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E432FF8A3A174257_F5628F8349D4A8A6_TypeDefinitionIndex = 15872;

class E432FF8A3A174257_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::E432FF8A3A174257_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::E432FF8A3A174257_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E432FF8A3A174257_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::ADDF5F55A85EB950<::System::String*>** StaticGet_AD569E9A79F860BB()
	{
		return (::System::ADDF5F55A85EB950<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(E432FF8A3A174257_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E432FF8A3A174257_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E432FF8A3A174257_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Int32 A08F34FFE1FCA1B6(::System::String* BB8C609F76620E45, ::System::String* A0A0D02932F12CFD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + E432FF8A3A174257_F5628F8349D4A8A6_A08F34FFE1FCA1B6_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD);
	}
};
