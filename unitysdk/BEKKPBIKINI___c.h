#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEKKPBIKINI;
namespace System { class Object; }

#define BEKKPBIKINI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9FEEC0)
#define BEKKPBIKINI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9FEF00)
#define BEKKPBIKINI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F9FEF10)

inline static constexpr unsigned int BEKKPBIKINI___c_TypeDefinitionIndex = 27680;

	class BEKKPBIKINI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49A80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEKKPBIKINI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKKPBIKINI___C_CTOR_OFFSET))(this);
		}

		::BEKKPBIKINI* __cctor_b__23_0()
		{
			return ((::BEKKPBIKINI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEKKPBIKINI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
