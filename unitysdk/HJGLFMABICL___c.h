#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerable; }

#define HJGLFMABICL___C_AJNKLKNOKJM_OFFSET UNITYSDK_OFFSET(0x1818FE30)
#define HJGLFMABICL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1818FDE0)
#define HJGLFMABICL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1818FE20)

inline static constexpr unsigned int HJGLFMABICL___c_TypeDefinitionIndex = 90048;

class HJGLFMABICL___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Collections::IEnumerable*>** StaticGet___9__7_0()
	{
		return (::System::Func_1<::System::Collections::IEnumerable*>**)Il2CppClass::FromTypeDefinitionIndex(HJGLFMABICL___c_TypeDefinitionIndex)->GetStaticField(0x4BAE0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HJGLFMABICL___c_TypeDefinitionIndex)->GetStaticField(0x4BAE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJGLFMABICL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJGLFMABICL___C__CTOR_OFFSET))(this);
	}

	::System::Collections::IEnumerable* AJNKLKNOKJM()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJGLFMABICL___C_AJNKLKNOKJM_OFFSET))(this);
	}
};
