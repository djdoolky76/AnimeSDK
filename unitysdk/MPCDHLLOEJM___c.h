#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPCDHLLOEJM;
namespace System { class Object; }

#define MPCDHLLOEJM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDEF3A0)
#define MPCDHLLOEJM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDEF3E0)
#define MPCDHLLOEJM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FDEF3F0)

inline static constexpr unsigned int MPCDHLLOEJM___c_TypeDefinitionIndex = 31533;

	class MPCDHLLOEJM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65FF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPCDHLLOEJM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCDHLLOEJM___C_CTOR_OFFSET))(this);
		}

		::MPCDHLLOEJM* __cctor_b__33_0()
		{
			return ((::MPCDHLLOEJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPCDHLLOEJM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
