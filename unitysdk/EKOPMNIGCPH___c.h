#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKOPMNIGCPH;
namespace System { class Object; }

#define EKOPMNIGCPH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE5DEF0)
#define EKOPMNIGCPH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE5DF30)
#define EKOPMNIGCPH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FE5DF40)

inline static constexpr unsigned int EKOPMNIGCPH___c_TypeDefinitionIndex = 31771;

	class EKOPMNIGCPH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKOPMNIGCPH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOPMNIGCPH___C_CTOR_OFFSET))(this);
		}

		::EKOPMNIGCPH* __cctor_b__28_0()
		{
			return ((::EKOPMNIGCPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOPMNIGCPH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
