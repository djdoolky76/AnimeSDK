#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A418C49FA6A8C1F7/B9A8F16A870DE44E.h"

namespace System { class String; }

#define E564EEBC7FC39306_EA7AA7223D38A666__CCTOR_OFFSET UNITYSDK_OFFSET(0x432D410)
#define E564EEBC7FC39306_EA7AA7223D38A666__CTOR_OFFSET UNITYSDK_OFFSET(0x432D500)

namespace E564EEBC7FC39306
{
	inline static constexpr unsigned int EA7AA7223D38A666_TypeDefinitionIndex = 13488;

	class EA7AA7223D38A666 : public ::A418C49FA6A8C1F7::B9A8F16A870DE44E
	{
	public:
		static ::System::String** StaticGet_E01E49E0EDEFB827()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EA7AA7223D38A666_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::String** StaticGet_FD3885D0E492ECDA()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EA7AA7223D38A666_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E564EEBC7FC39306_EA7AA7223D38A666__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E564EEBC7FC39306_EA7AA7223D38A666__CTOR_OFFSET))(this);
		}
	};
}
