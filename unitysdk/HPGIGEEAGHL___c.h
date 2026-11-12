#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPGIGEEAGHL;
namespace System { class Object; }

#define HPGIGEEAGHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8F21A0)
#define HPGIGEEAGHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8F21E0)
#define HPGIGEEAGHL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F8F21F0)

inline static constexpr unsigned int HPGIGEEAGHL___c_TypeDefinitionIndex = 35889;

	class HPGIGEEAGHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPGIGEEAGHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGIGEEAGHL___C_CTOR_OFFSET))(this);
		}

		::HPGIGEEAGHL* __cctor_b__23_0()
		{
			return ((::HPGIGEEAGHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGIGEEAGHL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
