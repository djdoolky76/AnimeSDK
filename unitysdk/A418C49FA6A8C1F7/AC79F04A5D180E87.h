#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A418C49FA6A8C1F7/F804F995A42B7A78.h"

namespace System { class String; }

#define A418C49FA6A8C1F7_AC79F04A5D180E87__CCTOR_OFFSET UNITYSDK_OFFSET(0x4366CD0)
#define A418C49FA6A8C1F7_AC79F04A5D180E87__CTOR_1_OFFSET UNITYSDK_OFFSET(0x4366D30)
#define A418C49FA6A8C1F7_AC79F04A5D180E87__CTOR_OFFSET UNITYSDK_OFFSET(0x4366DE0)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int AC79F04A5D180E87_TypeDefinitionIndex = 13735;

	class AC79F04A5D180E87 : public ::A418C49FA6A8C1F7::F804F995A42B7A78
	{
	public:
		static ::System::String** StaticGet_E01E49E0EDEFB827()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AC79F04A5D180E87_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_AC79F04A5D180E87__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_AC79F04A5D180E87__CCTOR_OFFSET))();
		}

		::System::Void _ctor_1(::System::String* E97E8D008427A296)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_AC79F04A5D180E87__CTOR_1_OFFSET))(this, E97E8D008427A296);
		}
	};
}
