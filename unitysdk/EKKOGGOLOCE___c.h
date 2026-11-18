#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GPKIDAPNOOB;
namespace System { template <typename T> class Comparison_1; }

#define EKKOGGOLOCE___C_JDLDHAPHNEJ_OFFSET UNITYSDK_OFFSET(0x14176D90)
#define EKKOGGOLOCE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14176D40)
#define EKKOGGOLOCE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14176D80)

inline static constexpr unsigned int EKKOGGOLOCE___c_TypeDefinitionIndex = 80145;

class EKKOGGOLOCE___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EKKOGGOLOCE___c_TypeDefinitionIndex)->GetStaticField(0x37660);
	}
	static ::System::Comparison_1<::GPKIDAPNOOB*>** StaticGet___9__5_1()
	{
		return (::System::Comparison_1<::GPKIDAPNOOB*>**)Il2CppClass::FromTypeDefinitionIndex(EKKOGGOLOCE___c_TypeDefinitionIndex)->GetStaticField(0x37668);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKKOGGOLOCE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKKOGGOLOCE___C__CTOR_OFFSET))(this);
	}

	::System::Int32 JDLDHAPHNEJ(::GPKIDAPNOOB* EJCBEJMGFAJ, ::GPKIDAPNOOB* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::GPKIDAPNOOB*, ::GPKIDAPNOOB*))((::PBYTE)hIl2Cpp + EKKOGGOLOCE___C_JDLDHAPHNEJ_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
