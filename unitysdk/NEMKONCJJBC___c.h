#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AEMCAOEICDG;
class BMBAFGIABBD;
class EHKKPCGAJHO;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define NEMKONCJJBC___C_AIKNDJKJEKN_OFFSET UNITYSDK_OFFSET(0x105B4180)
#define NEMKONCJJBC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x105B4130)
#define NEMKONCJJBC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x105B4170)

inline static constexpr unsigned int NEMKONCJJBC___c_TypeDefinitionIndex = 74345;

class NEMKONCJJBC___c : public ::System::Object
{
public:
	static ::System::Action_3<::EHKKPCGAJHO*, ::BMBAFGIABBD*, ::AEMCAOEICDG*>** StaticGet___9__3_0()
	{
		return (::System::Action_3<::EHKKPCGAJHO*, ::BMBAFGIABBD*, ::AEMCAOEICDG*>**)Il2CppClass::FromTypeDefinitionIndex(NEMKONCJJBC___c_TypeDefinitionIndex)->GetStaticField(0x3F5A0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NEMKONCJJBC___c_TypeDefinitionIndex)->GetStaticField(0x3F5A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEMKONCJJBC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMKONCJJBC___C__CTOR_OFFSET))(this);
	}

	::System::Void AIKNDJKJEKN(::EHKKPCGAJHO* POBADKEDFOE, ::BMBAFGIABBD* LJGFBEAJJOI, ::AEMCAOEICDG* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::PVOID, ::EHKKPCGAJHO*, ::BMBAFGIABBD*, ::AEMCAOEICDG*))((::PBYTE)hIl2Cpp + NEMKONCJJBC___C_AIKNDJKJEKN_OFFSET))(this, POBADKEDFOE, LJGFBEAJJOI, OHPJHPEOFLD);
	}
};
