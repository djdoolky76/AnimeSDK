#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJEMMEGKKHE;
namespace System { class Object; }

#define FJEMMEGKKHE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E374090)
#define FJEMMEGKKHE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3740D0)
#define FJEMMEGKKHE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3740E0)

inline static constexpr unsigned int FJEMMEGKKHE___c_TypeDefinitionIndex = 30721;

	class FJEMMEGKKHE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59BC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJEMMEGKKHE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEMMEGKKHE___C_CTOR_OFFSET))(this);
		}

		::FJEMMEGKKHE* __cctor_b__23_0()
		{
			return ((::FJEMMEGKKHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEMMEGKKHE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
