#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBNBEIKABGE;
namespace System { class Object; }

#define FBNBEIKABGE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E33A420)
#define FBNBEIKABGE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E33A460)
#define FBNBEIKABGE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E33A470)

inline static constexpr unsigned int FBNBEIKABGE___c_TypeDefinitionIndex = 30127;

	class FBNBEIKABGE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59DD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBNBEIKABGE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNBEIKABGE___C_CTOR_OFFSET))(this);
		}

		::FBNBEIKABGE* __cctor_b__28_0()
		{
			return ((::FBNBEIKABGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNBEIKABGE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
