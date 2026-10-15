#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEKKPBIKINI;
namespace System { class Object; }

#define BEKKPBIKINI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA36650)
#define BEKKPBIKINI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA36690)
#define BEKKPBIKINI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA366A0)

inline static constexpr unsigned int BEKKPBIKINI___c_TypeDefinitionIndex = 27149;

	class BEKKPBIKINI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x534E0);
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
