#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIDHIFECNAH;
namespace System { class Object; }

#define KIDHIFECNAH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E82A920)
#define KIDHIFECNAH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E82A960)
#define KIDHIFECNAH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E82A970)

inline static constexpr unsigned int KIDHIFECNAH___c_TypeDefinitionIndex = 33508;

	class KIDHIFECNAH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x180C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIDHIFECNAH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDHIFECNAH___C_CTOR_OFFSET))(this);
		}

		::KIDHIFECNAH* __cctor_b__28_0()
		{
			return ((::KIDHIFECNAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDHIFECNAH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
