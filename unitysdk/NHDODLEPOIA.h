#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NHDODLEPOIA_LGIMMGBOMBA.h"

class NHDODLEPOIA_IOJOIHDOJJN;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NHDODLEPOIA_FONKJJEKKLK_OFFSET UNITYSDK_OFFSET(0x16B73BF0)
#define NHDODLEPOIA_HDJACDILNOE_OFFSET UNITYSDK_OFFSET(0x16B73180)
#define NHDODLEPOIA_HPIKHGLCOCL_OFFSET UNITYSDK_OFFSET(0x16B73C40)
#define NHDODLEPOIA_ICENPIGMAGF_OFFSET UNITYSDK_OFFSET(0x16B737E0)
#define NHDODLEPOIA_INPNGNIINHG_OFFSET UNITYSDK_OFFSET(0x16B73640)
#define NHDODLEPOIA_JBAFCLDEKHA_OFFSET UNITYSDK_OFFSET(0x16B73050)

inline static constexpr unsigned int NHDODLEPOIA_TypeDefinitionIndex = 45767;

class NHDODLEPOIA : public ::System::Object
{
public:
	static ::NHDODLEPOIA_IOJOIHDOJJN** StaticGet_PMCFCAALLIN()
	{
		return (::NHDODLEPOIA_IOJOIHDOJJN**)Il2CppClass::FromTypeDefinitionIndex(NHDODLEPOIA_TypeDefinitionIndex)->GetStaticField(0x3C900);
	}
	static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_HJHNBMMOCDH()
	{
		return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NHDODLEPOIA_TypeDefinitionIndex)->GetStaticField(0x3C908);
	}
	static ::System::UInt32* StaticGet_DFIFCFDBOFI()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(NHDODLEPOIA_TypeDefinitionIndex)->GetStaticField(0xDE00);
	}
	// static const ::System::String* HOPBELGBNMB; // 0x0

	static ::System::Void JBAFCLDEKHA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHDODLEPOIA_JBAFCLDEKHA_OFFSET))();
	}

	static ::NHDODLEPOIA_LGIMMGBOMBA HDJACDILNOE(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::NHDODLEPOIA_LGIMMGBOMBA(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NHDODLEPOIA_HDJACDILNOE_OFFSET))(KECKGDFIALJ);
	}

	static ::MoleMole::Battle::Entity* INPNGNIINHG()
	{
		return ((::MoleMole::Battle::Entity*(*)())((::PBYTE)hIl2Cpp + NHDODLEPOIA_INPNGNIINHG_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::Object*>* ICENPIGMAGF()
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)())((::PBYTE)hIl2Cpp + NHDODLEPOIA_ICENPIGMAGF_OFFSET))();
	}

	static ::System::Boolean FONKJJEKKLK(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NHDODLEPOIA_FONKJJEKKLK_OFFSET))(NJNCGJLHLKC);
	}

	static ::System::Void HPIKHGLCOCL(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NHDODLEPOIA_HPIKHGLCOCL_OFFSET))(NJNCGJLHLKC);
	}
};
