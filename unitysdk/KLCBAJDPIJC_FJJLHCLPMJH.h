#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KLCBAJDPIJC_FJJLHCLPMJH_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x13C6E090)
#define KLCBAJDPIJC_FJJLHCLPMJH__CTOR_OFFSET UNITYSDK_OFFSET(0x13C6E080)

inline static constexpr unsigned int KLCBAJDPIJC_FJJLHCLPMJH_TypeDefinitionIndex = 79033;

class KLCBAJDPIJC_FJJLHCLPMJH : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLCBAJDPIJC_FJJLHCLPMJH__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLCBAJDPIJC_FJJLHCLPMJH_PNGOHNLELDJ_OFFSET))(this);
	}
};
