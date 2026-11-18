#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DDGDBFHPBEJ_DBAGONDHCML.h"

class BKDIHAIJPHI;
namespace System { template <typename T1, typename T2> class Func_2; }

#define DDGDBFHPBEJ_JKMFOJACHMO___C_BIMFPLHDECE_OFFSET UNITYSDK_OFFSET(0x19A36F70)
#define DDGDBFHPBEJ_JKMFOJACHMO___C_JBCNOFELNGM_OFFSET UNITYSDK_OFFSET(0x19A36F50)
#define DDGDBFHPBEJ_JKMFOJACHMO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A36F00)
#define DDGDBFHPBEJ_JKMFOJACHMO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19A36F40)

inline static constexpr unsigned int DDGDBFHPBEJ_JKMFOJACHMO___c_TypeDefinitionIndex = 66482;

class DDGDBFHPBEJ_JKMFOJACHMO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DDGDBFHPBEJ_JKMFOJACHMO___c_TypeDefinitionIndex)->GetStaticField(0x37240);
	}
	static ::System::Func_2<::BKDIHAIJPHI*, ::System::Object*>** StaticGet___9__9_0()
	{
		return (::System::Func_2<::BKDIHAIJPHI*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(DDGDBFHPBEJ_JKMFOJACHMO___c_TypeDefinitionIndex)->GetStaticField(0x37248);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_JKMFOJACHMO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_JKMFOJACHMO___C__CTOR_OFFSET))(this);
	}

	::System::Int32 JBCNOFELNGM(::DDGDBFHPBEJ_DBAGONDHCML KILPCOMOCMD, ::DDGDBFHPBEJ_DBAGONDHCML BBCODANAFGI)
	{
		return ((::System::Int32(*)(::PVOID, ::DDGDBFHPBEJ_DBAGONDHCML, ::DDGDBFHPBEJ_DBAGONDHCML))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_JKMFOJACHMO___C_JBCNOFELNGM_OFFSET))(this, KILPCOMOCMD, BBCODANAFGI);
	}

	::DDGDBFHPBEJ_DBAGONDHCML BIMFPLHDECE(::BKDIHAIJPHI* IPMMCGDMODG)
	{
		return ((::DDGDBFHPBEJ_DBAGONDHCML(*)(::PVOID, ::BKDIHAIJPHI*))((::PBYTE)hIl2Cpp + DDGDBFHPBEJ_JKMFOJACHMO___C_BIMFPLHDECE_OFFSET))(this, IPMMCGDMODG);
	}
};
