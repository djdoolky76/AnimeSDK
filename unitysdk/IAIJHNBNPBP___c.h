#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class PICPKGKNFMC;
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }

#define IAIJHNBNPBP___C_JHIHEGGGHNP_OFFSET UNITYSDK_OFFSET(0x1EF0DD30)
#define IAIJHNBNPBP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF0DCE0)
#define IAIJHNBNPBP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF0DD20)

inline static constexpr unsigned int IAIJHNBNPBP___c_TypeDefinitionIndex = 8411;

class IAIJHNBNPBP___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::PICPKGKNFMC*>>** StaticGet___9__2_0()
	{
		return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::PICPKGKNFMC*>>**)Il2CppClass::FromTypeDefinitionIndex(IAIJHNBNPBP___c_TypeDefinitionIndex)->GetStaticField(0x7180);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IAIJHNBNPBP___c_TypeDefinitionIndex)->GetStaticField(0x7188);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAIJHNBNPBP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIJHNBNPBP___C__CTOR_OFFSET))(this);
	}

	::System::Int32 JHIHEGGGHNP(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::PICPKGKNFMC*> NMDDIIHGFMN, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::PICPKGKNFMC*> JILEDNLMGGA)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::PICPKGKNFMC*>, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::PICPKGKNFMC*>))((::PBYTE)hIl2Cpp + IAIJHNBNPBP___C_JHIHEGGGHNP_OFFSET))(this, NMDDIIHGFMN, JILEDNLMGGA);
	}
};
