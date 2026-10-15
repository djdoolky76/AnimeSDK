#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOPJFJCLIAH;
namespace System { class Object; }

#define DOPJFJCLIAH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1DB5F0)
#define DOPJFJCLIAH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1DB630)
#define DOPJFJCLIAH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1DB640)

inline static constexpr unsigned int DOPJFJCLIAH___c_TypeDefinitionIndex = 25685;

	class DOPJFJCLIAH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x395D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOPJFJCLIAH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPJFJCLIAH___C_CTOR_OFFSET))(this);
		}

		::DOPJFJCLIAH* __cctor_b__28_0()
		{
			return ((::DOPJFJCLIAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPJFJCLIAH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
