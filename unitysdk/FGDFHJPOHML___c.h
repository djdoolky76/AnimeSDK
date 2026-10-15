#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGDFHJPOHML;
namespace System { class Object; }

#define FGDFHJPOHML___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E37AE50)
#define FGDFHJPOHML___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E37AE90)
#define FGDFHJPOHML___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E37AEA0)

inline static constexpr unsigned int FGDFHJPOHML___c_TypeDefinitionIndex = 31156;

	class FGDFHJPOHML___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGDFHJPOHML___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDFHJPOHML___C_CTOR_OFFSET))(this);
		}

		::FGDFHJPOHML* __cctor_b__23_0()
		{
			return ((::FGDFHJPOHML*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGDFHJPOHML___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
