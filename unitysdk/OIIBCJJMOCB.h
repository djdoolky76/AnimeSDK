#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OIIBCJJMOCB__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B35A50)

inline static constexpr unsigned int OIIBCJJMOCB_TypeDefinitionIndex = 59750;

class OIIBCJJMOCB : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_ACCKOJFBNLF()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OIIBCJJMOCB_TypeDefinitionIndex)->GetStaticField(0x13B00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIIBCJJMOCB__CCTOR_OFFSET))();
	}
};
