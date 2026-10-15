#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCACCGHOGDB;
namespace System { class Object; }

#define LCACCGHOGDB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8B4E50)
#define LCACCGHOGDB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B4E90)
#define LCACCGHOGDB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E8B4EA0)

inline static constexpr unsigned int LCACCGHOGDB___c_TypeDefinitionIndex = 27913;

	class LCACCGHOGDB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x29F70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCACCGHOGDB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCACCGHOGDB___C_CTOR_OFFSET))(this);
		}

		::LCACCGHOGDB* __cctor_b__28_0()
		{
			return ((::LCACCGHOGDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCACCGHOGDB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
