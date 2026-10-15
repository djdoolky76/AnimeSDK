#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALJJNBKGEOC;
namespace System { class Object; }

#define ALJJNBKGEOC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4E3AE0)
#define ALJJNBKGEOC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E3B20)
#define ALJJNBKGEOC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4E3B30)

inline static constexpr unsigned int ALJJNBKGEOC___c_TypeDefinitionIndex = 33355;

	class ALJJNBKGEOC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42DE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALJJNBKGEOC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJJNBKGEOC___C_CTOR_OFFSET))(this);
		}

		::ALJJNBKGEOC* __cctor_b__23_0()
		{
			return ((::ALJJNBKGEOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALJJNBKGEOC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
