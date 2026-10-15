#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMOAEPFPCAP;
namespace System { class Object; }

#define LMOAEPFPCAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E97FC30)
#define LMOAEPFPCAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E97FC70)
#define LMOAEPFPCAP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E97FC80)

inline static constexpr unsigned int LMOAEPFPCAP___c_TypeDefinitionIndex = 27660;

	class LMOAEPFPCAP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3EEE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMOAEPFPCAP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOAEPFPCAP___C_CTOR_OFFSET))(this);
		}

		::LMOAEPFPCAP* __cctor_b__23_0()
		{
			return ((::LMOAEPFPCAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMOAEPFPCAP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
