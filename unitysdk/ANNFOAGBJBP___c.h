#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANNFOAGBJBP;
namespace System { class Object; }

#define ANNFOAGBJBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E664B10)
#define ANNFOAGBJBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E664B50)
#define ANNFOAGBJBP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E664B60)

inline static constexpr unsigned int ANNFOAGBJBP___c_TypeDefinitionIndex = 28413;

	class ANNFOAGBJBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3FB90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANNFOAGBJBP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNFOAGBJBP___C_CTOR_OFFSET))(this);
		}

		::ANNFOAGBJBP* __cctor_b__23_0()
		{
			return ((::ANNFOAGBJBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNFOAGBJBP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
