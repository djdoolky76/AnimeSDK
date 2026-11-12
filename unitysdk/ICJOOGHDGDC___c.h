#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICJOOGHDGDC;
namespace System { class Object; }

#define ICJOOGHDGDC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F93EC30)
#define ICJOOGHDGDC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F93EC70)
#define ICJOOGHDGDC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F93EC80)

inline static constexpr unsigned int ICJOOGHDGDC___c_TypeDefinitionIndex = 30014;

	class ICJOOGHDGDC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICJOOGHDGDC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJOOGHDGDC___C_CTOR_OFFSET))(this);
		}

		::ICJOOGHDGDC* __cctor_b__18_0()
		{
			return ((::ICJOOGHDGDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJOOGHDGDC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
