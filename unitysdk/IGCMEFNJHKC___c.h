#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGCMEFNJHKC;
namespace System { class Object; }

#define IGCMEFNJHKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E64A1D0)
#define IGCMEFNJHKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E64A200)
#define IGCMEFNJHKC___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E64A210)

inline static constexpr unsigned int IGCMEFNJHKC___c_TypeDefinitionIndex = 25401;

	class IGCMEFNJHKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4ABC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGCMEFNJHKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCMEFNJHKC___C_CTOR_OFFSET))(this);
		}

		::IGCMEFNJHKC* __cctor_b__43_0()
		{
			return ((::IGCMEFNJHKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCMEFNJHKC___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
