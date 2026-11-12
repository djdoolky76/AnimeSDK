#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBJDNDEIKDM;
namespace System { class Object; }

#define DBJDNDEIKDM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F437900)
#define DBJDNDEIKDM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F437940)
#define DBJDNDEIKDM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F437950)

inline static constexpr unsigned int DBJDNDEIKDM___c_TypeDefinitionIndex = 26474;

	class DBJDNDEIKDM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x244B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBJDNDEIKDM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJDNDEIKDM___C_CTOR_OFFSET))(this);
		}

		::DBJDNDEIKDM* __cctor_b__23_0()
		{
			return ((::DBJDNDEIKDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBJDNDEIKDM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
