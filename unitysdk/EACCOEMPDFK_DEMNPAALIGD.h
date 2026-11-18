#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EACCOEMPDFK;
class EAIOHODECAO;

#define EACCOEMPDFK_DEMNPAALIGD__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF96AB0)

inline static constexpr unsigned int EACCOEMPDFK_DEMNPAALIGD_TypeDefinitionIndex = 96491;

class EACCOEMPDFK_DEMNPAALIGD : public ::System::Object
{
public:
	::EACCOEMPDFK* KLHPEBKNIFB; // 0x10
	::EAIOHODECAO* GEEHGDABNJF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EACCOEMPDFK_DEMNPAALIGD__CTOR_OFFSET))(this);
	}
};
