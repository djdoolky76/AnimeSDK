#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBPDIPLJMKN;
namespace System { class Object; }

#define MBPDIPLJMKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD390D0)
#define MBPDIPLJMKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD39110)
#define MBPDIPLJMKN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FD39120)

inline static constexpr unsigned int MBPDIPLJMKN___c_TypeDefinitionIndex = 29829;

	class MBPDIPLJMKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47EA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBPDIPLJMKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPDIPLJMKN___C_CTOR_OFFSET))(this);
		}

		::MBPDIPLJMKN* __cctor_b__28_0()
		{
			return ((::MBPDIPLJMKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPDIPLJMKN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
