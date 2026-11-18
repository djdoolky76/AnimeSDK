#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class FANBKJPNEDB;
class OMPFICOEDFF;
namespace System { template <typename T1, typename T2> class Func_2; }

#define AMJCFGOGENM___C_BAICJHJHGBI_OFFSET UNITYSDK_OFFSET(0x1648D8B0)
#define AMJCFGOGENM___C_BEPDOLNPPNF_OFFSET UNITYSDK_OFFSET(0x1648D8D0)
#define AMJCFGOGENM___C_CEFHMOCMFAG_OFFSET UNITYSDK_OFFSET(0x1648D8E0)
#define AMJCFGOGENM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1648D860)
#define AMJCFGOGENM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1648D8A0)

inline static constexpr unsigned int AMJCFGOGENM___c_TypeDefinitionIndex = 92761;

class AMJCFGOGENM___c : public ::System::Object
{
public:
	static ::System::Func_2<::OMPFICOEDFF*, ::System::Int32>** StaticGet___9__75_1()
	{
		return (::System::Func_2<::OMPFICOEDFF*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AMJCFGOGENM___c_TypeDefinitionIndex)->GetStaticField(0x49690);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AMJCFGOGENM___c_TypeDefinitionIndex)->GetStaticField(0x49698);
	}
	static ::System::Func_2<::FANBKJPNEDB*, ::System::UInt32>** StaticGet___9__108_0()
	{
		return (::System::Func_2<::FANBKJPNEDB*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(AMJCFGOGENM___c_TypeDefinitionIndex)->GetStaticField(0x496A0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::FANBKJPNEDB*>, ::FANBKJPNEDB*>** StaticGet___9__60_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::FANBKJPNEDB*>, ::FANBKJPNEDB*>**)Il2CppClass::FromTypeDefinitionIndex(AMJCFGOGENM___c_TypeDefinitionIndex)->GetStaticField(0x496A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMJCFGOGENM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJCFGOGENM___C__CTOR_OFFSET))(this);
	}

	::System::Int32 BAICJHJHGBI(::OMPFICOEDFF* DFMKILICPFB)
	{
		return ((::System::Int32(*)(::PVOID, ::OMPFICOEDFF*))((::PBYTE)hIl2Cpp + AMJCFGOGENM___C_BAICJHJHGBI_OFFSET))(this, DFMKILICPFB);
	}

	::FANBKJPNEDB* BEPDOLNPPNF(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::FANBKJPNEDB*> HMHNHLFGLCK)
	{
		return ((::FANBKJPNEDB*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::FANBKJPNEDB*>))((::PBYTE)hIl2Cpp + AMJCFGOGENM___C_BEPDOLNPPNF_OFFSET))(this, HMHNHLFGLCK);
	}

	::System::UInt32 CEFHMOCMFAG(::FANBKJPNEDB* HAAEBCOBKFF)
	{
		return ((::System::UInt32(*)(::PVOID, ::FANBKJPNEDB*))((::PBYTE)hIl2Cpp + AMJCFGOGENM___C_CEFHMOCMFAG_OFFSET))(this, HAAEBCOBKFF);
	}
};
