#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBKMCGDMNJO;
namespace System { class Object; }

#define LBKMCGDMNJO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8B1340)
#define LBKMCGDMNJO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B1370)
#define LBKMCGDMNJO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E8B1380)

inline static constexpr unsigned int LBKMCGDMNJO___c_TypeDefinitionIndex = 27824;

	class LBKMCGDMNJO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x26040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBKMCGDMNJO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKMCGDMNJO___C_CTOR_OFFSET))(this);
		}

		::LBKMCGDMNJO* __cctor_b__33_0()
		{
			return ((::LBKMCGDMNJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBKMCGDMNJO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
