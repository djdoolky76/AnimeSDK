#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELEMFBMOMMM;
namespace System { class Object; }

#define ELEMFBMOMMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5B2CB0)
#define ELEMFBMOMMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5B2CF0)
#define ELEMFBMOMMM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F5B2D00)

inline static constexpr unsigned int ELEMFBMOMMM___c_TypeDefinitionIndex = 28922;

	class ELEMFBMOMMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49A10);
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
