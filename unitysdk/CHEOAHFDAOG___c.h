#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHEOAHFDAOG;
namespace System { class Object; }

#define CHEOAHFDAOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E096B00)
#define CHEOAHFDAOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E096B30)
#define CHEOAHFDAOG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E096B40)

inline static constexpr unsigned int CHEOAHFDAOG___c_TypeDefinitionIndex = 33891;

	class CHEOAHFDAOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x151E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHEOAHFDAOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEOAHFDAOG___C_CTOR_OFFSET))(this);
		}

		::CHEOAHFDAOG* __cctor_b__38_0()
		{
			return ((::CHEOAHFDAOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEOAHFDAOG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
