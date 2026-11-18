#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BAANNHAOKEL;
class JCLMLILFGPJ;
class KEJINFHIHMM;
namespace System { template <typename T> class Action_1; }

#define LOBPJIGNBGG___C_JMCODOHLALE_OFFSET UNITYSDK_OFFSET(0x14DCC220)
#define LOBPJIGNBGG___C_MPIHLLBMLFG_OFFSET UNITYSDK_OFFSET(0x14DCC200)
#define LOBPJIGNBGG___C_NABKHKNDPJJ_OFFSET UNITYSDK_OFFSET(0x14DCC210)
#define LOBPJIGNBGG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DCC1B0)
#define LOBPJIGNBGG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DCC1F0)

inline static constexpr unsigned int LOBPJIGNBGG___c_TypeDefinitionIndex = 55167;

class LOBPJIGNBGG___c : public ::System::Object
{
public:
	static ::System::Action_1<::JCLMLILFGPJ*>** StaticGet___9__24_0()
	{
		return (::System::Action_1<::JCLMLILFGPJ*>**)Il2CppClass::FromTypeDefinitionIndex(LOBPJIGNBGG___c_TypeDefinitionIndex)->GetStaticField(0x4A2A0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LOBPJIGNBGG___c_TypeDefinitionIndex)->GetStaticField(0x4A2A8);
	}
	static ::System::Action_1<::BAANNHAOKEL*>** StaticGet___9__24_2()
	{
		return (::System::Action_1<::BAANNHAOKEL*>**)Il2CppClass::FromTypeDefinitionIndex(LOBPJIGNBGG___c_TypeDefinitionIndex)->GetStaticField(0x4A2B0);
	}
	static ::System::Action_1<::KEJINFHIHMM*>** StaticGet___9__24_1()
	{
		return (::System::Action_1<::KEJINFHIHMM*>**)Il2CppClass::FromTypeDefinitionIndex(LOBPJIGNBGG___c_TypeDefinitionIndex)->GetStaticField(0x4A2B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOBPJIGNBGG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBPJIGNBGG___C__CTOR_OFFSET))(this);
	}

	::System::Void MPIHLLBMLFG(::KEJINFHIHMM* DOJPDJKKAPG)
	{
		return ((::System::Void(*)(::PVOID, ::KEJINFHIHMM*))((::PBYTE)hIl2Cpp + LOBPJIGNBGG___C_MPIHLLBMLFG_OFFSET))(this, DOJPDJKKAPG);
	}

	::System::Void NABKHKNDPJJ(::BAANNHAOKEL* GBELIHABEDH)
	{
		return ((::System::Void(*)(::PVOID, ::BAANNHAOKEL*))((::PBYTE)hIl2Cpp + LOBPJIGNBGG___C_NABKHKNDPJJ_OFFSET))(this, GBELIHABEDH);
	}

	::System::Void JMCODOHLALE(::JCLMLILFGPJ* GBELIHABEDH)
	{
		return ((::System::Void(*)(::PVOID, ::JCLMLILFGPJ*))((::PBYTE)hIl2Cpp + LOBPJIGNBGG___C_JMCODOHLALE_OFFSET))(this, GBELIHABEDH);
	}
};
