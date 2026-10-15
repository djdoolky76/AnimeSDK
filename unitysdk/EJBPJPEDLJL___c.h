#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJBPJPEDLJL;
namespace System { class Object; }

#define EJBPJPEDLJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E283130)
#define EJBPJPEDLJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E283170)
#define EJBPJPEDLJL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E283180)

inline static constexpr unsigned int EJBPJPEDLJL___c_TypeDefinitionIndex = 30878;

	class EJBPJPEDLJL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B980);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJBPJPEDLJL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBPJPEDLJL___C_CTOR_OFFSET))(this);
		}

		::EJBPJPEDLJL* __cctor_b__28_0()
		{
			return ((::EJBPJPEDLJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBPJPEDLJL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
