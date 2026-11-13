#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJPMMKIJIFH;
namespace System { class Object; }

#define OJPMMKIJIFH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6A9990)
#define OJPMMKIJIFH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6A99D0)
#define OJPMMKIJIFH___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F6A99E0)

inline static constexpr unsigned int OJPMMKIJIFH___c_TypeDefinitionIndex = 34241;

	class OJPMMKIJIFH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJPMMKIJIFH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJPMMKIJIFH___C_CTOR_OFFSET))(this);
		}

		::OJPMMKIJIFH* __cctor_b__38_0()
		{
			return ((::OJPMMKIJIFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJPMMKIJIFH___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
