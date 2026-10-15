#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLFHACPLDJE;
namespace System { class Object; }

#define FLFHACPLDJE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3BA470)
#define FLFHACPLDJE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3BA4B0)
#define FLFHACPLDJE___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x1E3BA4C0)

inline static constexpr unsigned int FLFHACPLDJE___c_TypeDefinitionIndex = 29182;

	class FLFHACPLDJE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLFHACPLDJE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLFHACPLDJE___C_CTOR_OFFSET))(this);
		}

		::FLFHACPLDJE* __cctor_b__32_0()
		{
			return ((::FLFHACPLDJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLFHACPLDJE___C___CCTOR_B__32_0_OFFSET))(this);
		}

	};
