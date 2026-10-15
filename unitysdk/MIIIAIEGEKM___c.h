#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MIIIAIEGEKM;
namespace System { class Object; }

#define MIIIAIEGEKM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA0F6B0)
#define MIIIAIEGEKM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA0F6F0)
#define MIIIAIEGEKM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EA0F700)

inline static constexpr unsigned int MIIIAIEGEKM___c_TypeDefinitionIndex = 26535;

	class MIIIAIEGEKM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52CA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIIIAIEGEKM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIIAIEGEKM___C_CTOR_OFFSET))(this);
		}

		::MIIIAIEGEKM* __cctor_b__33_0()
		{
			return ((::MIIIAIEGEKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIIAIEGEKM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
