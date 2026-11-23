#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FE3E2476C956965B_AA67CA54C4278CAC.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FE3E2476C956965B_AA67CA54C4278CAC_F5628F8349D4A8A6_ECAC72FA5F8B263D_OFFSET UNITYSDK_OFFSET(0x3F6E550)
#define FE3E2476C956965B_AA67CA54C4278CAC_F5628F8349D4A8A6_FC89CFBD745D7D1E_OFFSET UNITYSDK_OFFSET(0x3F6E570)
#define FE3E2476C956965B_AA67CA54C4278CAC_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3F6E6B0)
#define FE3E2476C956965B_AA67CA54C4278CAC_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FE3E2476C956965B_AA67CA54C4278CAC_F5628F8349D4A8A6_TypeDefinitionIndex = 14264;

class FE3E2476C956965B_AA67CA54C4278CAC_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::FE3E2476C956965B_AA67CA54C4278CAC_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::FE3E2476C956965B_AA67CA54C4278CAC_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(FE3E2476C956965B_AA67CA54C4278CAC_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::System::Object*, ::System::String*>** StaticGet_B3B5BB714B5D4029()
	{
		return (::System::Func_2<::System::Object*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FE3E2476C956965B_AA67CA54C4278CAC_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>, ::System::String*>** StaticGet_BECF4BB3BEA54FF0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FE3E2476C956965B_AA67CA54C4278CAC_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FE3E2476C956965B_AA67CA54C4278CAC_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE3E2476C956965B_AA67CA54C4278CAC_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::String* ECAC72FA5F8B263D(::FE3E2476C956965B_AA67CA54C4278CAC BB8C609F76620E45)
	{
		return ((::System::String*(*)(::PVOID, ::FE3E2476C956965B_AA67CA54C4278CAC))((::PBYTE)hIl2Cpp + FE3E2476C956965B_AA67CA54C4278CAC_F5628F8349D4A8A6_ECAC72FA5F8B263D_OFFSET))(this, BB8C609F76620E45);
	}

	::System::String* FC89CFBD745D7D1E(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> AC077DE329913A66)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>))((::PBYTE)hIl2Cpp + FE3E2476C956965B_AA67CA54C4278CAC_F5628F8349D4A8A6_FC89CFBD745D7D1E_OFFSET))(this, AC077DE329913A66);
	}
};
