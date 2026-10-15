#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOMHHDACBOF;
namespace System { class Object; }

#define MOMHHDACBOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAAFF10)
#define MOMHHDACBOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAAFF50)
#define MOMHHDACBOF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAAFF60)

inline static constexpr unsigned int MOMHHDACBOF___c_TypeDefinitionIndex = 34898;

	class MOMHHDACBOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5AB20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOMHHDACBOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMHHDACBOF___C_CTOR_OFFSET))(this);
		}

		::MOMHHDACBOF* __cctor_b__28_0()
		{
			return ((::MOMHHDACBOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMHHDACBOF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
