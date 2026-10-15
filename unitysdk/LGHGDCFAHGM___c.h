#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGHGDCFAHGM;
namespace System { class Object; }

#define LGHGDCFAHGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E926890)
#define LGHGDCFAHGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9268C0)
#define LGHGDCFAHGM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E9268D0)

inline static constexpr unsigned int LGHGDCFAHGM___c_TypeDefinitionIndex = 32131;

	class LGHGDCFAHGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGHGDCFAHGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHGDCFAHGM___C_CTOR_OFFSET))(this);
		}

		::LGHGDCFAHGM* __cctor_b__38_0()
		{
			return ((::LGHGDCFAHGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHGDCFAHGM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
