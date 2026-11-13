#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBIAJJCMNKO;
namespace System { class Object; }

#define IBIAJJCMNKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203AFA20)
#define IBIAJJCMNKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203AFA60)
#define IBIAJJCMNKO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x203AFA70)

inline static constexpr unsigned int IBIAJJCMNKO___c_TypeDefinitionIndex = 27925;

	class IBIAJJCMNKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44980);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBIAJJCMNKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIAJJCMNKO___C_CTOR_OFFSET))(this);
		}

		::IBIAJJCMNKO* __cctor_b__28_0()
		{
			return ((::IBIAJJCMNKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBIAJJCMNKO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
