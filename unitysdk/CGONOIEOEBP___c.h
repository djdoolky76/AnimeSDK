#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGONOIEOEBP;
namespace System { class Object; }

#define CGONOIEOEBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0BA2C0)
#define CGONOIEOEBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0BA300)
#define CGONOIEOEBP___C___CCTOR_B__40_0_OFFSET UNITYSDK_OFFSET(0x1E0BA310)

inline static constexpr unsigned int CGONOIEOEBP___c_TypeDefinitionIndex = 29867;

	class CGONOIEOEBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x151D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGONOIEOEBP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGONOIEOEBP___C_CTOR_OFFSET))(this);
		}

		::CGONOIEOEBP* __cctor_b__40_0()
		{
			return ((::CGONOIEOEBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGONOIEOEBP___C___CCTOR_B__40_0_OFFSET))(this);
		}

	};
