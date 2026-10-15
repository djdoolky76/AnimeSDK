#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECOGPFKDJDF;
namespace System { class Object; }

#define ECOGPFKDJDF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E22B5B0)
#define ECOGPFKDJDF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E22B5F0)
#define ECOGPFKDJDF___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E22B600)

inline static constexpr unsigned int ECOGPFKDJDF___c_TypeDefinitionIndex = 25075;

	class ECOGPFKDJDF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43110);
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
