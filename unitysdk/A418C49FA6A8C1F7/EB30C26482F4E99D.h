#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A418C49FA6A8C1F7/F804F995A42B7A78.h"

namespace A418C49FA6A8C1F7 { class E123BBDB667788AD; }
namespace System { class Action; }
namespace System { class String; }

#define A418C49FA6A8C1F7_EB30C26482F4E99D_BC2304DE93944977_OFFSET UNITYSDK_OFFSET(0x433DEB0)
#define A418C49FA6A8C1F7_EB30C26482F4E99D__CCTOR_OFFSET UNITYSDK_OFFSET(0x433DF70)
#define A418C49FA6A8C1F7_EB30C26482F4E99D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x433DFD0)
#define A418C49FA6A8C1F7_EB30C26482F4E99D__CTOR_OFFSET UNITYSDK_OFFSET(0x433E0A0)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int EB30C26482F4E99D_TypeDefinitionIndex = 13579;

	class EB30C26482F4E99D : public ::A418C49FA6A8C1F7::F804F995A42B7A78
	{
	public:
		static ::System::String** StaticGet_E01E49E0EDEFB827()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EB30C26482F4E99D_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::A418C49FA6A8C1F7::E123BBDB667788AD* A686D9D9CC57E2CF; // 0x4B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_EB30C26482F4E99D__CTOR_OFFSET))(this);
		}

		::System::Void BC2304DE93944977(::System::Action* BF7149725D77E5E1, ::System::Int64 B4A58A4ABADA5C6F, ::System::Int64 B0798EC32ABABFA3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_EB30C26482F4E99D_BC2304DE93944977_OFFSET))(this, BF7149725D77E5E1, B4A58A4ABADA5C6F, B0798EC32ABABFA3);
		}

		::System::Void _ctor_1(::System::Action* BF7149725D77E5E1, ::System::Int64 B4A58A4ABADA5C6F, ::System::Int64 B0798EC32ABABFA3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_EB30C26482F4E99D__CTOR_1_OFFSET))(this, BF7149725D77E5E1, B4A58A4ABADA5C6F, B0798EC32ABABFA3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_EB30C26482F4E99D__CCTOR_OFFSET))();
		}
	};
}
