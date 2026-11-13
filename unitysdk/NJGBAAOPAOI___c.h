#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJGBAAOPAOI;
namespace System { class Object; }

#define NJGBAAOPAOI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD4270)
#define NJGBAAOPAOI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD42B0)
#define NJGBAAOPAOI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAD42C0)

inline static constexpr unsigned int NJGBAAOPAOI___c_TypeDefinitionIndex = 29785;

	class NJGBAAOPAOI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJGBAAOPAOI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGBAAOPAOI___C_CTOR_OFFSET))(this);
		}

		::NJGBAAOPAOI* __cctor_b__28_0()
		{
			return ((::NJGBAAOPAOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGBAAOPAOI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
