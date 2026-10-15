#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOFFNNNIDMM;
namespace System { class Object; }

#define LOFFNNNIDMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9BC350)
#define LOFFNNNIDMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9BC390)
#define LOFFNNNIDMM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9BC3A0)

inline static constexpr unsigned int LOFFNNNIDMM___c_TypeDefinitionIndex = 31831;

	class LOFFNNNIDMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOFFNNNIDMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFFNNNIDMM___C_CTOR_OFFSET))(this);
		}

		::LOFFNNNIDMM* __cctor_b__23_0()
		{
			return ((::LOFFNNNIDMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFFNNNIDMM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
