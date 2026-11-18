#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BJBMLMHDOME;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define NICLFOGGOBF___C_BOGNONFCLOH_OFFSET UNITYSDK_OFFSET(0x105BB060)
#define NICLFOGGOBF___C_KANKHHNOLFN_OFFSET UNITYSDK_OFFSET(0x105BB040)
#define NICLFOGGOBF___C_LEFHINGCIBL_OFFSET UNITYSDK_OFFSET(0x105BB050)
#define NICLFOGGOBF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x105BAFF0)
#define NICLFOGGOBF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x105BB030)

inline static constexpr unsigned int NICLFOGGOBF___c_TypeDefinitionIndex = 67911;

class NICLFOGGOBF___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NICLFOGGOBF___c_TypeDefinitionIndex)->GetStaticField(0x4AF50);
	}
	static ::System::Action** StaticGet___9__24_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(NICLFOGGOBF___c_TypeDefinitionIndex)->GetStaticField(0x4AF58);
	}
	static ::System::Action** StaticGet___9__24_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(NICLFOGGOBF___c_TypeDefinitionIndex)->GetStaticField(0x4AF60);
	}
	static ::System::Comparison_1<::BJBMLMHDOME*>** StaticGet___9__22_1()
	{
		return (::System::Comparison_1<::BJBMLMHDOME*>**)Il2CppClass::FromTypeDefinitionIndex(NICLFOGGOBF___c_TypeDefinitionIndex)->GetStaticField(0x4AF68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NICLFOGGOBF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICLFOGGOBF___C__CTOR_OFFSET))(this);
	}

	::System::Void KANKHHNOLFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICLFOGGOBF___C_KANKHHNOLFN_OFFSET))(this);
	}

	::System::Void LEFHINGCIBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICLFOGGOBF___C_LEFHINGCIBL_OFFSET))(this);
	}

	::System::Int32 BOGNONFCLOH(::BJBMLMHDOME* DPGFPHIMDEL, ::BJBMLMHDOME* DLJPLHKELCO)
	{
		return ((::System::Int32(*)(::PVOID, ::BJBMLMHDOME*, ::BJBMLMHDOME*))((::PBYTE)hIl2Cpp + NICLFOGGOBF___C_BOGNONFCLOH_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
	}
};
