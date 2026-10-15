#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOEIBOFDLCM;
namespace System { class Object; }

#define KOEIBOFDLCM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8B0250)
#define KOEIBOFDLCM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B0290)
#define KOEIBOFDLCM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8B02A0)

inline static constexpr unsigned int KOEIBOFDLCM___c_TypeDefinitionIndex = 31878;

	class KOEIBOFDLCM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOEIBOFDLCM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOEIBOFDLCM___C_CTOR_OFFSET))(this);
		}

		::KOEIBOFDLCM* __cctor_b__23_0()
		{
			return ((::KOEIBOFDLCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOEIBOFDLCM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
