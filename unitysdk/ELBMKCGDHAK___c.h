#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELBMKCGDHAK;
namespace System { class Object; }

#define ELBMKCGDHAK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E29C3D0)
#define ELBMKCGDHAK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E29C410)
#define ELBMKCGDHAK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E29C420)

inline static constexpr unsigned int ELBMKCGDHAK___c_TypeDefinitionIndex = 29882;

	class ELBMKCGDHAK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELBMKCGDHAK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBMKCGDHAK___C_CTOR_OFFSET))(this);
		}

		::ELBMKCGDHAK* __cctor_b__33_0()
		{
			return ((::ELBMKCGDHAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBMKCGDHAK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
