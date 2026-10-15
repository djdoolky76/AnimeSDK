#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGMBIHBHLFK;
namespace System { class Object; }

#define CGMBIHBHLFK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0B38B0)
#define CGMBIHBHLFK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B38F0)
#define CGMBIHBHLFK___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E0B3900)

inline static constexpr unsigned int CGMBIHBHLFK___c_TypeDefinitionIndex = 32725;

	class CGMBIHBHLFK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGMBIHBHLFK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMBIHBHLFK___C_CTOR_OFFSET))(this);
		}

		::CGMBIHBHLFK* __cctor_b__18_0()
		{
			return ((::CGMBIHBHLFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGMBIHBHLFK___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
