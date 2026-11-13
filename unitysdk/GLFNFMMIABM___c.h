#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLFNFMMIABM;
namespace System { class Object; }

#define GLFNFMMIABM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA3CE80)
#define GLFNFMMIABM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA3CEC0)
#define GLFNFMMIABM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FA3CED0)

inline static constexpr unsigned int GLFNFMMIABM___c_TypeDefinitionIndex = 26976;

	class GLFNFMMIABM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLFNFMMIABM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFNFMMIABM___C_CTOR_OFFSET))(this);
		}

		::GLFNFMMIABM* __cctor_b__28_0()
		{
			return ((::GLFNFMMIABM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFNFMMIABM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
