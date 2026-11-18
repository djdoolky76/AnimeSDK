#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IFOKBBHAHIE_GHHCJPJAMKA_BEIIBKKGKCJ_OFFSET UNITYSDK_OFFSET(0x15EBA6B0)
#define IFOKBBHAHIE_GHHCJPJAMKA__CTOR_OFFSET UNITYSDK_OFFSET(0x15EBA6A0)

inline static constexpr unsigned int IFOKBBHAHIE_GHHCJPJAMKA_TypeDefinitionIndex = 67430;

class IFOKBBHAHIE_GHHCJPJAMKA : public ::System::Object
{
public:
	::System::Action* GJBHEJGENMI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_GHHCJPJAMKA__CTOR_OFFSET))(this);
	}

	::System::Void BEIIBKKGKCJ(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_GHHCJPJAMKA_BEIIBKKGKCJ_OFFSET))(this, PIIPCLCCOIG);
	}
};
