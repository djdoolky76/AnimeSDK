#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNCEFFFGNEN;
namespace System { class Object; }

#define NNCEFFFGNEN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB529A0)
#define NNCEFFFGNEN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB529E0)
#define NNCEFFFGNEN___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1EB529F0)

inline static constexpr unsigned int NNCEFFFGNEN___c_TypeDefinitionIndex = 32501;

	class NNCEFFFGNEN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNCEFFFGNEN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCEFFFGNEN___C_CTOR_OFFSET))(this);
		}

		::NNCEFFFGNEN* __cctor_b__43_0()
		{
			return ((::NNCEFFFGNEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCEFFFGNEN___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
