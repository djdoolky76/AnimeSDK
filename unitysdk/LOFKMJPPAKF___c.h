#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOFKMJPPAKF;
namespace System { class Object; }

#define LOFKMJPPAKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E98F6D0)
#define LOFKMJPPAKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E98F700)
#define LOFKMJPPAKF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E98F710)

inline static constexpr unsigned int LOFKMJPPAKF___c_TypeDefinitionIndex = 27014;

	class LOFKMJPPAKF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41820);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOFKMJPPAKF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFKMJPPAKF___C_CTOR_OFFSET))(this);
		}

		::LOFKMJPPAKF* __cctor_b__28_0()
		{
			return ((::LOFKMJPPAKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFKMJPPAKF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
