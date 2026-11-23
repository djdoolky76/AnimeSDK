#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class ADDF5F55A85EB950; }

#define EF6FED9450590D01_F5628F8349D4A8A6_A08F34FFE1FCA1B6_OFFSET UNITYSDK_OFFSET(0x3A41F70)
#define EF6FED9450590D01_F5628F8349D4A8A6_A2BED30E7051E4CB_OFFSET UNITYSDK_OFFSET(0x3A42250)
#define EF6FED9450590D01_F5628F8349D4A8A6_A5BB2F05CA4A7C3F_OFFSET UNITYSDK_OFFSET(0x3A422E0)
#define EF6FED9450590D01_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A44EF0)
#define EF6FED9450590D01_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EF6FED9450590D01_F5628F8349D4A8A6_TypeDefinitionIndex = 12924;

class EF6FED9450590D01_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::EF6FED9450590D01_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::EF6FED9450590D01_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(EF6FED9450590D01_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::ADDF5F55A85EB950<::System::String*>** StaticGet_A11D69BF37F0CD6C()
	{
		return (::System::ADDF5F55A85EB950<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EF6FED9450590D01_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::ADDF5F55A85EB950<::System::String*>** StaticGet_B2B462D767EFBA79()
	{
		return (::System::ADDF5F55A85EB950<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EF6FED9450590D01_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::ADDF5F55A85EB950<::System::String*>** StaticGet_AD569E9A79F860BB()
	{
		return (::System::ADDF5F55A85EB950<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EF6FED9450590D01_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EF6FED9450590D01_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EF6FED9450590D01_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Int32 A5BB2F05CA4A7C3F(::System::String* BB8C609F76620E45, ::System::String* A0A0D02932F12CFD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EF6FED9450590D01_F5628F8349D4A8A6_A5BB2F05CA4A7C3F_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD);
	}

	::System::Int32 A2BED30E7051E4CB(::System::String* BB8C609F76620E45, ::System::String* A0A0D02932F12CFD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EF6FED9450590D01_F5628F8349D4A8A6_A2BED30E7051E4CB_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD);
	}

	::System::Int32 A08F34FFE1FCA1B6(::System::String* BB8C609F76620E45, ::System::String* A0A0D02932F12CFD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EF6FED9450590D01_F5628F8349D4A8A6_A08F34FFE1FCA1B6_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD);
	}
};
