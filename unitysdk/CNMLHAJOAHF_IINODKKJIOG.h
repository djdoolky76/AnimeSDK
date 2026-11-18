#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CNMLHAJOAHF_IINODKKJIOG_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x145DA2B0)
#define CNMLHAJOAHF_IINODKKJIOG__CTOR_OFFSET UNITYSDK_OFFSET(0x145DA2A0)

inline static constexpr unsigned int CNMLHAJOAHF_IINODKKJIOG_TypeDefinitionIndex = 82228;

class CNMLHAJOAHF_IINODKKJIOG : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMLHAJOAHF_IINODKKJIOG__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMLHAJOAHF_IINODKKJIOG_PNGOHNLELDJ_OFFSET))(this);
	}
};
