#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAMLGHGHIOD;
namespace System { class Object; }

#define FAMLGHGHIOD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2FCB60)
#define FAMLGHGHIOD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2FCBA0)
#define FAMLGHGHIOD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E2FCBB0)

inline static constexpr unsigned int FAMLGHGHIOD___c_TypeDefinitionIndex = 27735;

	class FAMLGHGHIOD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D4E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAMLGHGHIOD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMLGHGHIOD___C_CTOR_OFFSET))(this);
		}

		::FAMLGHGHIOD* __cctor_b__33_0()
		{
			return ((::FAMLGHGHIOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAMLGHGHIOD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
