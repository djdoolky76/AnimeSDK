#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIMPABPFMPG;
namespace System { class Object; }

#define HIMPABPFMPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E59D6D0)
#define HIMPABPFMPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E59D700)
#define HIMPABPFMPG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E59D710)

inline static constexpr unsigned int HIMPABPFMPG___c_TypeDefinitionIndex = 25955;

	class HIMPABPFMPG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIMPABPFMPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMPABPFMPG___C_CTOR_OFFSET))(this);
		}

		::HIMPABPFMPG* __cctor_b__18_0()
		{
			return ((::HIMPABPFMPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMPABPFMPG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
