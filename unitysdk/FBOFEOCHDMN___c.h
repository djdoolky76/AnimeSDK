#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBOFEOCHDMN;
namespace System { class Object; }

#define FBOFEOCHDMN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E33CC20)
#define FBOFEOCHDMN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E33CC60)
#define FBOFEOCHDMN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E33CC70)

inline static constexpr unsigned int FBOFEOCHDMN___c_TypeDefinitionIndex = 33318;

	class FBOFEOCHDMN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59EF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBOFEOCHDMN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOFEOCHDMN___C_CTOR_OFFSET))(this);
		}

		::FBOFEOCHDMN* __cctor_b__23_0()
		{
			return ((::FBOFEOCHDMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBOFEOCHDMN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
