#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPAGFCCNCHE;
namespace System { class Object; }

#define HPAGFCCNCHE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8F08E0)
#define HPAGFCCNCHE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8F0920)
#define HPAGFCCNCHE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F8F0930)

inline static constexpr unsigned int HPAGFCCNCHE___c_TypeDefinitionIndex = 35691;

	class HPAGFCCNCHE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41E70);
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
