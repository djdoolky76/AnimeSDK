#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPMNCENLCAB;
namespace System { class Object; }

#define HPMNCENLCAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5FDF40)
#define HPMNCENLCAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5FDF80)
#define HPMNCENLCAB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5FDF90)

inline static constexpr unsigned int HPMNCENLCAB___c_TypeDefinitionIndex = 29317;

	class HPMNCENLCAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x524E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPMNCENLCAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMNCENLCAB___C_CTOR_OFFSET))(this);
		}

		::HPMNCENLCAB* __cctor_b__23_0()
		{
			return ((::HPMNCENLCAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPMNCENLCAB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
