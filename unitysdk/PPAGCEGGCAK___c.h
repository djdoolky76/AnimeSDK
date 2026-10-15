#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPAGCEGGCAK;
namespace System { class Object; }

#define PPAGCEGGCAK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFD2E50)
#define PPAGCEGGCAK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFD2E80)
#define PPAGCEGGCAK___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1DFD2E90)

inline static constexpr unsigned int PPAGCEGGCAK___c_TypeDefinitionIndex = 27326;

	class PPAGCEGGCAK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPAGCEGGCAK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPAGCEGGCAK___C_CTOR_OFFSET))(this);
		}

		::PPAGCEGGCAK* __cctor_b__48_0()
		{
			return ((::PPAGCEGGCAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPAGCEGGCAK___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
