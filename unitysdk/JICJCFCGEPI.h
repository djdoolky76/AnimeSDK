#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EEBONOEGHOH.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/System/ValueTuple_2.h"

class AOIMINJPFHO;
class BCFKBFFLFGH;
class DIHNHHLDLDP;
class KBDGKAJPALP;
class NBDEOHKBODI;
class PMLCKJBHLLB;

#define JICJCFCGEPI_ANIFIOOMEAP_OFFSET UNITYSDK_OFFSET(0x1D3ECAD0)
#define JICJCFCGEPI_BNMKGFJAMEL_OFFSET UNITYSDK_OFFSET(0x1D3EC270)
#define JICJCFCGEPI_ILKBHHMAKNP_OFFSET UNITYSDK_OFFSET(0x1D3ECB90)
#define JICJCFCGEPI_KNDMMHPDPIB_OFFSET UNITYSDK_OFFSET(0x1D3EC2E0)
#define JICJCFCGEPI_PICMCDPIFPF_OFFSET UNITYSDK_OFFSET(0x1D3ECD40)
#define JICJCFCGEPI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3ED140)
#define JICJCFCGEPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3EC280)

inline static constexpr unsigned int JICJCFCGEPI_TypeDefinitionIndex = 94307;

class JICJCFCGEPI : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Single>** StaticGet_GMFBNPMKHIF()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(JICJCFCGEPI_TypeDefinitionIndex)->GetStaticField(0x52640);
	}
	static ::Il2CppArray<::System::Single>** StaticGet_KOMGAOEBEJH()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(JICJCFCGEPI_TypeDefinitionIndex)->GetStaticField(0x52648);
	}
	static ::Il2CppArray<::System::Single>** StaticGet_GIMPJODHPNH()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(JICJCFCGEPI_TypeDefinitionIndex)->GetStaticField(0x52650);
	}
	static ::Il2CppArray<::System::Single>** StaticGet_OJEHMFBOLPA()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(JICJCFCGEPI_TypeDefinitionIndex)->GetStaticField(0x52658);
	}
	static ::Il2CppArray<::System::Single>** StaticGet_BIDKGMNGKGO()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(JICJCFCGEPI_TypeDefinitionIndex)->GetStaticField(0x52660);
	}
	static ::Il2CppArray<::System::Single>** StaticGet_NOHMAFLIOOI()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(JICJCFCGEPI_TypeDefinitionIndex)->GetStaticField(0x52668);
	}
	static ::Il2CppArray<::System::Single>** StaticGet_NBGEOFKLLIB()
	{
		return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(JICJCFCGEPI_TypeDefinitionIndex)->GetStaticField(0x52670);
	}
	// static const ::System::Int32 HBEMALIFOOB = 0xC; // 0x0
	::PMLCKJBHLLB* MABBJOCLPBG; // 0x10
	::KBDGKAJPALP* NAEFJGAOJCB; // 0x18

	::System::Void _ctor(::KBDGKAJPALP* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::KBDGKAJPALP*))((::PBYTE)hIl2Cpp + JICJCFCGEPI__CTOR_OFFSET))(this, GEEHGDABNJF);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JICJCFCGEPI__CCTOR_OFFSET))();
	}

	::System::Int32 BNMKGFJAMEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JICJCFCGEPI_BNMKGFJAMEL_OFFSET))(this);
	}

	::System::Void KNDMMHPDPIB(::System::Int32 GCFDHEFHCAJ, ::EEBONOEGHOH HODAIDNDKHD, ::AOIMINJPFHO* MPCFCIMLKEG, ::BCFKBFFLFGH* JMDHBJMNBCP, ::DIHNHHLDLDP* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::EEBONOEGHOH, ::AOIMINJPFHO*, ::BCFKBFFLFGH*, ::DIHNHHLDLDP*))((::PBYTE)hIl2Cpp + JICJCFCGEPI_KNDMMHPDPIB_OFFSET))(this, GCFDHEFHCAJ, HODAIDNDKHD, MPCFCIMLKEG, JMDHBJMNBCP, AAOCANGHBDG);
	}

	::System::Boolean ANIFIOOMEAP(::NBDEOHKBODI* BFDPPMDEOFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::NBDEOHKBODI*))((::PBYTE)hIl2Cpp + JICJCFCGEPI_ANIFIOOMEAP_OFFSET))(this, BFDPPMDEOFF);
	}

	static ::JGLIFHIAIEH ILKBHHMAKNP(::System::Single JGOFGELCLOL)
	{
		return ((::JGLIFHIAIEH(*)(::System::Single))((::PBYTE)hIl2Cpp + JICJCFCGEPI_ILKBHHMAKNP_OFFSET))(JGOFGELCLOL);
	}

	static ::System::ValueTuple_2<::Il2CppArray<::System::Single>*, ::System::Int32> PICMCDPIFPF(::System::Int32 LJFCBMDHDFO, ::System::Single LECECHLCHMA)
	{
		return ((::System::ValueTuple_2<::Il2CppArray<::System::Single>*, ::System::Int32>(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + JICJCFCGEPI_PICMCDPIFPF_OFFSET))(LJFCBMDHDFO, LECECHLCHMA);
	}
};
