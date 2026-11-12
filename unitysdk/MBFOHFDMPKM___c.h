#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBFOHFDMPKM;
namespace System { class Object; }

#define MBFOHFDMPKM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD0DBB0)
#define MBFOHFDMPKM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD0DBF0)
#define MBFOHFDMPKM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FD0DC00)

inline static constexpr unsigned int MBFOHFDMPKM___c_TypeDefinitionIndex = 26577;

	class MBFOHFDMPKM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CFD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBFOHFDMPKM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFOHFDMPKM___C_CTOR_OFFSET))(this);
		}

		::MBFOHFDMPKM* __cctor_b__38_0()
		{
			return ((::MBFOHFDMPKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBFOHFDMPKM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
