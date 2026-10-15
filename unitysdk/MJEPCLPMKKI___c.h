#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJEPCLPMKKI;
namespace System { class Object; }

#define MJEPCLPMKKI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA1B730)
#define MJEPCLPMKKI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA1B760)
#define MJEPCLPMKKI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA1B770)

inline static constexpr unsigned int MJEPCLPMKKI___c_TypeDefinitionIndex = 32997;

	class MJEPCLPMKKI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJEPCLPMKKI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEPCLPMKKI___C_CTOR_OFFSET))(this);
		}

		::MJEPCLPMKKI* __cctor_b__23_0()
		{
			return ((::MJEPCLPMKKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEPCLPMKKI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
