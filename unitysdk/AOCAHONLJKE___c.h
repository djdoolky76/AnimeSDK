#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOCAHONLJKE;
namespace System { class Object; }

#define AOCAHONLJKE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E669A30)
#define AOCAHONLJKE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E669A70)
#define AOCAHONLJKE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E669A80)

inline static constexpr unsigned int AOCAHONLJKE___c_TypeDefinitionIndex = 30947;

	class AOCAHONLJKE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOCAHONLJKE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOCAHONLJKE___C_CTOR_OFFSET))(this);
		}

		::AOCAHONLJKE* __cctor_b__28_0()
		{
			return ((::AOCAHONLJKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOCAHONLJKE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
