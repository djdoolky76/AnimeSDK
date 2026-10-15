#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFHFMPLAJCC;
namespace System { class Object; }

#define HFHFMPLAJCC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E53D210)
#define HFHFMPLAJCC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E53D250)
#define HFHFMPLAJCC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E53D260)

inline static constexpr unsigned int HFHFMPLAJCC___c_TypeDefinitionIndex = 25231;

	class HFHFMPLAJCC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2EDF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFHFMPLAJCC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHFMPLAJCC___C_CTOR_OFFSET))(this);
		}

		::HFHFMPLAJCC* __cctor_b__23_0()
		{
			return ((::HFHFMPLAJCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHFMPLAJCC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
