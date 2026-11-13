#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFDJLHCAKAP;
namespace System { class Object; }

#define FFDJLHCAKAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205480D0)
#define FFDJLHCAKAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20548110)
#define FFDJLHCAKAP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20548120)

inline static constexpr unsigned int FFDJLHCAKAP___c_TypeDefinitionIndex = 34376;

	class FFDJLHCAKAP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BBF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFDJLHCAKAP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDJLHCAKAP___C_CTOR_OFFSET))(this);
		}

		::FFDJLHCAKAP* __cctor_b__28_0()
		{
			return ((::FFDJLHCAKAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFDJLHCAKAP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
