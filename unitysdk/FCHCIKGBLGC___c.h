#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCHCIKGBLGC;
namespace System { class Object; }

#define FCHCIKGBLGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E347C80)
#define FCHCIKGBLGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E347CC0)
#define FCHCIKGBLGC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E347CD0)

inline static constexpr unsigned int FCHCIKGBLGC___c_TypeDefinitionIndex = 33745;

	class FCHCIKGBLGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A3B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCHCIKGBLGC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHCIKGBLGC___C_CTOR_OFFSET))(this);
		}

		::FCHCIKGBLGC* __cctor_b__33_0()
		{
			return ((::FCHCIKGBLGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHCIKGBLGC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
