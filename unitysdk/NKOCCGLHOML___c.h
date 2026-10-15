#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKOCCGLHOML;
namespace System { class Object; }

#define NKOCCGLHOML___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB5F300)
#define NKOCCGLHOML___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB5F340)
#define NKOCCGLHOML___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EB5F350)

inline static constexpr unsigned int NKOCCGLHOML___c_TypeDefinitionIndex = 27741;

	class NKOCCGLHOML___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x666B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKOCCGLHOML___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOCCGLHOML___C_CTOR_OFFSET))(this);
		}

		::NKOCCGLHOML* __cctor_b__18_0()
		{
			return ((::NKOCCGLHOML*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOCCGLHOML___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
