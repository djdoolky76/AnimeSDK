#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CHFJLNEHAAF_HDKDIKEHOHL_ANEKICANEAJ_OFFSET UNITYSDK_OFFSET(0x159D9BB0)
#define CHFJLNEHAAF_HDKDIKEHOHL_IKLJMJJEBKF_OFFSET UNITYSDK_OFFSET(0x159D9BA0)
#define CHFJLNEHAAF_HDKDIKEHOHL__CTOR_OFFSET UNITYSDK_OFFSET(0x159D9B90)

inline static constexpr unsigned int CHFJLNEHAAF_HDKDIKEHOHL_TypeDefinitionIndex = 87347;

class CHFJLNEHAAF_HDKDIKEHOHL : public ::System::Object
{
public:
	::System::String* FCCLIEJAKLI; // 0x10
	::System::String* OLOMNNBBHPJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_HDKDIKEHOHL__CTOR_OFFSET))(this);
	}

	::System::Void IKLJMJJEBKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_HDKDIKEHOHL_IKLJMJJEBKF_OFFSET))(this);
	}

	::System::Void ANEKICANEAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFJLNEHAAF_HDKDIKEHOHL_ANEKICANEAJ_OFFSET))(this);
	}
};
