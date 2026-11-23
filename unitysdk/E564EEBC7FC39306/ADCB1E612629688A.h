#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A418C49FA6A8C1F7/B9A8F16A870DE44E.h"

namespace System { class String; }

#define E564EEBC7FC39306_ADCB1E612629688A__CCTOR_OFFSET UNITYSDK_OFFSET(0x42BD9E0)
#define E564EEBC7FC39306_ADCB1E612629688A__CTOR_OFFSET UNITYSDK_OFFSET(0x42BDAD0)

namespace E564EEBC7FC39306
{
	inline static constexpr unsigned int ADCB1E612629688A_TypeDefinitionIndex = 14061;

	class ADCB1E612629688A : public ::A418C49FA6A8C1F7::B9A8F16A870DE44E
	{
	public:
		static ::System::String** StaticGet_E01E49E0EDEFB827()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ADCB1E612629688A_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::String** StaticGet_FD3885D0E492ECDA()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ADCB1E612629688A_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E564EEBC7FC39306_ADCB1E612629688A__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E564EEBC7FC39306_ADCB1E612629688A__CTOR_OFFSET))(this);
		}
	};
}
