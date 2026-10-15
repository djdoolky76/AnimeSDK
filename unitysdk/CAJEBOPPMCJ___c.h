#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAJEBOPPMCJ;
namespace System { class Object; }

#define CAJEBOPPMCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E02FFF0)
#define CAJEBOPPMCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E030020)
#define CAJEBOPPMCJ___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E030030)

inline static constexpr unsigned int CAJEBOPPMCJ___c_TypeDefinitionIndex = 32643;

	class CAJEBOPPMCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAJEBOPPMCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJEBOPPMCJ___C_CTOR_OFFSET))(this);
		}

		::CAJEBOPPMCJ* __cctor_b__48_0()
		{
			return ((::CAJEBOPPMCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJEBOPPMCJ___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
