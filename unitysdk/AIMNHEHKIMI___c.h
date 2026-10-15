#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIMNHEHKIMI;
namespace System { class Object; }

#define AIMNHEHKIMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2803A0)
#define AIMNHEHKIMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2803E0)
#define AIMNHEHKIMI___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E2803F0)

inline static constexpr unsigned int AIMNHEHKIMI___c_TypeDefinitionIndex = 31813;

	class AIMNHEHKIMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x334D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIMNHEHKIMI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMNHEHKIMI___C_CTOR_OFFSET))(this);
		}

		::AIMNHEHKIMI* __cctor_b__43_0()
		{
			return ((::AIMNHEHKIMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIMNHEHKIMI___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
