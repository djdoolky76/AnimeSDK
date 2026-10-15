#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEFFCJHHLNG;
namespace System { class Object; }

#define EEFFCJHHLNG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E23A5B0)
#define EEFFCJHHLNG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E23A5F0)
#define EEFFCJHHLNG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E23A600)

inline static constexpr unsigned int EEFFCJHHLNG___c_TypeDefinitionIndex = 30113;

	class EEFFCJHHLNG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEFFCJHHLNG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFFCJHHLNG___C_CTOR_OFFSET))(this);
		}

		::EEFFCJHHLNG* __cctor_b__23_0()
		{
			return ((::EEFFCJHHLNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFFCJHHLNG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
