#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMHEHLIFNGJ;
namespace System { class Object; }

#define FMHEHLIFNGJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E67A0)
#define FMHEHLIFNGJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E67E0)
#define FMHEHLIFNGJ___C___CCTOR_B__62_0_OFFSET UNITYSDK_OFFSET(0x1E3E67F0)

inline static constexpr unsigned int FMHEHLIFNGJ___c_TypeDefinitionIndex = 25772;

	class FMHEHLIFNGJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64C30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMHEHLIFNGJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMHEHLIFNGJ___C_CTOR_OFFSET))(this);
		}

		::FMHEHLIFNGJ* __cctor_b__62_0()
		{
			return ((::FMHEHLIFNGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMHEHLIFNGJ___C___CCTOR_B__62_0_OFFSET))(this);
		}

	};
