#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNMEHOIANGN;
namespace System { class Object; }

#define FNMEHOIANGN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F4190)
#define FNMEHOIANGN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F41C0)
#define FNMEHOIANGN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3F41D0)

inline static constexpr unsigned int FNMEHOIANGN___c_TypeDefinitionIndex = 27834;

	class FNMEHOIANGN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNMEHOIANGN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNMEHOIANGN___C_CTOR_OFFSET))(this);
		}

		::FNMEHOIANGN* __cctor_b__28_0()
		{
			return ((::FNMEHOIANGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNMEHOIANGN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
