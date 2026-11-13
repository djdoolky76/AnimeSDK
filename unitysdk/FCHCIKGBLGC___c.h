#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCHCIKGBLGC;
namespace System { class Object; }

#define FCHCIKGBLGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8A8020)
#define FCHCIKGBLGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8A8060)
#define FCHCIKGBLGC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F8A8070)

inline static constexpr unsigned int FCHCIKGBLGC___c_TypeDefinitionIndex = 34660;

	class FCHCIKGBLGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43B00);
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
