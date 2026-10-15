#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOEONJEAGPA;
namespace System { class Object; }

#define DOEONJEAGPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1FFCD0)
#define DOEONJEAGPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1FFD10)
#define DOEONJEAGPA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1FFD20)

inline static constexpr unsigned int DOEONJEAGPA___c_TypeDefinitionIndex = 33693;

	class DOEONJEAGPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOEONJEAGPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEONJEAGPA___C_CTOR_OFFSET))(this);
		}

		::DOEONJEAGPA* __cctor_b__28_0()
		{
			return ((::DOEONJEAGPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEONJEAGPA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
