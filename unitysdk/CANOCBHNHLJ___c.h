#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CANOCBHNHLJ;
namespace System { class Object; }

#define CANOCBHNHLJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E032890)
#define CANOCBHNHLJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0328D0)
#define CANOCBHNHLJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0328E0)

inline static constexpr unsigned int CANOCBHNHLJ___c_TypeDefinitionIndex = 31811;

	class CANOCBHNHLJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CANOCBHNHLJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CANOCBHNHLJ___C_CTOR_OFFSET))(this);
		}

		::CANOCBHNHLJ* __cctor_b__23_0()
		{
			return ((::CANOCBHNHLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CANOCBHNHLJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
