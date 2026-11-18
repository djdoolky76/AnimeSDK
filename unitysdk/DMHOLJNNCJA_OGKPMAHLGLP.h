#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JNJDKJNNIKO;
class OAEFGCLEHHO;
namespace System { class Action; }

#define DMHOLJNNCJA_OGKPMAHLGLP_DHCCFOHAEEJ_OFFSET UNITYSDK_OFFSET(0x149BF7A0)
#define DMHOLJNNCJA_OGKPMAHLGLP_IGOJGOIADOA_OFFSET UNITYSDK_OFFSET(0x15870B90)
#define DMHOLJNNCJA_OGKPMAHLGLP__CTOR_OFFSET UNITYSDK_OFFSET(0x149BF790)

inline static constexpr unsigned int DMHOLJNNCJA_OGKPMAHLGLP_TypeDefinitionIndex = 46945;

class DMHOLJNNCJA_OGKPMAHLGLP : public ::System::Object
{
public:
	::JNJDKJNNIKO* BKOAAAFDPBC; // 0x10
	::System::Action* DLMJCFBENGB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_OGKPMAHLGLP__CTOR_OFFSET))(this);
	}

	::System::Void DHCCFOHAEEJ(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_OGKPMAHLGLP_DHCCFOHAEEJ_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void IGOJGOIADOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHOLJNNCJA_OGKPMAHLGLP_IGOJGOIADOA_OFFSET))(this);
	}
};
