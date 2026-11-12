#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNMEHOIANGN;
namespace System { class Object; }

#define FNMEHOIANGN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6E02F0)
#define FNMEHOIANGN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6E0320)
#define FNMEHOIANGN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F6E0330)

inline static constexpr unsigned int FNMEHOIANGN___c_TypeDefinitionIndex = 28411;

	class FNMEHOIANGN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4F660);
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
