#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BEFJNIEKKDB;
class DAIJEMAOOPN;
class GPKIDAPNOOB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OECEOEBMMOD_APPCLMIANHI_OFFSET UNITYSDK_OFFSET(0x13A50700)
#define OECEOEBMMOD__CTOR_OFFSET UNITYSDK_OFFSET(0x13A50670)

inline static constexpr unsigned int OECEOEBMMOD_TypeDefinitionIndex = 58355;

class OECEOEBMMOD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::GPKIDAPNOOB*>* OBMEDHAEJMI; // 0x10
	::BEFJNIEKKDB* DHHHBNPOMDE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OECEOEBMMOD__CTOR_OFFSET))(this);
	}

	::System::Void APPCLMIANHI(::DAIJEMAOOPN* LJBPECKCCEA, ::System::Boolean CACMHFNCPNM)
	{
		return ((::System::Void(*)(::PVOID, ::DAIJEMAOOPN*, ::System::Boolean))((::PBYTE)hIl2Cpp + OECEOEBMMOD_APPCLMIANHI_OFFSET))(this, LJBPECKCCEA, CACMHFNCPNM);
	}
};
