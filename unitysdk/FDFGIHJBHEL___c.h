#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDFGIHJBHEL;
namespace System { class Object; }

#define FDFGIHJBHEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E355B50)
#define FDFGIHJBHEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E355B90)
#define FDFGIHJBHEL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E355BA0)

inline static constexpr unsigned int FDFGIHJBHEL___c_TypeDefinitionIndex = 25739;

	class FDFGIHJBHEL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDFGIHJBHEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFGIHJBHEL___C_CTOR_OFFSET))(this);
		}

		::FDFGIHJBHEL* __cctor_b__28_0()
		{
			return ((::FDFGIHJBHEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFGIHJBHEL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
