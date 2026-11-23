#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace ABC::Splines::CatmullRom { class Spline; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F17018970FED8AD7__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F17018970FED8AD7_TypeDefinitionIndex = 8395;

class F17018970FED8AD7 : public ::E379DE61A548837D
{
public:
	::System::UInt32 EDB42C4C835AAD90; // 0x38
	::System::UInt32 B289D9A1F114D305; // 0x3C
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ABC::Splines::CatmullRom::Spline*>* E7E7E476ED80CB4D; // 0x40
	::System::Boolean BAF82BA911450307; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F17018970FED8AD7__CTOR_OFFSET))(this);
	}
};
