#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBCBDJNKFEB;
namespace System { class Object; }

#define MBCBDJNKFEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9E10C0)
#define MBCBDJNKFEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E10F0)
#define MBCBDJNKFEB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9E1100)

inline static constexpr unsigned int MBCBDJNKFEB___c_TypeDefinitionIndex = 32669;

	class MBCBDJNKFEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x430A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBCBDJNKFEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBCBDJNKFEB___C_CTOR_OFFSET))(this);
		}

		::MBCBDJNKFEB* __cctor_b__33_0()
		{
			return ((::MBCBDJNKFEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBCBDJNKFEB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
