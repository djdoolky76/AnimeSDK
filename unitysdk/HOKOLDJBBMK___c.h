#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HOKOLDJBBMK;
namespace System { class Object; }

#define HOKOLDJBBMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5ED2D0)
#define HOKOLDJBBMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5ED310)
#define HOKOLDJBBMK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E5ED320)

inline static constexpr unsigned int HOKOLDJBBMK___c_TypeDefinitionIndex = 28150;

	class HOKOLDJBBMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E0B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOKOLDJBBMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKOLDJBBMK___C_CTOR_OFFSET))(this);
		}

		::HOKOLDJBBMK* __cctor_b__33_0()
		{
			return ((::HOKOLDJBBMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKOLDJBBMK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
