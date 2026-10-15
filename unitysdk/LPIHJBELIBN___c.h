#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPIHJBELIBN;
namespace System { class Object; }

#define LPIHJBELIBN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A1810)
#define LPIHJBELIBN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A1840)
#define LPIHJBELIBN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9A1850)

inline static constexpr unsigned int LPIHJBELIBN___c_TypeDefinitionIndex = 26993;

	class LPIHJBELIBN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPIHJBELIBN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIHJBELIBN___C_CTOR_OFFSET))(this);
		}

		::LPIHJBELIBN* __cctor_b__33_0()
		{
			return ((::LPIHJBELIBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIHJBELIBN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
