#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define F4F24FD0781B7514_B331B121C62F2740_OFFSET UNITYSDK_OFFSET(0x3CCB480)
#define F4F24FD0781B7514_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x3CCB5B0)
#define F4F24FD0781B7514_F35B9337D53C310F_OFFSET UNITYSDK_OFFSET(0x3CCB520)
#define F4F24FD0781B7514__CTOR_OFFSET UNITYSDK_OFFSET(0x3CCB6A0)

inline static constexpr unsigned int F4F24FD0781B7514_TypeDefinitionIndex = 10571;

class F4F24FD0781B7514 : public ::System::Object
{
public:
	::System::Int32 FD95EC56E8F0C380; // 0x10
	::System::Boolean E6C1D9569865F7A5; // 0x14

	::System::Type* F35B9337D53C310F(::System::Type* A288CB28FC2A6DA3)
	{
		return ((::System::Type*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + F4F24FD0781B7514_F35B9337D53C310F_OFFSET))(this, A288CB28FC2A6DA3);
	}

	::System::Text::StringBuilder* B331B121C62F2740(::System::Text::StringBuilder* A94D8812A3A79CC8)
	{
		return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + F4F24FD0781B7514_B331B121C62F2740_OFFSET))(this, A94D8812A3A79CC8);
	}

	::System::Void _ctor(::System::Int32 FD95EC56E8F0C380, ::System::Boolean E6C1D9569865F7A5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + F4F24FD0781B7514__CTOR_OFFSET))(this, FD95EC56E8F0C380, E6C1D9569865F7A5);
	}

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F4F24FD0781B7514_EA28CF291EBB2931_OFFSET))(this);
	}
};
