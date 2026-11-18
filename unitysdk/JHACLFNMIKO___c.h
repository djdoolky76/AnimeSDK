#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAAFCLHNIBE.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class FPIHNCDEGEN;
class IANDOOLAALI_NGKHGAPPFDA;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JHACLFNMIKO___C_FGAEHNKOAIB_OFFSET UNITYSDK_OFFSET(0x19811B70)
#define JHACLFNMIKO___C_HOLFNBCHDOE_OFFSET UNITYSDK_OFFSET(0x19811B60)
#define JHACLFNMIKO___C_PGIIEPNBNOC_OFFSET UNITYSDK_OFFSET(0x19811B50)
#define JHACLFNMIKO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19811B00)
#define JHACLFNMIKO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19811B40)

inline static constexpr unsigned int JHACLFNMIKO___c_TypeDefinitionIndex = 54602;

class JHACLFNMIKO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JHACLFNMIKO___c_TypeDefinitionIndex)->GetStaticField(0x4BC80);
	}
	static ::IANDOOLAALI_NGKHGAPPFDA** StaticGet___9__64_1()
	{
		return (::IANDOOLAALI_NGKHGAPPFDA**)Il2CppClass::FromTypeDefinitionIndex(JHACLFNMIKO___c_TypeDefinitionIndex)->GetStaticField(0x4BC88);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::KAAFCLHNIBE, ::System::Collections::Generic::List_1<::System::Object*>*>, ::System::Int32>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::KAAFCLHNIBE, ::System::Collections::Generic::List_1<::System::Object*>*>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JHACLFNMIKO___c_TypeDefinitionIndex)->GetStaticField(0x4BC90);
	}
	static ::System::Func_2<::FPIHNCDEGEN*, ::System::Int32>** StaticGet___9__13_1()
	{
		return (::System::Func_2<::FPIHNCDEGEN*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(JHACLFNMIKO___c_TypeDefinitionIndex)->GetStaticField(0x4BC98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JHACLFNMIKO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHACLFNMIKO___C__CTOR_OFFSET))(this);
	}

	::System::Int32 PGIIEPNBNOC(::System::Collections::Generic::KeyValuePair_2<::KAAFCLHNIBE, ::System::Collections::Generic::List_1<::System::Object*>*> HFMHOELKCAJ)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::KAAFCLHNIBE, ::System::Collections::Generic::List_1<::System::Object*>*>))((::PBYTE)hIl2Cpp + JHACLFNMIKO___C_PGIIEPNBNOC_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Void HOLFNBCHDOE(::OAEFGCLEHHO* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + JHACLFNMIKO___C_HOLFNBCHDOE_OFFSET))(this, NAPFALLANDL);
	}

	::System::Int32 FGAEHNKOAIB(::FPIHNCDEGEN* HFMHOELKCAJ)
	{
		return ((::System::Int32(*)(::PVOID, ::FPIHNCDEGEN*))((::PBYTE)hIl2Cpp + JHACLFNMIKO___C_FGAEHNKOAIB_OFFSET))(this, HFMHOELKCAJ);
	}
};
