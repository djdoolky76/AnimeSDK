#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CCIKICBGGLP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MLLODDNIAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x10777730)

inline static constexpr unsigned int MLLODDNIAKE_TypeDefinitionIndex = 72478;

class MLLODDNIAKE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::CCIKICBGGLP*>* BOFLDBPHKIB; // 0x10
	::System::Boolean JIPJAGOKBLO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLODDNIAKE__CTOR_OFFSET))(this);
	}
};
