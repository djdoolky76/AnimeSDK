#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPMDNMMDCCM;
namespace System { class Object; }

#define CPMDNMMDCCM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1447F0)
#define CPMDNMMDCCM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E144830)
#define CPMDNMMDCCM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E144840)

inline static constexpr unsigned int CPMDNMMDCCM___c_TypeDefinitionIndex = 27572;

	class CPMDNMMDCCM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22F00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPMDNMMDCCM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMDNMMDCCM___C_CTOR_OFFSET))(this);
		}

		::CPMDNMMDCCM* __cctor_b__23_0()
		{
			return ((::CPMDNMMDCCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMDNMMDCCM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
