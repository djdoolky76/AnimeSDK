#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIHEHNIAGPF;
namespace System { class Object; }

#define HIHEHNIAGPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F890FB0)
#define HIHEHNIAGPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F890FF0)
#define HIHEHNIAGPF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F891000)

inline static constexpr unsigned int HIHEHNIAGPF___c_TypeDefinitionIndex = 31914;

	class HIHEHNIAGPF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x315B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIHEHNIAGPF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIHEHNIAGPF___C_CTOR_OFFSET))(this);
		}

		::HIHEHNIAGPF* __cctor_b__28_0()
		{
			return ((::HIHEHNIAGPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIHEHNIAGPF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
