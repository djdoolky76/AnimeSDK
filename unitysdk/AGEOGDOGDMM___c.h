#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGEOGDOGDMM;
namespace System { class Object; }

#define AGEOGDOGDMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0FD7A0)
#define AGEOGDOGDMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0FD7D0)
#define AGEOGDOGDMM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0FD7E0)

inline static constexpr unsigned int AGEOGDOGDMM___c_TypeDefinitionIndex = 32913;

	class AGEOGDOGDMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x371D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGEOGDOGDMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEOGDOGDMM___C_CTOR_OFFSET))(this);
		}

		::AGEOGDOGDMM* __cctor_b__23_0()
		{
			return ((::AGEOGDOGDMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEOGDOGDMM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
