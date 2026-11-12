#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMDAAIKLAJA;
namespace System { class Object; }

#define FMDAAIKLAJA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6CC230)
#define FMDAAIKLAJA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6CC260)
#define FMDAAIKLAJA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F6CC270)

inline static constexpr unsigned int FMDAAIKLAJA___c_TypeDefinitionIndex = 25668;

	class FMDAAIKLAJA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BDC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMDAAIKLAJA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDAAIKLAJA___C_CTOR_OFFSET))(this);
		}

		::FMDAAIKLAJA* __cctor_b__33_0()
		{
			return ((::FMDAAIKLAJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDAAIKLAJA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
