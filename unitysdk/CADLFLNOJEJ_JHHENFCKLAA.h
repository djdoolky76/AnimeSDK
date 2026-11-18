#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CADLFLNOJEJ_JHHENFCKLAA_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x16938F90)
#define CADLFLNOJEJ_JHHENFCKLAA__CTOR_OFFSET UNITYSDK_OFFSET(0x16938F80)

inline static constexpr unsigned int CADLFLNOJEJ_JHHENFCKLAA_TypeDefinitionIndex = 39673;

class CADLFLNOJEJ_JHHENFCKLAA : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADLFLNOJEJ_JHHENFCKLAA__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADLFLNOJEJ_JHHENFCKLAA_PNGOHNLELDJ_OFFSET))(this);
	}
};
