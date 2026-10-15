#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELEMFBMOMMM;
namespace System { class Object; }

#define ELEMFBMOMMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2CE820)
#define ELEMFBMOMMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2CE860)
#define ELEMFBMOMMM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2CE870)

inline static constexpr unsigned int ELEMFBMOMMM___c_TypeDefinitionIndex = 28332;

	class ELEMFBMOMMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELEMFBMOMMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELEMFBMOMMM___C_CTOR_OFFSET))(this);
		}

		::ELEMFBMOMMM* __cctor_b__23_0()
		{
			return ((::ELEMFBMOMMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELEMFBMOMMM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
