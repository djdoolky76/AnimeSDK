#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFBJJJOBGHB;
namespace System { class Object; }

#define IFBJJJOBGHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E615900)
#define IFBJJJOBGHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E615930)
#define IFBJJJOBGHB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E615940)

inline static constexpr unsigned int IFBJJJOBGHB___c_TypeDefinitionIndex = 34636;

	class IFBJJJOBGHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49FF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFBJJJOBGHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBJJJOBGHB___C_CTOR_OFFSET))(this);
		}

		::IFBJJJOBGHB* __cctor_b__28_0()
		{
			return ((::IFBJJJOBGHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBJJJOBGHB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
