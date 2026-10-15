#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFAAPIGOAEN;
namespace System { class Object; }

#define AFAAPIGOAEN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E2590)
#define AFAAPIGOAEN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E25D0)
#define AFAAPIGOAEN___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E0E25E0)

inline static constexpr unsigned int AFAAPIGOAEN___c_TypeDefinitionIndex = 27923;

	class AFAAPIGOAEN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x349A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFAAPIGOAEN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAAPIGOAEN___C_CTOR_OFFSET))(this);
		}

		::AFAAPIGOAEN* __cctor_b__38_0()
		{
			return ((::AFAAPIGOAEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAAPIGOAEN___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
