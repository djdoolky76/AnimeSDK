#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPAGFCCNCHE;
namespace System { class Object; }

#define HPAGFCCNCHE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F4070)
#define HPAGFCCNCHE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F40B0)
#define HPAGFCCNCHE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5F40C0)

inline static constexpr unsigned int HPAGFCCNCHE___c_TypeDefinitionIndex = 34763;

	class HPAGFCCNCHE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x502F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPAGFCCNCHE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAGFCCNCHE___C_CTOR_OFFSET))(this);
		}

		::HPAGFCCNCHE* __cctor_b__23_0()
		{
			return ((::HPAGFCCNCHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAGFCCNCHE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
