#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAGGCODGDLB;
namespace System { class Object; }

#define GAGGCODGDLB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F709AD0)
#define GAGGCODGDLB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F709B00)
#define GAGGCODGDLB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F709B10)

inline static constexpr unsigned int GAGGCODGDLB___c_TypeDefinitionIndex = 35663;

	class GAGGCODGDLB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x545B0);
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
