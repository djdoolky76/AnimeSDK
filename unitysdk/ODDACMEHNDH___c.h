#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBENDELLLAO;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define ODDACMEHNDH___C_DGDGFILDLGG_OFFSET UNITYSDK_OFFSET(0xE147B40)
#define ODDACMEHNDH___C_EMGBKHDNCPB_OFFSET UNITYSDK_OFFSET(0xE147D90)
#define ODDACMEHNDH___C_PDIBMBFJLHI_OFFSET UNITYSDK_OFFSET(0xE147C40)
#define ODDACMEHNDH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE147AF0)
#define ODDACMEHNDH___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE147B30)

inline static constexpr unsigned int ODDACMEHNDH___c_TypeDefinitionIndex = 90085;

class ODDACMEHNDH___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__10_4()
	{
		return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ODDACMEHNDH___c_TypeDefinitionIndex)->GetStaticField(0x42880);
	}
	static ::System::Func_2<::System::Int32, ::IBENDELLLAO*>** StaticGet___9__10_5()
	{
		return (::System::Func_2<::System::Int32, ::IBENDELLLAO*>**)Il2CppClass::FromTypeDefinitionIndex(ODDACMEHNDH___c_TypeDefinitionIndex)->GetStaticField(0x42888);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ODDACMEHNDH___c_TypeDefinitionIndex)->GetStaticField(0x42890);
	}
	static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__10_3()
	{
		return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ODDACMEHNDH___c_TypeDefinitionIndex)->GetStaticField(0x42898);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODDACMEHNDH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODDACMEHNDH___C__CTOR_OFFSET))(this);
	}

	::System::Boolean DGDGFILDLGG(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODDACMEHNDH___C_DGDGFILDLGG_OFFSET))(this, ABHBKFJKINO);
	}

	::IBENDELLLAO* PDIBMBFJLHI(::System::Int32 ABHBKFJKINO)
	{
		return ((::IBENDELLLAO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODDACMEHNDH___C_PDIBMBFJLHI_OFFSET))(this, ABHBKFJKINO);
	}

	::System::String* EMGBKHDNCPB(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODDACMEHNDH___C_EMGBKHDNCPB_OFFSET))(this, ABHBKFJKINO);
	}
};
