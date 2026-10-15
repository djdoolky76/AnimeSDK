#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMBDOOHKIBC;
namespace System { class Object; }

#define HMBDOOHKIBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5CAE10)
#define HMBDOOHKIBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CAE50)
#define HMBDOOHKIBC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5CAE60)

inline static constexpr unsigned int HMBDOOHKIBC___c_TypeDefinitionIndex = 29445;

	class HMBDOOHKIBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49A10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMBDOOHKIBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBDOOHKIBC___C_CTOR_OFFSET))(this);
		}

		::HMBDOOHKIBC* __cctor_b__23_0()
		{
			return ((::HMBDOOHKIBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBDOOHKIBC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
