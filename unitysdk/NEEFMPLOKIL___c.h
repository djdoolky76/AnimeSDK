#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEEFMPLOKIL;
namespace System { class Object; }

#define NEEFMPLOKIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC5C20)
#define NEEFMPLOKIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC5C60)
#define NEEFMPLOKIL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EAC5C70)

inline static constexpr unsigned int NEEFMPLOKIL___c_TypeDefinitionIndex = 30009;

	class NEEFMPLOKIL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEEFMPLOKIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEFMPLOKIL___C_CTOR_OFFSET))(this);
		}

		::NEEFMPLOKIL* __cctor_b__33_0()
		{
			return ((::NEEFMPLOKIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEFMPLOKIL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
