#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMLBPKOFHLM;
namespace System { class Object; }

#define HMLBPKOFHLM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A41B0)
#define HMLBPKOFHLM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A41E0)
#define HMLBPKOFHLM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5A41F0)

inline static constexpr unsigned int HMLBPKOFHLM___c_TypeDefinitionIndex = 25991;

	class HMLBPKOFHLM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39D30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMLBPKOFHLM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLBPKOFHLM___C_CTOR_OFFSET))(this);
		}

		::HMLBPKOFHLM* __cctor_b__28_0()
		{
			return ((::HMLBPKOFHLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLBPKOFHLM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
