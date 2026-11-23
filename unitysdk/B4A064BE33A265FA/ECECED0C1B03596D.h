#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define B4A064BE33A265FA_ECECED0C1B03596D_AB180AB74660224E_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define B4A064BE33A265FA_ECECED0C1B03596D_B45C7D66DF242736_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define B4A064BE33A265FA_ECECED0C1B03596D_F2263F0DE87F5130_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define B4A064BE33A265FA_ECECED0C1B03596D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace B4A064BE33A265FA
{
	inline static constexpr unsigned int ECECED0C1B03596D_TypeDefinitionIndex = 16970;

	class ECECED0C1B03596D : public ::System::Object
	{
	public:
		::System::String* B72D128B4F5AD6D3; // 0x10
		::Il2CppArray<::System::Byte>* A40A573BEB3F7F32; // 0x18

		::System::String* AB180AB74660224E()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + B4A064BE33A265FA_ECECED0C1B03596D_AB180AB74660224E_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* B45C7D66DF242736()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B4A064BE33A265FA_ECECED0C1B03596D_B45C7D66DF242736_OFFSET))(this);
		}

		::System::Void F2263F0DE87F5130(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + B4A064BE33A265FA_ECECED0C1B03596D_F2263F0DE87F5130_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B4A064BE33A265FA_ECECED0C1B03596D__CTOR_OFFSET))(this);
		}
	};
}
