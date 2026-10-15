#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOIBKAPDBMM;
namespace System { class Object; }

#define LOIBKAPDBMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E993460)
#define LOIBKAPDBMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9934A0)
#define LOIBKAPDBMM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E9934B0)

inline static constexpr unsigned int LOIBKAPDBMM___c_TypeDefinitionIndex = 27398;

	class LOIBKAPDBMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOIBKAPDBMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIBKAPDBMM___C_CTOR_OFFSET))(this);
		}

		::LOIBKAPDBMM* __cctor_b__18_0()
		{
			return ((::LOIBKAPDBMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOIBKAPDBMM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
