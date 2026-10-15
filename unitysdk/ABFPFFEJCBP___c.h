#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABFPFFEJCBP;
namespace System { class Object; }

#define ABFPFFEJCBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD9E810)
#define ABFPFFEJCBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD9E840)
#define ABFPFFEJCBP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DD9E850)

inline static constexpr unsigned int ABFPFFEJCBP___c_TypeDefinitionIndex = 32355;

	class ABFPFFEJCBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30BA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABFPFFEJCBP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFPFFEJCBP___C_CTOR_OFFSET))(this);
		}

		::ABFPFFEJCBP* __cctor_b__28_0()
		{
			return ((::ABFPFFEJCBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFPFFEJCBP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
