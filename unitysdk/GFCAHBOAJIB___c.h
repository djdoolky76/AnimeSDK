#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFCAHBOAJIB;
namespace System { class Object; }

#define GFCAHBOAJIB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F74E740)
#define GFCAHBOAJIB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F74E780)
#define GFCAHBOAJIB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F74E790)

inline static constexpr unsigned int GFCAHBOAJIB___c_TypeDefinitionIndex = 35065;

	class GFCAHBOAJIB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x9F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFCAHBOAJIB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCAHBOAJIB___C_CTOR_OFFSET))(this);
		}

		::GFCAHBOAJIB* __cctor_b__28_0()
		{
			return ((::GFCAHBOAJIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCAHBOAJIB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
