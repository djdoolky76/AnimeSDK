#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PICONFLHMCD;
namespace System { class Object; }

#define PICONFLHMCD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF166D0)
#define PICONFLHMCD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF16710)
#define PICONFLHMCD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF16720)

inline static constexpr unsigned int PICONFLHMCD___c_TypeDefinitionIndex = 30898;

	class PICONFLHMCD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34820);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PICONFLHMCD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICONFLHMCD___C_CTOR_OFFSET))(this);
		}

		::PICONFLHMCD* __cctor_b__23_0()
		{
			return ((::PICONFLHMCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICONFLHMCD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
