#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOIJKIKLBEG;
namespace System { class Object; }

#define DOIJKIKLBEG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D4990)
#define DOIJKIKLBEG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D49D0)
#define DOIJKIKLBEG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1D49E0)

inline static constexpr unsigned int DOIJKIKLBEG___c_TypeDefinitionIndex = 31371;

	class DOIJKIKLBEG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37F30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOIJKIKLBEG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIJKIKLBEG___C_CTOR_OFFSET))(this);
		}

		::DOIJKIKLBEG* __cctor_b__28_0()
		{
			return ((::DOIJKIKLBEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIJKIKLBEG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
