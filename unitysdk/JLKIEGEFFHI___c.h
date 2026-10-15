#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLKIEGEFFHI;
namespace System { class Object; }

#define JLKIEGEFFHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E752D60)
#define JLKIEGEFFHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E752DA0)
#define JLKIEGEFFHI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E752DB0)

inline static constexpr unsigned int JLKIEGEFFHI___c_TypeDefinitionIndex = 34010;

	class JLKIEGEFFHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLKIEGEFFHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKIEGEFFHI___C_CTOR_OFFSET))(this);
		}

		::JLKIEGEFFHI* __cctor_b__23_0()
		{
			return ((::JLKIEGEFFHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKIEGEFFHI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
