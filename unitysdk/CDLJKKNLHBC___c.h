#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDLJKKNLHBC;
namespace System { class Object; }

#define CDLJKKNLHBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E05B740)
#define CDLJKKNLHBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E05B780)
#define CDLJKKNLHBC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E05B790)

inline static constexpr unsigned int CDLJKKNLHBC___c_TypeDefinitionIndex = 31300;

	class CDLJKKNLHBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDLJKKNLHBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLJKKNLHBC___C_CTOR_OFFSET))(this);
		}

		::CDLJKKNLHBC* __cctor_b__23_0()
		{
			return ((::CDLJKKNLHBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLJKKNLHBC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
