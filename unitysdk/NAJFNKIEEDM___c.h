#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAJFNKIEEDM;
namespace System { class Object; }

#define NAJFNKIEEDM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC4CD0)
#define NAJFNKIEEDM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC4D10)
#define NAJFNKIEEDM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EAC4D20)

	class NAJFNKIEEDM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C850);
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
