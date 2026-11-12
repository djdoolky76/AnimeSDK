#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEAEMNNKKEF;
namespace System { class Object; }

#define NEAEMNNKKEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE2FB70)
#define NEAEMNNKKEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE2FBB0)
#define NEAEMNNKKEF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FE2FBC0)

inline static constexpr unsigned int NEAEMNNKKEF___c_TypeDefinitionIndex = 32020;

	class NEAEMNNKKEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68A70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEAEMNNKKEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAEMNNKKEF___C_CTOR_OFFSET))(this);
		}

		::NEAEMNNKKEF* __cctor_b__28_0()
		{
			return ((::NEAEMNNKKEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEAEMNNKKEF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
