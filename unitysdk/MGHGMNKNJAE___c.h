#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGHGMNKNJAE;
namespace System { class Object; }

#define MGHGMNKNJAE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD76850)
#define MGHGMNKNJAE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD76890)
#define MGHGMNKNJAE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FD768A0)

inline static constexpr unsigned int MGHGMNKNJAE___c_TypeDefinitionIndex = 30312;

	class MGHGMNKNJAE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56E30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGHGMNKNJAE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHGMNKNJAE___C_CTOR_OFFSET))(this);
		}

		::MGHGMNKNJAE* __cctor_b__23_0()
		{
			return ((::MGHGMNKNJAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHGMNKNJAE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
