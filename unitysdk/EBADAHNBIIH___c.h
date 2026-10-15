#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBADAHNBIIH;
namespace System { class Object; }

#define EBADAHNBIIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E203240)
#define EBADAHNBIIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E203280)
#define EBADAHNBIIH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E203290)

inline static constexpr unsigned int EBADAHNBIIH___c_TypeDefinitionIndex = 34095;

	class EBADAHNBIIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E9E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBADAHNBIIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBADAHNBIIH___C_CTOR_OFFSET))(this);
		}

		::EBADAHNBIIH* __cctor_b__28_0()
		{
			return ((::EBADAHNBIIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBADAHNBIIH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
