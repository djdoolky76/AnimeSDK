#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMLGHIFLBNN;
namespace System { class Object; }

#define NMLGHIFLBNN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB4C720)
#define NMLGHIFLBNN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB4C760)
#define NMLGHIFLBNN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB4C770)

inline static constexpr unsigned int NMLGHIFLBNN___c_TypeDefinitionIndex = 26391;

	class NMLGHIFLBNN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6ABC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMLGHIFLBNN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLGHIFLBNN___C_CTOR_OFFSET))(this);
		}

		::NMLGHIFLBNN* __cctor_b__28_0()
		{
			return ((::NMLGHIFLBNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLGHIFLBNN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
