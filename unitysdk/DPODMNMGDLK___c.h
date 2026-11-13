#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPODMNMGDLK;
namespace System { class Object; }

#define DPODMNMGDLK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203E09B0)
#define DPODMNMGDLK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203E09E0)
#define DPODMNMGDLK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x203E09F0)

inline static constexpr unsigned int DPODMNMGDLK___c_TypeDefinitionIndex = 31797;

	class DPODMNMGDLK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPODMNMGDLK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPODMNMGDLK___C_CTOR_OFFSET))(this);
		}

		::DPODMNMGDLK* __cctor_b__33_0()
		{
			return ((::DPODMNMGDLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPODMNMGDLK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
