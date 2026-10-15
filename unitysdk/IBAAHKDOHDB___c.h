#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBAAHKDOHDB;
namespace System { class Object; }

#define IBAAHKDOHDB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E60EC70)
#define IBAAHKDOHDB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E60ECA0)
#define IBAAHKDOHDB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E60ECB0)

inline static constexpr unsigned int IBAAHKDOHDB___c_TypeDefinitionIndex = 28838;

	class IBAAHKDOHDB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBAAHKDOHDB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAAHKDOHDB___C_CTOR_OFFSET))(this);
		}

		::IBAAHKDOHDB* __cctor_b__23_0()
		{
			return ((::IBAAHKDOHDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBAAHKDOHDB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
