#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECOGPFKDJDF;
namespace System { class Object; }

#define ECOGPFKDJDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F37EF30)
#define ECOGPFKDJDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F37EF70)
#define ECOGPFKDJDF___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1F37EF80)

inline static constexpr unsigned int ECOGPFKDJDF___c_TypeDefinitionIndex = 25553;

	class ECOGPFKDJDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x457F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECOGPFKDJDF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECOGPFKDJDF___C_CTOR_OFFSET))(this);
		}

		::ECOGPFKDJDF* __cctor_b__48_0()
		{
			return ((::ECOGPFKDJDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECOGPFKDJDF___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
