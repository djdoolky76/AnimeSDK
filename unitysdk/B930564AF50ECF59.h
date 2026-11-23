#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define B930564AF50ECF59_B2B68072E17EE985_OFFSET UNITYSDK_OFFSET(0x3B5BF20)
#define B930564AF50ECF59__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B930564AF50ECF59_TypeDefinitionIndex = 10259;

class B930564AF50ECF59 : public ::System::Object
{
public:
	::System::Void B2B68072E17EE985(::System::Type* F2E8C8D5F429ABC6, ::System::String*& B84A4D8260C22648, ::System::String*& EC2038339CE86133)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + B930564AF50ECF59_B2B68072E17EE985_OFFSET))(this, F2E8C8D5F429ABC6, B84A4D8260C22648, EC2038339CE86133);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B930564AF50ECF59__CTOR_OFFSET))(this);
	}
};
