#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGEPCIIPMEF;
namespace System { class Object; }

#define AGEPCIIPMEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E12B2D0)
#define AGEPCIIPMEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E12B300)
#define AGEPCIIPMEF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E12B310)

inline static constexpr unsigned int AGEPCIIPMEF___c_TypeDefinitionIndex = 27079;

	class AGEPCIIPMEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGEPCIIPMEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEPCIIPMEF___C_CTOR_OFFSET))(this);
		}

		::AGEPCIIPMEF* __cctor_b__18_0()
		{
			return ((::AGEPCIIPMEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEPCIIPMEF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
