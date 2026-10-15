#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKDACEAEDDE;
namespace System { class Object; }

#define HKDACEAEDDE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5822A0)
#define HKDACEAEDDE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5822E0)
#define HKDACEAEDDE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5822F0)

inline static constexpr unsigned int HKDACEAEDDE___c_TypeDefinitionIndex = 29250;

	class HKDACEAEDDE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x369A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKDACEAEDDE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKDACEAEDDE___C_CTOR_OFFSET))(this);
		}

		::HKDACEAEDDE* __cctor_b__23_0()
		{
			return ((::HKDACEAEDDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKDACEAEDDE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
