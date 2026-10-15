#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHNHMAGJNFN;
namespace System { class Object; }

#define KHNHMAGJNFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E84D320)
#define KHNHMAGJNFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E84D360)
#define KHNHMAGJNFN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E84D370)

inline static constexpr unsigned int KHNHMAGJNFN___c_TypeDefinitionIndex = 26704;

	class KHNHMAGJNFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17D90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHNHMAGJNFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNHMAGJNFN___C_CTOR_OFFSET))(this);
		}

		::KHNHMAGJNFN* __cctor_b__28_0()
		{
			return ((::KHNHMAGJNFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNHMAGJNFN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
