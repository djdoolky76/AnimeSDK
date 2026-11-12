#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMOJMNKOILL;
namespace System { class Object; }

#define DMOJMNKOILL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4CEFF0)
#define DMOJMNKOILL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4CF030)
#define DMOJMNKOILL___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F4CF040)

inline static constexpr unsigned int DMOJMNKOILL___c_TypeDefinitionIndex = 28097;

	class DMOJMNKOILL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3AE80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMOJMNKOILL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOJMNKOILL___C_CTOR_OFFSET))(this);
		}

		::DMOJMNKOILL* __cctor_b__38_0()
		{
			return ((::DMOJMNKOILL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOJMNKOILL___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
