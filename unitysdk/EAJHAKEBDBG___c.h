#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAJHAKEBDBG;
namespace System { class Object; }

#define EAJHAKEBDBG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F50CF60)
#define EAJHAKEBDBG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F50CFA0)
#define EAJHAKEBDBG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F50CFB0)

inline static constexpr unsigned int EAJHAKEBDBG___c_TypeDefinitionIndex = 26686;

	class EAJHAKEBDBG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAJHAKEBDBG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJHAKEBDBG___C_CTOR_OFFSET))(this);
		}

		::EAJHAKEBDBG* __cctor_b__23_0()
		{
			return ((::EAJHAKEBDBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJHAKEBDBG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
