#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIIGIPHOJAC;
namespace System { class Object; }

#define DIIGIPHOJAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F49AC80)
#define DIIGIPHOJAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F49ACC0)
#define DIIGIPHOJAC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F49ACD0)

inline static constexpr unsigned int DIIGIPHOJAC___c_TypeDefinitionIndex = 26980;

	class DIIGIPHOJAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIIGIPHOJAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIGIPHOJAC___C_CTOR_OFFSET))(this);
		}

		::DIIGIPHOJAC* __cctor_b__28_0()
		{
			return ((::DIIGIPHOJAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIGIPHOJAC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
