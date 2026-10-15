#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKKELLBOGIO;
namespace System { class Object; }

#define DKKELLBOGIO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D8F10)
#define DKKELLBOGIO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D8F50)
#define DKKELLBOGIO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1D8F60)

inline static constexpr unsigned int DKKELLBOGIO___c_TypeDefinitionIndex = 28978;

	class DKKELLBOGIO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKKELLBOGIO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKELLBOGIO___C_CTOR_OFFSET))(this);
		}

		::DKKELLBOGIO* __cctor_b__23_0()
		{
			return ((::DKKELLBOGIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKKELLBOGIO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
