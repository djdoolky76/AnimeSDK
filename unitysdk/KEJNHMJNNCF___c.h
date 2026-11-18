#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPNHHGBPCGM.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KEJNHMJNNCF___C_CAKFAIPKNLE_OFFSET UNITYSDK_OFFSET(0x15205D80)
#define KEJNHMJNNCF___C_MPGDALOFCAL_OFFSET UNITYSDK_OFFSET(0x15205DB0)
#define KEJNHMJNNCF___C_NAOAKBKPPKK_OFFSET UNITYSDK_OFFSET(0x15205DA0)
#define KEJNHMJNNCF___C_OOAMCGGJEDM_OFFSET UNITYSDK_OFFSET(0x15205DD0)
#define KEJNHMJNNCF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15205D30)
#define KEJNHMJNNCF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15205D70)

inline static constexpr unsigned int KEJNHMJNNCF___c_TypeDefinitionIndex = 64933;

class KEJNHMJNNCF___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__141_0()
	{
		return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(KEJNHMJNNCF___c_TypeDefinitionIndex)->GetStaticField(0x32890);
	}
	static ::System::Func_2<::MoleMole::DownloadFileInfo*, ::System::String*>** StaticGet___9__93_0()
	{
		return (::System::Func_2<::MoleMole::DownloadFileInfo*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KEJNHMJNNCF___c_TypeDefinitionIndex)->GetStaticField(0x32898);
	}
	static ::System::Func_2<::MoleMole::DownloadFileInfo*, ::System::String*>** StaticGet___9__93_1()
	{
		return (::System::Func_2<::MoleMole::DownloadFileInfo*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(KEJNHMJNNCF___c_TypeDefinitionIndex)->GetStaticField(0x328A0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KEJNHMJNNCF___c_TypeDefinitionIndex)->GetStaticField(0x328A8);
	}
	static ::System::Func_2<::System::Int32, ::GPNHHGBPCGM>** StaticGet___9__35_0()
	{
		return (::System::Func_2<::System::Int32, ::GPNHHGBPCGM>**)Il2CppClass::FromTypeDefinitionIndex(KEJNHMJNNCF___c_TypeDefinitionIndex)->GetStaticField(0x328B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEJNHMJNNCF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEJNHMJNNCF___C__CTOR_OFFSET))(this);
	}

	::System::String* CAKFAIPKNLE(::MoleMole::DownloadFileInfo* HAAEBCOBKFF)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + KEJNHMJNNCF___C_CAKFAIPKNLE_OFFSET))(this, HAAEBCOBKFF);
	}

	::GPNHHGBPCGM NAOAKBKPPKK(::System::Int32 AELLPLBJELA)
	{
		return ((::GPNHHGBPCGM(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KEJNHMJNNCF___C_NAOAKBKPPKK_OFFSET))(this, AELLPLBJELA);
	}

	::System::String* MPGDALOFCAL(::MoleMole::DownloadFileInfo* HAAEBCOBKFF)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + KEJNHMJNNCF___C_MPGDALOFCAL_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Boolean OOAMCGGJEDM(::System::String* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KEJNHMJNNCF___C_OOAMCGGJEDM_OFFSET))(this, HAAEBCOBKFF);
	}
};
