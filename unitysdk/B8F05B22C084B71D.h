#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B703C91251B8559C.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B8F05B22C084B71D_A5F2B31A40FCB291_OFFSET UNITYSDK_OFFSET(0x43FD240)
#define B8F05B22C084B71D_BD8AF3B52A0EEDF2_OFFSET UNITYSDK_OFFSET(0x43FD090)
#define B8F05B22C084B71D__CTOR_OFFSET UNITYSDK_OFFSET(0x43FD530)

inline static constexpr unsigned int B8F05B22C084B71D_TypeDefinitionIndex = 19431;

class B8F05B22C084B71D : public ::B703C91251B8559C
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* A580007A79FAD294; // 0x10
	::System::String* FF7BF700F58BDCFF; // 0x18

	::System::Void _ctor(::System::String* FF7BF700F58BDCFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + B8F05B22C084B71D__CTOR_OFFSET))(this, FF7BF700F58BDCFF);
	}

	::System::Void A5F2B31A40FCB291()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B8F05B22C084B71D_A5F2B31A40FCB291_OFFSET))(this);
	}

	::System::Void BD8AF3B52A0EEDF2(::System::Int32 F5AEFA05C9F71B82, ::System::String* B960AC235824C6C8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + B8F05B22C084B71D_BD8AF3B52A0EEDF2_OFFSET))(this, F5AEFA05C9F71B82, B960AC235824C6C8);
	}
};
