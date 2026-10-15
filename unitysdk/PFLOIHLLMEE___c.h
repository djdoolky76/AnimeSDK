#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFLOIHLLMEE;
namespace System { class Object; }

#define PFLOIHLLMEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEF99B0)
#define PFLOIHLLMEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF99E0)
#define PFLOIHLLMEE___C___CCTOR_B__46_0_OFFSET UNITYSDK_OFFSET(0x1DEF99F0)

inline static constexpr unsigned int PFLOIHLLMEE___c_TypeDefinitionIndex = 33629;

	class PFLOIHLLMEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31D60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFLOIHLLMEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFLOIHLLMEE___C_CTOR_OFFSET))(this);
		}

		::PFLOIHLLMEE* __cctor_b__46_0()
		{
			return ((::PFLOIHLLMEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFLOIHLLMEE___C___CCTOR_B__46_0_OFFSET))(this);
		}

	};
