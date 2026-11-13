#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAJFNKIEEDM;
namespace System { class Object; }

#define NAJFNKIEEDM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2014CDE0)
#define NAJFNKIEEDM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2014CE20)
#define NAJFNKIEEDM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2014CE30)

inline static constexpr unsigned int NAJFNKIEEDM___c_TypeDefinitionIndex = 32525;

	class NAJFNKIEEDM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56E20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAJFNKIEEDM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJFNKIEEDM___C_CTOR_OFFSET))(this);
		}

		::NAJFNKIEEDM* __cctor_b__23_0()
		{
			return ((::NAJFNKIEEDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAJFNKIEEDM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
