#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDELKPPJIGF;
namespace System { class Object; }

#define MDELKPPJIGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D3FE0)
#define MDELKPPJIGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D4020)
#define MDELKPPJIGF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9D4030)

inline static constexpr unsigned int MDELKPPJIGF___c_TypeDefinitionIndex = 27366;

	class MDELKPPJIGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B9A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDELKPPJIGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDELKPPJIGF___C_CTOR_OFFSET))(this);
		}

		::MDELKPPJIGF* __cctor_b__28_0()
		{
			return ((::MDELKPPJIGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDELKPPJIGF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
