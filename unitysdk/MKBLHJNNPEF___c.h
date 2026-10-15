#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKBLHJNNPEF;
namespace System { class Object; }

#define MKBLHJNNPEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA245D0)
#define MKBLHJNNPEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA24600)
#define MKBLHJNNPEF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EA24610)

inline static constexpr unsigned int MKBLHJNNPEF___c_TypeDefinitionIndex = 30097;

	class MKBLHJNNPEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKBLHJNNPEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBLHJNNPEF___C_CTOR_OFFSET))(this);
		}

		::MKBLHJNNPEF* __cctor_b__33_0()
		{
			return ((::MKBLHJNNPEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKBLHJNNPEF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
