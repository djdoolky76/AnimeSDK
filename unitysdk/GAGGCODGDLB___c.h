#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAGGCODGDLB;
namespace System { class Object; }

#define GAGGCODGDLB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3EE7E0)
#define GAGGCODGDLB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3EE810)
#define GAGGCODGDLB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3EE820)

inline static constexpr unsigned int GAGGCODGDLB___c_TypeDefinitionIndex = 34735;

	class GAGGCODGDLB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2CA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAGGCODGDLB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGGCODGDLB___C_CTOR_OFFSET))(this);
		}

		::GAGGCODGDLB* __cctor_b__28_0()
		{
			return ((::GAGGCODGDLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGGCODGDLB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
