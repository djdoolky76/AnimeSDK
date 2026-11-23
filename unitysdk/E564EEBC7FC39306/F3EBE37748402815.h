#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A418C49FA6A8C1F7/B9A8F16A870DE44E.h"

namespace A418C49FA6A8C1F7 { class AC79F04A5D180E87; }
namespace System { class String; }

#define E564EEBC7FC39306_F3EBE37748402815_BB4F0164C4C9D40E_OFFSET UNITYSDK_OFFSET(0x42BDE70)
#define E564EEBC7FC39306_F3EBE37748402815__CCTOR_OFFSET UNITYSDK_OFFSET(0x42BDBC0)
#define E564EEBC7FC39306_F3EBE37748402815__CTOR_OFFSET UNITYSDK_OFFSET(0x42BDCF0)

namespace E564EEBC7FC39306
{
	inline static constexpr unsigned int F3EBE37748402815_TypeDefinitionIndex = 14090;

	class F3EBE37748402815 : public ::A418C49FA6A8C1F7::B9A8F16A870DE44E
	{
	public:
		static ::System::String** StaticGet_E01E49E0EDEFB827()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(F3EBE37748402815_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::String** StaticGet_AF57F6AFA8B15FCC()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(F3EBE37748402815_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::String** StaticGet_E0DD84FED5C12147()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(F3EBE37748402815_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		::A418C49FA6A8C1F7::AC79F04A5D180E87* AC21C33B0A8FC5CA; // 0x3D8

		::System::Void BB4F0164C4C9D40E(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + E564EEBC7FC39306_F3EBE37748402815_BB4F0164C4C9D40E_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E564EEBC7FC39306_F3EBE37748402815__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E564EEBC7FC39306_F3EBE37748402815__CTOR_OFFSET))(this);
		}
	};
}
