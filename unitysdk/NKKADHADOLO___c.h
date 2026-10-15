#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKKADHADOLO;
namespace System { class Object; }

#define NKKADHADOLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB2D720)
#define NKKADHADOLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB2D760)
#define NKKADHADOLO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB2D770)

inline static constexpr unsigned int NKKADHADOLO___c_TypeDefinitionIndex = 25577;

	class NKKADHADOLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKKADHADOLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKKADHADOLO___C_CTOR_OFFSET))(this);
		}

		::NKKADHADOLO* __cctor_b__23_0()
		{
			return ((::NKKADHADOLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKKADHADOLO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
