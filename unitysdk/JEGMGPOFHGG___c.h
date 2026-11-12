#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEGMGPOFHGG;
namespace System { class Object; }

#define JEGMGPOFHGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA28800)
#define JEGMGPOFHGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA28830)
#define JEGMGPOFHGG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FA28840)

inline static constexpr unsigned int JEGMGPOFHGG___c_TypeDefinitionIndex = 27030;

	class JEGMGPOFHGG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x61E20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEGMGPOFHGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGMGPOFHGG___C_CTOR_OFFSET))(this);
		}

		::JEGMGPOFHGG* __cctor_b__23_0()
		{
			return ((::JEGMGPOFHGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGMGPOFHGG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
