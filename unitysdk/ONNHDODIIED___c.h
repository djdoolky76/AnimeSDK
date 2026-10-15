#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONNHDODIIED;
namespace System { class Object; }

#define ONNHDODIIED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DED1700)
#define ONNHDODIIED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DED1740)
#define ONNHDODIIED___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DED1750)

inline static constexpr unsigned int ONNHDODIIED___c_TypeDefinitionIndex = 25788;

	class ONNHDODIIED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E1C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONNHDODIIED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNHDODIIED___C_CTOR_OFFSET))(this);
		}

		::ONNHDODIIED* __cctor_b__23_0()
		{
			return ((::ONNHDODIIED*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNHDODIIED___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
