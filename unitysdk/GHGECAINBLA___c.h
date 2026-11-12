#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHGECAINBLA;
namespace System { class Object; }

#define GHGECAINBLA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F77A300)
#define GHGECAINBLA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F77A340)
#define GHGECAINBLA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F77A350)

inline static constexpr unsigned int GHGECAINBLA___c_TypeDefinitionIndex = 31350;

	class GHGECAINBLA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFB40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHGECAINBLA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHGECAINBLA___C_CTOR_OFFSET))(this);
		}

		::GHGECAINBLA* __cctor_b__23_0()
		{
			return ((::GHGECAINBLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHGECAINBLA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
