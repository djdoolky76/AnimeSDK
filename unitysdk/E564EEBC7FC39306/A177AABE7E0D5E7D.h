#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A418C49FA6A8C1F7/B9A8F16A870DE44E.h"

namespace System { class String; }

#define E564EEBC7FC39306_A177AABE7E0D5E7D__CCTOR_OFFSET UNITYSDK_OFFSET(0x432D2D0)
#define E564EEBC7FC39306_A177AABE7E0D5E7D__CTOR_OFFSET UNITYSDK_OFFSET(0x432D370)

namespace E564EEBC7FC39306
{
	inline static constexpr unsigned int A177AABE7E0D5E7D_TypeDefinitionIndex = 13458;

	class A177AABE7E0D5E7D : public ::A418C49FA6A8C1F7::B9A8F16A870DE44E
	{
	public:
		static ::System::String** StaticGet_E01E49E0EDEFB827()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(A177AABE7E0D5E7D_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E564EEBC7FC39306_A177AABE7E0D5E7D__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E564EEBC7FC39306_A177AABE7E0D5E7D__CTOR_OFFSET))(this);
		}
	};
}
