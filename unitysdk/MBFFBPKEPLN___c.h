#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBFFBPKEPLN;
namespace System { class Object; }

#define MBFFBPKEPLN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9E4A80)
#define MBFFBPKEPLN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E4AC0)
#define MBFFBPKEPLN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9E4AD0)

inline static constexpr unsigned int MBFFBPKEPLN___c_TypeDefinitionIndex = 26475;

	class MBFFBPKEPLN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBFFBPKEPLN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFFBPKEPLN___C_CTOR_OFFSET))(this);
		}

		::MBFFBPKEPLN* __cctor_b__23_0()
		{
			return ((::MBFFBPKEPLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFFBPKEPLN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
