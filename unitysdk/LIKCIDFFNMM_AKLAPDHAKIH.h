#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LIKCIDFFNMM_AKLAPDHAKIH_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0xD430E40)
#define LIKCIDFFNMM_AKLAPDHAKIH__CTOR_OFFSET UNITYSDK_OFFSET(0xD430E30)

inline static constexpr unsigned int LIKCIDFFNMM_AKLAPDHAKIH_TypeDefinitionIndex = 43014;

class LIKCIDFFNMM_AKLAPDHAKIH : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Action* AMHGBGMOMLL; // 0x28
	::System::Int32 HBINAGPODHA; // 0x30
	::System::Single KKIAHJODOIA; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_AKLAPDHAKIH__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKCIDFFNMM_AKLAPDHAKIH_PNGOHNLELDJ_OFFSET))(this);
	}
};
