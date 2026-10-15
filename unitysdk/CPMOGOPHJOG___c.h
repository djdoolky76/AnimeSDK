#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPMOGOPHJOG;
namespace System { class Object; }

#define CPMOGOPHJOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1185A0)
#define CPMOGOPHJOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1185E0)
#define CPMOGOPHJOG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1185F0)

inline static constexpr unsigned int CPMOGOPHJOG___c_TypeDefinitionIndex = 27089;

	class CPMOGOPHJOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPMOGOPHJOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMOGOPHJOG___C_CTOR_OFFSET))(this);
		}

		::CPMOGOPHJOG* __cctor_b__28_0()
		{
			return ((::CPMOGOPHJOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMOGOPHJOG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
