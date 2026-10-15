#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIGLIFFIIDC;
namespace System { class Object; }

#define CIGLIFFIIDC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D38E0)
#define CIGLIFFIIDC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D3920)
#define CIGLIFFIIDC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0D3930)

inline static constexpr unsigned int CIGLIFFIIDC___c_TypeDefinitionIndex = 25733;

	class CIGLIFFIIDC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIGLIFFIIDC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGLIFFIIDC___C_CTOR_OFFSET))(this);
		}

		::CIGLIFFIIDC* __cctor_b__28_0()
		{
			return ((::CIGLIFFIIDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGLIFFIIDC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
