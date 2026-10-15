#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNIAFCGKEOP;
namespace System { class Object; }

#define DNIAFCGKEOP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1F7640)
#define DNIAFCGKEOP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F7680)
#define DNIAFCGKEOP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1F7690)

inline static constexpr unsigned int DNIAFCGKEOP___c_TypeDefinitionIndex = 34884;

	class DNIAFCGKEOP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNIAFCGKEOP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIAFCGKEOP___C_CTOR_OFFSET))(this);
		}

		::DNIAFCGKEOP* __cctor_b__28_0()
		{
			return ((::DNIAFCGKEOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIAFCGKEOP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
