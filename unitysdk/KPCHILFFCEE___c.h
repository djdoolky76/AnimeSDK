#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPCHILFFCEE;
namespace System { class Object; }

#define KPCHILFFCEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E88B150)
#define KPCHILFFCEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E88B190)
#define KPCHILFFCEE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E88B1A0)

inline static constexpr unsigned int KPCHILFFCEE___c_TypeDefinitionIndex = 30581;

	class KPCHILFFCEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPCHILFFCEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCHILFFCEE___C_CTOR_OFFSET))(this);
		}

		::KPCHILFFCEE* __cctor_b__28_0()
		{
			return ((::KPCHILFFCEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCHILFFCEE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
