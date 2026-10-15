#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKNBFMJGKBM;
namespace System { class Object; }

#define MKNBFMJGKBM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA2F170)
#define MKNBFMJGKBM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2F1B0)
#define MKNBFMJGKBM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA2F1C0)

inline static constexpr unsigned int MKNBFMJGKBM___c_TypeDefinitionIndex = 32985;

	class MKNBFMJGKBM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKNBFMJGKBM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNBFMJGKBM___C_CTOR_OFFSET))(this);
		}

		::MKNBFMJGKBM* __cctor_b__28_0()
		{
			return ((::MKNBFMJGKBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNBFMJGKBM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
