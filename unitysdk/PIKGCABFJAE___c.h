#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIKGCABFJAE;
namespace System { class Object; }

#define PIKGCABFJAE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF3D820)
#define PIKGCABFJAE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF3D860)
#define PIKGCABFJAE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF3D870)

inline static constexpr unsigned int PIKGCABFJAE___c_TypeDefinitionIndex = 32403;

	class PIKGCABFJAE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x354A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIKGCABFJAE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKGCABFJAE___C_CTOR_OFFSET))(this);
		}

		::PIKGCABFJAE* __cctor_b__28_0()
		{
			return ((::PIKGCABFJAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKGCABFJAE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
