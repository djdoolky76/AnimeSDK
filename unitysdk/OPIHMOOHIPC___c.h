#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPIHMOOHIPC;
namespace System { class Object; }

#define OPIHMOOHIPC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB5D50)
#define OPIHMOOHIPC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB5D90)
#define OPIHMOOHIPC___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DEB5DA0)

inline static constexpr unsigned int OPIHMOOHIPC___c_TypeDefinitionIndex = 28642;

	class OPIHMOOHIPC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPIHMOOHIPC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIHMOOHIPC___C_CTOR_OFFSET))(this);
		}

		::OPIHMOOHIPC* __cctor_b__43_0()
		{
			return ((::OPIHMOOHIPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIHMOOHIPC___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
