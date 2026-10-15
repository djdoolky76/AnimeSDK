#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHFHMCLBJKI;
namespace System { class Object; }

#define GHFHMCLBJKI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E45B630)
#define GHFHMCLBJKI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E45B670)
#define GHFHMCLBJKI___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E45B680)

inline static constexpr unsigned int GHFHMCLBJKI___c_TypeDefinitionIndex = 34612;

	class GHFHMCLBJKI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16800);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHFHMCLBJKI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFHMCLBJKI___C_CTOR_OFFSET))(this);
		}

		::GHFHMCLBJKI* __cctor_b__43_0()
		{
			return ((::GHFHMCLBJKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFHMCLBJKI___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
