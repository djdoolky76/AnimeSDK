#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNMGHLJKBDA;
namespace System { class Object; }

#define KNMGHLJKBDA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A7900)
#define KNMGHLJKBDA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A7940)
#define KNMGHLJKBDA___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E8A7950)

inline static constexpr unsigned int KNMGHLJKBDA___c_TypeDefinitionIndex = 25107;

	class KNMGHLJKBDA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24C20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNMGHLJKBDA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGHLJKBDA___C_CTOR_OFFSET))(this);
		}

		::KNMGHLJKBDA* __cctor_b__48_0()
		{
			return ((::KNMGHLJKBDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNMGHLJKBDA___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
