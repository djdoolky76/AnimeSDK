#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KHCFEFMDDJB;
namespace System { template <typename T> class Action_1; }

#define HNFJPOOHJPB___C_AELOLNEHGGI_OFFSET UNITYSDK_OFFSET(0x16F4F9B0)
#define HNFJPOOHJPB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F4F960)
#define HNFJPOOHJPB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F4F9A0)

inline static constexpr unsigned int HNFJPOOHJPB___c_TypeDefinitionIndex = 52694;

class HNFJPOOHJPB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HNFJPOOHJPB___c_TypeDefinitionIndex)->GetStaticField(0x3DF90);
	}
	static ::System::Action_1<::KHCFEFMDDJB*>** StaticGet___9__7_0()
	{
		return (::System::Action_1<::KHCFEFMDDJB*>**)Il2CppClass::FromTypeDefinitionIndex(HNFJPOOHJPB___c_TypeDefinitionIndex)->GetStaticField(0x3DF98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNFJPOOHJPB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFJPOOHJPB___C__CTOR_OFFSET))(this);
	}

	::System::Void AELOLNEHGGI(::KHCFEFMDDJB* MHPNGBGGMMN)
	{
		return ((::System::Void(*)(::PVOID, ::KHCFEFMDDJB*))((::PBYTE)hIl2Cpp + HNFJPOOHJPB___C_AELOLNEHGGI_OFFSET))(this, MHPNGBGGMMN);
	}
};
