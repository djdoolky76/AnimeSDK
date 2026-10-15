#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICOPHOIEECL;
namespace System { class Object; }

#define ICOPHOIEECL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F9E10)
#define ICOPHOIEECL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F9E40)
#define ICOPHOIEECL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5F9E50)

inline static constexpr unsigned int ICOPHOIEECL___c_TypeDefinitionIndex = 34018;

	class ICOPHOIEECL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x458E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICOPHOIEECL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOPHOIEECL___C_CTOR_OFFSET))(this);
		}

		::ICOPHOIEECL* __cctor_b__28_0()
		{
			return ((::ICOPHOIEECL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOPHOIEECL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
